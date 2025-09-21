@interface NSVBNamedFault : NSObject

+ (char)fault:(id)a0 withProbability:(double)a1 wasTaken:(char)a2;
+ (void)_invokeIfShouldFault:(id)a0 format:(id)a1 arguments:(struct __va_list_tag { unsigned int x0; unsigned int x1; void *x2; void *x3; }[1])a2 block:(id /* block */)a3;
+ (void)crashIfShouldFault:(id)a0;
+ (void)crashIfShouldFault:(id)a0 format:(id)a1;
+ (void)crashIfShouldFault:(id)a0 format:(id)a1 arguments:(struct __va_list_tag { unsigned int x0; unsigned int x1; void *x2; void *x3; }[1])a2;
+ (void)exitIfShouldFault:(id)a0;
+ (void)exitIfShouldFault:(id)a0 format:(id)a1;
+ (void)exitIfShouldFault:(id)a0 format:(id)a1 arguments:(struct __va_list_tag { unsigned int x0; unsigned int x1; void *x2; void *x3; }[1])a2;
+ (char)idle:(double)a0 ifShouldFault:(id)a1;
+ (char)idleUpTo:(double)a0 ifShouldFault:(id)a1;
+ (void)logTestedFaults:(id)a0;
+ (void)raiseIfShouldFault:(id)a0;
+ (void)raiseIfShouldFault:(id)a0 format:(id)a1;
+ (void)raiseIfShouldFault:(id)a0 format:(id)a1 arguments:(struct __va_list_tag { unsigned int x0; unsigned int x1; void *x2; void *x3; }[1])a2;
+ (double)randomProportion;
+ (char)shouldFault:(id)a0;
+ (char)sleep:(double)a0 ifShouldFault:(id)a1;
+ (char)sleepUpTo:(double)a0 ifShouldFault:(id)a1;

@end
