@interface AMRunActionAsyncOperation : AMRunActionOperation

@property long long state;

- (void)finish;
- (void)start;
- (char)isConcurrent;
- (char)isExecuting;
- (char)isFinished;
- (void)am_main;
- (void)didFinishRunningWithError:(id)a0;

@end
