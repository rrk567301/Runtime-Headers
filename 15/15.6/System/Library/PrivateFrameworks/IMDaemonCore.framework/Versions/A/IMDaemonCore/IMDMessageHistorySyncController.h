@protocol IMDMessageHistorySyncTask, IMDMessageHistorySyncTaskFactory;

@interface IMDMessageHistorySyncController : NSObject

@property (nonatomic) char replayControllerNeedsSync;
@property (nonatomic) char ckChatSyncControllerNeedsSync;
@property (nonatomic) char idsTransportLogNeedsSync;
@property (retain, nonatomic) id<IMDMessageHistorySyncTask> currentlyExecutingSyncTask;
@property (retain, nonatomic) id<IMDMessageHistorySyncTaskFactory> syncTaskFactory;

- (void)dealloc;
- (void)_evaluateStateAndActIfNeeded;
- (void)_scheduleNextEvaluation;
- (id)initWithMessageHistorySyncTaskFactory:(id)a0;
- (void)replayControllerWantsToSync;

@end
