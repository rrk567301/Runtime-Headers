@interface SOAsynchronousOperation : NSOperation

@property (nonatomic) unsigned long long state;

- (void)finish;
- (BOOL)isExecuting;
- (BOOL)isReady;
- (BOOL)isFinished;
- (void)start;
- (BOOL)isAsynchronous;
- (id)init;
- (void)main;

@end
