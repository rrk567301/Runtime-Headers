@interface _PKCheckErrorRecoveryAttempter : NSObject {
    id /* block */ _action;
}

- (void)dealloc;
- (id)initWithAction:(id /* block */)a0;
- (BOOL)attemptRecoveryFromError:(id)a0 optionIndex:(unsigned long long)a1;
- (void)attemptRecoveryFromError:(id)a0 optionIndex:(unsigned long long)a1 delegate:(id)a2 didRecoverSelector:(SEL)a3 contextInfo:(void *)a4;

@end
