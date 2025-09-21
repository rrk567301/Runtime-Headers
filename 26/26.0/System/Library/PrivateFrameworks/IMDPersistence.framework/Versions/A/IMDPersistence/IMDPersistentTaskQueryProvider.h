@class NSUUID;

@interface IMDPersistentTaskQueryProvider : NSObject <IMDPersistentTaskQueries>

@property (nonatomic) BOOL isBlocking;
@property (retain, nonatomic) NSUUID *lastReindexSchedulingID;

+ (void)_notifyPTasksUpdated;
+ (void)_notifyPTasksUpdatedImmediately:(BOOL)a0;
+ (BOOL)_shouldExplainQueryPlans;

- (id)init;
- (void).cxx_destruct;
- (void)scheduleMessageGUIDs:(id)a0 flag:(unsigned long long)a1 lane:(unsigned long long)a2 reason:(long long)a3 userInfo:(id)a4 completionBlock:(id /* block */)a5;
- (void)_performHandoffBlock:(id /* block */)a0;
- (void)_performHandoffBlock:(id /* block */)a0 delay:(double)a1;
- (void)clearAllTasksInLane:(unsigned long long)a0 flags:(id)a1 completionBlock:(id /* block */)a2;
- (void)clearTasksWithRowIDs:(id)a0 completionBlock:(id /* block */)a1;
- (void)incrementRetryCountForTasksWithRowIDs:(id)a0 completionBlock:(id /* block */)a1;
- (id)initWithBlockingDatabaseCalls:(BOOL)a0;
- (void)loadPTaskReportsForGroups:(id)a0 excludingReasons:(id)a1 completionBlock:(id /* block */)a2;
- (void)loadPTasksWithPredicate:(id)a0 sortDescriptors:(id)a1 limit:(long long)a2 completionBlock:(id /* block */)a3;
- (void)loadRecentTasksWithFlags:(id)a0 groups:(id)a1 lanes:(id)a2 excludingReasons:(id)a3 limit:(long long)a4 completionBlock:(id /* block */)a5;
- (void)remainingPTaskGUIDsFromGUIDs:(id)a0 flag:(unsigned long long)a1 lane:(unsigned long long)a2 completionBlock:(id /* block */)a3;
- (void)resumeReindexSchedulingWithCompletionBlock:(id /* block */)a0;
- (void)scheduleFullReindexWithContext:(id)a0 completionBlock:(id /* block */)a1;
- (void)scheduleMessageGUIDsInChatRowIDs:(id)a0 afterDate:(id)a1 flag:(unsigned long long)a2 lane:(unsigned long long)a3 reason:(long long)a4 completionBlock:(id /* block */)a5;
- (void)scheduleMessageGUIDsUpToLimit:(long long)a0 flag:(unsigned long long)a1 lane:(unsigned long long)a2 reason:(long long)a3 userInfo:(id)a4 completionBlock:(id /* block */)a5;
- (void)storeTasks:(id)a0;
- (void)suspendReindexSchedulingWithCompletionBlock:(id /* block */)a0;

@end
