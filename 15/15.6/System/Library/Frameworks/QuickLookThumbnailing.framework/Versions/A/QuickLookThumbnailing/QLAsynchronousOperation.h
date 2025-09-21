@interface QLAsynchronousOperation : NSOperation

@property (nonatomic, getter=isExecuting) char executing;
@property (nonatomic, getter=isFinished) char finished;

- (void)finish;
- (void)start;
- (char)isConcurrent;

@end
