@interface CDPDLockAssertion : NSObject

+ (id)lock;
+ (id)lockWithError:(id *)a0;

- (void)unlock;

@end
