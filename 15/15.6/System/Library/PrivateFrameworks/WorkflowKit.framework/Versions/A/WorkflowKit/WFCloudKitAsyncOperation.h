@interface WFCloudKitAsyncOperation : NSOperation

@property char isExecuting;
@property char isFinished;

- (void)start;
- (void)finishExecuting;
- (void)startExecuting;

@end
