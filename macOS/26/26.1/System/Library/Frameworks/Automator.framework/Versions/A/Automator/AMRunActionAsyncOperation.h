@interface AMRunActionAsyncOperation : AMRunActionOperation

@property long long state;

- (BOOL)isConcurrent;
- (BOOL)isExecuting;
- (void)finish;
- (void)start;
- (BOOL)isFinished;
- (void)am_main;
- (void)didFinishRunningWithError:(id)a0;

@end
