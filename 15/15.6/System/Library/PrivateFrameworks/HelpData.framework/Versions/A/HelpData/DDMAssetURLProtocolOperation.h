@interface DDMAssetURLProtocolOperation : NSOperation

@property (nonatomic) char executing;
@property (nonatomic) char finished;
@property (copy) id /* block */ resumeBlock;

- (void).cxx_destruct;
- (void)start;
- (char)isAsynchronous;
- (char)isExecuting;
- (char)isFinished;
- (void)main;
- (void)finishOperation;
- (id)initWithProtocolResumeBlock:(id /* block */)a0;

@end
