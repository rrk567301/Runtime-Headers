@interface SUSoftwareUpdateErrorHandler : NSObject {
    long long _code;
    id /* block */ _action;
}

- (void)dealloc;
- (char)isEqual:(id)a0;
- (char)attemptRecoveryFromError:(id)a0 optionIndex:(unsigned long long)a1;
- (void)attemptRecoveryFromError:(id)a0 optionIndex:(unsigned long long)a1 delegate:(id)a2 didRecoverSelector:(SEL)a3 contextInfo:(void *)a4;
- (id)initWithErrorCode:(long long)a0 action:(id /* block */)a1;

@end
