# Matrix multiplication

Simple Linear algebra from [Lienar Algebra and Retro Gamming](http://web.csulb.edu/~jchang9/m247/m247_sp12_Daniel_Kris_James_Walter.pdf)


TRANSLATION
-----------
=> A (movement)

1 0 0
 
0 1 2
 
0 0 1
 

=> B (current position)

0 2 1 

0 0 3 

1 1 1 


(0,0)(0,0) = 0

(0,1)(1,0) = 0

(0,2)(2,0) = 0

final result for index (0, 0) = 0

(1,0)(0,0) = 0

(1,1)(1,0) = 0

(1,2)(2,0) = 2

final result for index (1, 0) = 2

(2,0)(0,0) = 0

(2,1)(1,0) = 0

(2,2)(2,0) = 1
final result for index (2, 0) = 1

(0,0)(0,1) = 2

(0,1)(1,1) = 2

(0,2)(2,1) = 2

final result for index (0, 1) = 2

(1,0)(0,1) = 0

(1,1)(1,1) = 0

(1,2)(2,1) = 2

final result for index (1, 1) = 2

(2,0)(0,1) = 0

(2,1)(1,1) = 0

(2,2)(2,1) = 1


final result for index (2, 1) = 1



(0,0)(0,2) = 1

(0,1)(1,2) = 1

(0,2)(2,2) = 1

final result for index (0, 2) = 1


(1,0)(0,2) = 0

(1,1)(1,2) = 3

(1,2)(2,2) = 5

final result for index (1, 2) = 5


(2,0)(0,2) = 0

(2,1)(1,2) = 0

(2,2)(2,2) = 1

final result for index (2, 2) = 1



=> Result

0 2 1 

2 2 5 

1 1 1 



ROTATION RIGHT
--------------

=> F (rotation)

0 -1 0 

0 0 0 

0 0 1 



=> G (current position)

0 2 1 

0 0 3 

1 1 1 


