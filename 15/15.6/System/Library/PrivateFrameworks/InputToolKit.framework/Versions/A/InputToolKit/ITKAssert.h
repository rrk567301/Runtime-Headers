@interface ITKAssert : NSObject

+ (void)handleFailedAssertWithCondition:(const char *)a0 functionName:(const char *)a1 simulateCrash:(char)a2 showAlert:(char)a3 alertMessage:(id)a4 format:(id)a5;
+ (void)handleFailedAssertWithCondition:(const char *)a0 functionName:(const char *)a1 simulateCrash:(char)a2 showAlert:(char)a3 format:(id)a4;

@end
