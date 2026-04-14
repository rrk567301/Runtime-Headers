@interface CATSharingSemaphoreOperation : CATOperation

- (BOOL)isAsynchronous;
- (void)signal;
- (void)cancel;

@end
