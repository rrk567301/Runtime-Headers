@interface CWFAsyncBlockOperation : NSBlockOperation

@property BOOL didStartOperation;
@property long long completionCounter;

+ (BOOL)_removesDependenciesAfterFinish;

- (BOOL)isFinished;
- (void)main;
- (BOOL)isExecuting;
- (void)decrementCompletionCounter;
- (void)incrementCompletionCounter;

@end
