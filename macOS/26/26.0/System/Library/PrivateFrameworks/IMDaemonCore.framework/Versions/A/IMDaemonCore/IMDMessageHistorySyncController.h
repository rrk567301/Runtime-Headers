@protocol IMDMessageHistorySyncTask, IMDMessageHistorySyncTaskFactory;

@interface IMDMessageHistorySyncController : NSObject

@property (nonatomic) BOOL replayControllerNeedsSync;
@property (nonatomic) BOOL ckChatSyncControllerNeedsSync;
@property (nonatomic) BOOL idsTransportLogNeedsSync;
@property (retain, nonatomic) id<IMDMessageHistorySyncTask> currentlyExecutingSyncTask;
@property (retain, nonatomic) id<IMDMessageHistorySyncTaskFactory> syncTaskFactory;

- (void)_scheduleNextEvaluation;
- (void)dealloc;
- (void)replayControllerWantsToSync;
- (id)initWithMessageHistorySyncTaskFactory:(id)a0;
- (void)_evaluateStateAndActIfNeeded;

@end
