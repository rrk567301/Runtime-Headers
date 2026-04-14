@interface SOAsynchronousOperation : NSOperation

@property (nonatomic) unsigned long long state;

- (id)init;
- (void)finish;
- (void)start;
- (void)main;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (BOOL)isReady;
- (BOOL)isAsynchronous;

@end
