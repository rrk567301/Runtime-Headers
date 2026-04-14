@interface SOAsynchronousOperation : NSOperation

@property (nonatomic) unsigned long long state;

- (BOOL)isAsynchronous;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (BOOL)isReady;
- (void)finish;
- (void)main;
- (void)start;
- (id)init;

@end
