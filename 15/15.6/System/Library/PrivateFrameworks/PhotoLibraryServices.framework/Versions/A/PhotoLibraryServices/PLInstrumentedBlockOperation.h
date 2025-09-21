@interface PLInstrumentedBlockOperation : NSBlockOperation

@property (nonatomic) double creationTime;
@property (nonatomic) double executionStartTime;
@property (nonatomic) double executionEndTime;
@property (nonatomic) char postambleAdded;
@property (readonly, nonatomic) double timeSpentWaitingInQueue;
@property (readonly, nonatomic) double executionTime;

+ (id)blockOperationWithBlock:(id /* block */)a0;

- (id)description;
- (id)init;
- (void)addExecutionBlock:(id /* block */)a0;
- (double)executionTime;
- (double)timeSpentWaitingInQueue;

@end
