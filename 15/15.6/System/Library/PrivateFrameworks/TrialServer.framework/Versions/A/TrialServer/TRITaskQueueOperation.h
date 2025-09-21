@protocol TRITask;

@interface TRITaskQueueOperation : NSBlockOperation

@property (retain, nonatomic) id<TRITask> task;
@property char inProgress;

- (void).cxx_destruct;

@end
