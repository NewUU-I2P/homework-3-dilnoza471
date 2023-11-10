float problemSolution5(float x, float y, char operation) {
   float result;
   switch(operation){
       case '+':
           result = x+y;
           break;
       case '-':
           result = x-y;
           break;
       case '*':
           result = x*y;
           break;
       case '/':
           result = x/y;
   }

   return result;
}
