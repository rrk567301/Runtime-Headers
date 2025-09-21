@interface PLSpotlightAsyncOperation : NSOperation

@property unsigned long long operationState;

- (void)start;
- (void)cancel;
- (char)isAsynchronous;
- (char)isExecuting;
- (char)isFinished;
- (void)main;
- (id)_keyObserverStringForOperationState:(unsigned long long)a0;

@end
