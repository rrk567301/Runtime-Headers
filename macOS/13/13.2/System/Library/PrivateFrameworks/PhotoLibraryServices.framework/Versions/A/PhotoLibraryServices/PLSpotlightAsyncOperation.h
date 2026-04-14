@interface PLSpotlightAsyncOperation : NSOperation

@property unsigned long long operationState;

- (void)start;
- (void)cancel;
- (void)main;
- (BOOL)isAsynchronous;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (id)_keyObserverStringForOperationState:(unsigned long long)a0;

@end
