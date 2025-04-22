(* Calculate mean by summing and dividing by length *)
let mean lst =
  let sum = List.fold_left (+) 0 lst in
  float_of_int sum /. float_of_int (List.length lst)

(* Sort and get the middle element(s) to compute median *)
let median lst =
  let sorted = List.sort compare lst in
  let len = List.length sorted in
  if len mod 2 = 1 then
    float_of_int (List.nth sorted (len / 2))
  else
    let a = List.nth sorted (len / 2 - 1)
    and b = List.nth sorted (len / 2) in
    (float_of_int (a + b)) /. 2.0

(* Build frequency table and find the values with the highest count *)
let mode lst =
  let freq_table =
    List.fold_left
      (fun acc x ->
        let count = try List.assoc x acc + 1 with Not_found -> 1 in
        (x, count) :: List.remove_assoc x acc)
      [] lst
  in
  let max_freq = List.fold_left (fun acc (_, freq) -> max acc freq) 0 freq_table in
  List.filter (fun (_, freq) -> freq = max_freq) freq_table
  |> List.map fst

(* Entry point with example list *)
let () =
  let nums = [1; 2; 2; 3; 4] in
  Printf.printf "Mean: %.2f\n" (mean nums);
  Printf.printf "Median: %.2f\n" (median nums);
  Printf.printf "Mode: %s\n"
    (String.concat ", " (List.map string_of_int (mode nums)))
