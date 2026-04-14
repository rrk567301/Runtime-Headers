@interface AMRunActionAsyncOperation : AMRunActionOperation

@property long long state;

- (BOOL)isExecuting;
- (BOOL)isConcurrent;
- (BOOL)isFinished;
- (void)finish;
- (void)start;
- (void)am_main;
- (void)didFinishRunningWithError:(id)a0;

@end
