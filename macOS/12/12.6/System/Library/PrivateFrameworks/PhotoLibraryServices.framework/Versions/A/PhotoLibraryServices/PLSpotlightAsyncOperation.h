@interface PLSpotlightAsyncOperation : NSOperation

@property unsigned long long operationState;

- (void)start;
- (void)cancel;
- (void)main;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (BOOL)isAsynchronous;
- (id)_keyObserverStringForOperationState:(unsigned long long)a0;

@end
