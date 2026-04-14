@interface CWFAsyncBlockOperation : NSBlockOperation

@property BOOL didStartOperation;
@property long long completionCounter;

+ (BOOL)_removesDependenciesAfterFinish;

- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)main;
- (void)decrementCompletionCounter;
- (void)incrementCompletionCounter;

@end
