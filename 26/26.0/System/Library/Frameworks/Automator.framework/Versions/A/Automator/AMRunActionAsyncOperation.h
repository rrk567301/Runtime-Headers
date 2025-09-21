@interface AMRunActionAsyncOperation : AMRunActionOperation

@property long long state;

- (BOOL)isFinished;
- (BOOL)isExecuting;
- (void)start;
- (BOOL)isConcurrent;
- (void)finish;
- (void)am_main;
- (void)didFinishRunningWithError:(id)a0;

@end
