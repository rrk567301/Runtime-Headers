@interface AMOpenAutomatorRecoveryAttempter : NSObject

@property (nonatomic) unsigned long long _recoveryOptionIndex;

+ (id)openAutomatorRecoveryAttempterWithRecoveryOptionIndex:(unsigned long long)a0;

- (void)attemptRecoveryFromError:(id)a0 optionIndex:(unsigned long long)a1 delegate:(id)a2 didRecoverSelector:(SEL)a3 contextInfo:(void *)a4;
- (BOOL)attemptRecoveryFromError:(id)a0 optionIndex:(unsigned long long)a1;
- (id)initWithRecoveryOptionIndex:(unsigned long long)a0;
- (void)_openAutomatorApp;

@end
