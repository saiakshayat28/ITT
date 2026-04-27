import math
a=float(input("Enter value of a:"))
b=float(input("Enter value of b:"))
c=float(input("Enter value of c:"))
d=(b*b-(4*a*c))
if(d>0):
   print"Roots are real and distinct"
   r=((-b+math.sqrt(d))/(2.0*a))
   r1=((-b-math.sqrt(d))/(2.0*a))
   print"Equation:",a,"x^2+",b,"x+",c
   print"Roots:",r,",",r1
elif(d==0):
   print"Roots are real and equal"
   r2=((-b)/(2.0*a))
   print"Roots:",r2
else:
   print"Roots are complex and imaginary"
   real=(-b/(2.0*a))
   imag=(math.sqrt(-d)/(2.0*a))
   print"Roots:",real,"+j",imag
   print"Roots:",real,"-j",imag
