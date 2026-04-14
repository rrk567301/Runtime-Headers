@interface SOAsynchronousOperation : NSOperation

@property (nonatomic) unsigned long long state;

- (BOOL)isExecuting;
- (void)finish;
- (void)start;
- (BOOL)isFinished;
- (BOOL)isReady;
- (void)main;
- (BOOL)isAsynchronous;
- (id)init;

@end
