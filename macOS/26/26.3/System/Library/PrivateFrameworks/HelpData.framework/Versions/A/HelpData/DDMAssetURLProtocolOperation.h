@interface DDMAssetURLProtocolOperation : NSOperation

@property (nonatomic) BOOL executing;
@property (nonatomic) BOOL finished;
@property (copy) id /* block */ resumeBlock;

- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)start;
- (BOOL)isAsynchronous;
- (void)main;
- (void).cxx_destruct;
- (void)finishOperation;
- (id)initWithProtocolResumeBlock:(id /* block */)a0;

@end
