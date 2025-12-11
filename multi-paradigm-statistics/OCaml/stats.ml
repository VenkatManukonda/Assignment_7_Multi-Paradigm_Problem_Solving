(* Mean using fold for summation *)
let mean lst =
  match lst with
  | [] -> 0.0
  | _ ->
      let total = List.fold_left (fun acc x -> acc +. x) 0.0 lst in
      total /. float_of_int (List.length lst)

(* Median using sort + pattern logic *)
let median lst =
  match lst with
  | [] -> 0.0
  | _ ->
      let sorted = List.sort compare lst in
      let len = List.length sorted in
      if len mod 2 = 0 then
        let a = List.nth sorted (len/2 - 1)
        and b = List.nth sorted (len/2) in
        (a +. b) /. 2.0
      else
        List.nth sorted (len/2)

(* Mode using a frequency map built functionally *)
let mode lst =
  let freq =
    List.fold_left
      (fun acc x ->
         let count = try List.assoc x acc with Not_found -> 0 in
         (x, count + 1) :: List.remove_assoc x acc)
      [] lst
  in
  fst (List.fold_left
         (fun (best_val, best_count) (v, c) ->
           if c > best_count then (v, c) else (best_val, best_count))
         (0.0, 0) freq)

(* Demo output *)
let () =
  let nums = [4.0; 2.0; 5.0; 2.0; 9.0; 2.0; 3.0] in
  Printf.printf "Mean: %.2f\n" (mean nums);
  Printf.printf "Median: %.2f\n" (median nums);
  Printf.printf "Mode: %.0f\n" (mode nums)