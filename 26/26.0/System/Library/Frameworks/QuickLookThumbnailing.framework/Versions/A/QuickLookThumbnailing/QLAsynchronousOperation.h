@interface QLAsynchronousOperation : NSOperation

@property (nonatomic, getter=isExecuting) BOOL executing;
@property (nonatomic, getter=isFinished) BOOL finished;

- (void)start;
- (BOOL)isConcurrent;
- (void)finish;

@end
