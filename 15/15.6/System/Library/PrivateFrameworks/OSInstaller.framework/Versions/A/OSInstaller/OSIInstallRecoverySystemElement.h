@interface OSIInstallRecoverySystemElement : OSIInstallQueueElement

@property char installRecoveryDMGs;

- (id)operationName;
- (char)runReturningError:(id *)a0;
- (id)localizedStatusString;
- (double)estimatedTimeToComplete;
- (id)initWithOptions:(id)a0 installRecoveryDMGs:(char)a1;

@end
