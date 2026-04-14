@interface AMRunActionAsyncOperation : AMRunActionOperation

@property long long state;

- (void)finish;
- (void)start;
- (BOOL)isConcurrent;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)didFinishRunningWithError:(id)a0;
- (void)am_main;

@end
