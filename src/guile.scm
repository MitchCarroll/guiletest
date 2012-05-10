#!/usr/bin/guile -s
!#

(define factorial
  (lambda (n)
    (if (zero? n)
	1
	(* n (factorial (- n 1))))))

(define test 
  (lambda ()
    (begin
      (display (factorial 5))
      (newline))))
  
