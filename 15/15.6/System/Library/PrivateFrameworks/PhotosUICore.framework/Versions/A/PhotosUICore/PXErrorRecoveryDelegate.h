@interface PXErrorRecoveryDelegate : NSObject

+ (id)sharedErrorRecoveryDelegate;

- (void)_didPresentErrorWithRecovery:(char)a0 contextInfo:(void *)a1;

@end
