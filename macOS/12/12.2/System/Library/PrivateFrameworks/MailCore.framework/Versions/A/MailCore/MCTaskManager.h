@class NSArray, NSString, NSOperationQueue, MCTaskList, NSMutableArray, NSMutableSet;

@interface MCTaskManager : NSObject <MCTaskListDelegate, MCHandlerDelegate, MCActivityDelegate> {
    NSMutableArray *_networkHandlers;
    NSMutableArray *_persistenceHandlers;
    NSMutableSet *_handlersCleaningUp;
    NSMutableSet *_activities;
    NSMutableSet *_bodyTrackers;
    NSMutableArray *_terminationBlocks;
}

@property BOOL reassignTasksWillRun;
@property BOOL hasActivity;
@property (readonly, copy, nonatomic) NSArray *persistenceHandlers;
@property unsigned long long maximumNetworkHandlers;
@property unsigned long long maximumPersistenceHandlers;
@property (readonly, nonatomic) BOOL isInSerializationQueue;
@property (readonly, nonatomic) NSOperationQueue *utilityQueue;
@property (readonly, nonatomic) MCTaskList *taskList;
@property (readonly, copy, nonatomic) NSArray *networkHandlers;
@property (readonly, copy, nonatomic) NSArray *orderedNetworkHandlers;
@property (readonly, copy, nonatomic) NSArray *orderedPersistenceHandlers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSOperationQueue *serializationQueue;
@property (readonly, nonatomic) BOOL networkIsLimited;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)terminate:(id /* block */)a0;
- (void)addActivity:(id)a0;
- (void)cleanUp;
- (void)goOffline;
- (void)tasksNeedAssignment;
- (void)activityDidFinish:(id)a0;
- (void)resetNetworkHandlers;
- (id)newBodyFetchContext;
- (void)activity:(id)a0 didEncounterError:(id)a1;
- (void)bodyTracker:(id)a0 didCacheBodiesForMessages:(id)a1;
- (void)test_terminateAndWaitUntilFinished;
- (void)removeNetworkHandler:(id)a0;
- (void)addNetworkHandler:(id)a0;
- (void)failedToCreateNetworkHandler;
- (void)assignIdleTasks;
- (void)assignActiveTasks;
- (void)handlerDidCleanUp:(id)a0;
- (void)handler:(id)a0 didFinishOperation:(id)a1;
- (void)taskListDidChange:(id)a0;
- (void)_reassignTasks;
- (void)adjustHandlers;
- (void)addPersistenceHandler:(id)a0;
- (void)removePersistenceHandler:(id)a0;

@end
