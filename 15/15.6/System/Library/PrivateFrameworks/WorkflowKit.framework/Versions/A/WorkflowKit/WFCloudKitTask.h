@interface WFCloudKitTask : NSObject

@property (getter=isCancelled) char cancelled;
@property (copy, nonatomic) id /* block */ cancellationHandler;

- (void).cxx_destruct;
- (void)cancel;

@end
