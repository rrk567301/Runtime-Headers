@interface _PXStoryInternalErrorRecoveryAttempter : PXStoryErrorRecoveryAttempter

@property (readonly, weak, nonatomic) id recoveryAttempter;

- (id)description;
- (char)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (char)attemptRecoveryFromError:(id)a0 optionIndex:(unsigned long long)a1;
- (void)attemptRecoveryFromError:(id)a0 optionIndex:(unsigned long long)a1 delegate:(id)a2 didRecoverSelector:(SEL)a3 contextInfo:(void *)a4;
- (id)initWithRecoveryAttempter:(id)a0;

@end
