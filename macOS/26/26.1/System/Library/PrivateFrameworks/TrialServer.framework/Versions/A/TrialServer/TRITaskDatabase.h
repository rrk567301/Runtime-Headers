@class TRIDatabase;
@protocol TRITaskSetProviding;

@interface TRITaskDatabase : NSObject <TRITaskPersisting> {
    TRIDatabase *_db;
    id<TRITaskSetProviding> _taskSetProvider;
}

- (id)directDependenciesOfTaskWithId:(id)a0;
- (id)initWithDatabase:(id)a0 taskSetProvider:(id)a1;
- (BOOL)_checkTaskId:(id)a0 IsPresent:(BOOL *)a1 transaction:(id)a2;
- (id)dependencyFreeTasksForAllowedCapabilities:(unsigned long long)a0 dateForRunnability:(id)a1 taskType:(int)a2;
- (BOOL)removeTaskWithId:(id)a0 cleanupBlock:(id /* block */)a1;
- (id)taskIdsWithTag:(id)a0;
- (BOOL)updateTaskWithTaskId:(id)a0 startDate:(id)a1 task:(id)a2;
- (id)addTask:(id)a0 startTime:(id)a1 tags:(id)a2 dependencies:(id)a3 error:(id *)a4;
- (struct _PASDBTransactionCompletion_ { BOOL x0; })readTransactionWithFailableBlock:(id /* block */)a0;
- (struct _PASDBTransactionCompletion_ { BOOL x0; })writeTransactionWithFailableBlock:(id /* block */)a0;
- (BOOL)enumerateTasksWithTagsIntersectingTagSet:(id)a0 block:(id /* block */)a1;
- (BOOL)updateTaskWithTaskId:(id)a0 capabilities:(unsigned long long)a1 task:(id)a2;
- (int)taskTypeForTaskWithId:(id)a0;
- (void).cxx_destruct;
- (id)dependencyFreeTasksForAllowedCapabilities:(unsigned long long)a0 dateForRunnability:(id)a1;
- (unsigned long long)count;
- (id)allTasks;
- (id)idForTask:(id)a0;
- (id)_tasksForQuery:(id)a0 onPrep:(id /* block */)a1;
- (id)tasksDependentOnTask:(id)a0;
- (id)init;

@end
