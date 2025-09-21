@interface CATSharingSemaphoreOperation : CATOperation

- (void)cancel;
- (char)isAsynchronous;
- (void)signal;

@end
