@interface _NSCloudSharingOverQuotaRecoveryAttempter : NSObject

- (void)attemptRecoveryFromError:(id)a0 optionIndex:(unsigned long long)a1 delegate:(id)a2 didRecoverSelector:(SEL)a3 contextInfo:(void *)a4;
- (BOOL)attemptRecoveryFromError:(id)a0 optionIndex:(unsigned long long)a1;

@end
