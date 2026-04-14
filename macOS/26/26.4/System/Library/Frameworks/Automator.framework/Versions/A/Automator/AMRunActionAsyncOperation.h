@interface AMRunActionAsyncOperation : AMRunActionOperation

@property long long state;

- (void)finish;
- (BOOL)isFinished;
- (BOOL)isConcurrent;
- (BOOL)isExecuting;
- (void)start;
- (void)am_main;
- (void)didFinishRunningWithError:(id)a0;

@end
