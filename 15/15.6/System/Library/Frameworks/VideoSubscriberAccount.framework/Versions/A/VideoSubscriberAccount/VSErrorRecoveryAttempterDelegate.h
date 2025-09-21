@interface VSErrorRecoveryAttempterDelegate : NSObject

+ (id)sharedDelegate;

- (void)didPresentErrorWithRecovery:(char)a0 contextInfo:(void *)a1;

@end
