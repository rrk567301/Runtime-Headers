@class CPLEngineSyncTask;

@interface CPLSimpleTaskSyncStep : CPLSyncStep

@property (readonly, nonatomic) Class taskClass;
@property (readonly, nonatomic) CPLEngineSyncTask *currentTask;

- (void).cxx_destruct;
- (char)hasTasks;
- (void)cancelAllTasks:(char)a0;
- (id)newTask;
- (char)containsTask:(id)a0;
- (id)descriptionForTasks;
- (char)didFinishTask:(id)a0 withError:(id)a1 shouldStop:(char *)a2;
- (id)initWithSyncManager:(id)a0 syncSession:(id)a1 taskClass:(Class)a2;
- (char)launchNecessaryTasks;
- (void)moveTasksToBackground;

@end
