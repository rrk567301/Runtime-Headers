@class TRIClient, TRIServerContext, NSObject, _PASLock;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface TRITaskQueue : NSObject <TRITaskQueuing, TRITaskQueueStateProviding> {
    _PASLock *_lock;
    TRIServerContext *_serverContext;
    NSObject<OS_dispatch_queue> *_opQueue;
    NSObject<OS_dispatch_group> *_opGroup;
    NSObject<OS_dispatch_queue> *_asyncQueue;
    TRIClient *_client;
}

- (id)debugDescription;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)count;
- (char)cancelTask:(id)a0;
- (id)_earliestStartDateFromTaskList:(id)a0;
- (void)_finalizeTask:(id)a0 withId:(id)a1 runResult:(id)a2;
- (id)initWithServerContext:(id)a0 operationQueue:(id)a1 operationGroup:(id)a2 asyncQueue:(id)a3;
- (struct { unsigned char x0; })_addTask:(id)a0 options:(id)a1 guardedData:(id)a2 taskId:(id *)a3 tryRunningEligibleTasksImmediately:(char)a4;
- (struct { unsigned char x0; })_addTask:(id)a0 options:(id)a1 guardedData:(id)a2 taskIdOut:(id *)a3 accumulatedNewTaskRecords:(id)a4;
- (struct { unsigned char x0; })_addTask:(id)a0 options:(id)a1 taskId:(id *)a2 tryRunningEligibleTasksImmediately:(char)a3;
- (id)_addTask:(id)a0 withDependencies:(id)a1 guardedData:(id)a2;
- (char)_cancelDependenciesAndTaskWithId:(id)a0 guardedData:(id)a1;
- (char)_cancelTask:(id)a0 guardedData:(id)a1;
- (char)_cancelTaskWithId:(id)a0 guardedData:(id)a1 persistCancel:(char)a2;
- (id)_createOperationWithTask:(id)a0 withId:(id)a1 dependencies:(id)a2 taskMap:(id)a3;
- (void)_evaluateRunConditionsWithGuardedData:(id)a0 shouldContinueWork:(char *)a1;
- (char)_isTaskWithId:(id)a0 inTaskGroup:(id)a1 runnableGivenCapabilities:(unsigned long long)a2 atDate:(id)a3 cachedRunnability:(id)a4 visitedPath:(id)a5 topoSortedRunnable:(id)a6 allowOnlyRootTasksRunnable:(char)a7;
- (void)_partitionTaskGroup:(id)a0 byRunnabilityGivenCapabilities:(unsigned long long)a1 runnableAtDate:(id)a2 topoSortedCurrentlyRunnable:(id *)a3 blocked:(id *)a4 allowOnlyRootTasksRunnable:(char)a5;
- (void)_registerRetryActivityForDate:(id)a0;
- (void)_registerTaskQueueActivityForDate:(id)a0;
- (char)_removeTaskWithId:(id)a0 guardedData:(id)a1 persistRemove:(char)a2;
- (id)_runTask:(id)a0;
- (void)_scheduleDeactivationBGST:(id)a0;
- (void)_scheduleFutureActivitiesWithGuardedData:(id)a0;
- (void)_startImmediateTasksIfNotAlreadyQueued:(id)a0 guardedData:(id)a1 didStartNewWork:(char *)a2;
- (void)_startRunnableTasksIfNecessaryWithGuardedData:(id)a0;
- (id)activeActivityDescriptorGrantingCapability:(unsigned long long)a0;
- (id)activeActivityGrantingCapability:(unsigned long long)a0;
- (struct { unsigned char x0; })addTask:(id)a0 options:(id)a1;
- (struct { unsigned char x0; })addTask:(id)a0 options:(id)a1 taskId:(id *)a2;
- (char)cancelTasksWithTag:(id)a0;
- (char)cancelTasksWithTag:(id)a0 excludingTasks:(id)a1;
- (char)enumerateTasksWithTagsIntersectingTagSet:(id)a0 block:(id /* block */)a1;
- (char)finishXPCActivitiesWithGuardedData:(id)a0;
- (char)ifNotPresentAddTask:(id)a0;
- (void)registerFinalizeBlock:(id /* block */)a0;
- (void)registerFinalizeBlockToRetryWithBlock:(id /* block */)a0;
- (void)resumeWithBGST:(id)a0 executeWhenSuspended:(id /* block */)a1;
- (void)resumeWithXPCActivityDescriptor:(id)a0 executeWhenSuspended:(id /* block */)a1;
- (char)updateActivity:(id)a0 withStartDate:(id)a1;
- (void)waitForAsyncQueue;

@end
