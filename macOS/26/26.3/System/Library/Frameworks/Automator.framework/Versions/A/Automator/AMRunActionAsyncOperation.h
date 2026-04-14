@interface AMRunActionAsyncOperation : AMRunActionOperation

@property long long state;

- (void)finish;
- (BOOL)isExecuting;
- (BOOL)isConcurrent;
- (BOOL)isFinished;
- (void)start;
- (void)am_main;
- (void)didFinishRunningWithError:(id)a0;

@end
