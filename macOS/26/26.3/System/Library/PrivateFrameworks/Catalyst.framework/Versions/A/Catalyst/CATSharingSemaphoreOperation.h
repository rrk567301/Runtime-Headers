@interface CATSharingSemaphoreOperation : CATOperation

- (void)signal;
- (void)cancel;
- (BOOL)isAsynchronous;

@end
