@interface AMSMutableBinaryPromise : AMSBinaryPromise

+ (char)cancelPromise:(id)a0;
+ (char)finishPromise:(id)a0 withError:(id)a1;
+ (char)finishPromise:(id)a0 withPromise:(id)a1;
+ (char)finishPromise:(id)a0 withSuccess:(char)a1;
+ (char)finishPromise:(id)a0 withSuccess:(char)a1 error:(id)a2;

- (char)cancel;
- (char)finishWithError:(id)a0;
- (char)finishWithPromise:(id)a0;
- (char)finishWithSuccess;
- (char)finishWithSuccess:(char)a0 error:(id)a1;

@end
