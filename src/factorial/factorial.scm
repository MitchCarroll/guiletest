;;; This file was automatically generated by SWIG (http://www.swig.org).
;;; Version 2.0.8
;;;
;;; Do not make changes to this file unless you know what you are doing--modify
;;; the SWIG interface file instead.

(define-module (factorial factorial))

(use-modules (oop goops) (Swig common))
(use-modules ((factorial factorial-primitive) :renamer (symbol-prefix-proc 'primitive:)))
(define -FACTORIAL-H primitive:-FACTORIAL-H)
(define factorial primitive:factorial)
(define-class <Fact> (<swig>)
  #:metaclass <swig-metaclass>
  #:new-function primitive:new-Fact
)
(define-method (value (self <Fact>))
  (primitive:Fact-value self))

(primitive:Fact-swig-guile-setgoopsclass <Fact>)


(export -FACTORIAL-H factorial <Fact> value )