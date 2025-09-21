@class TRIDatabase;
@protocol TRITaskSetProviding;

@interface TRITaskDatabase : NSObject <TRITaskPersisting> {
    TRIDatabase *_db;
    id<TRITaskSetProviding> _taskSetProvider;
}

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)count;
- (struct _PASDBTransactionCompletion_ { char x0; })readTransactionWithFailableBlock:(id /* block */)a0;
- (struct _PASDBTransactionCompletion_ { char x0; })writeTransactionWithFailableBlock:(id /* block */)a0;
- (id)allTasks;
- (id)taskIdsWithTag:(id)a0;
- (id)directDependenciesOfTaskWithId:(id)a0;
- (char)_checkTaskId:(id)a0 IsPresent:(char *)a1 transaction:(id)a2;
- (id)_tasksForQuery:(id)a0 onPrep:(id /* block */)a1;
- (id)addTask:(id)a0 startTime:(id)a1 tags:(id)a2 dependencies:(id)a3 error:(id *)a4;
- (id)dependencyFreeTasksForAllowedCapabilities:(unsigned long long)a0 dateForRunnability:(id)a1;
- (id)dependencyFreeTasksForAllowedCapabilities:(unsigned long long)a0 dateForRunnability:(id)a1 taskType:(int)a2;
- (char)enumerateTasksWithTagsIntersectingTagSet:(id)a0 block:(id /* block */)a1;
- (id)idForTask:(id)a0;
- (id)initWithDatabase:(id)a0 taskSetProvider:(id)a1;
- (char)removeTaskWithId:(id)a0 cleanupBlock:(id /* block */)a1;
- (id)tasksDependentOnTask:(id)a0;
- (char)updateTaskWithTaskId:(id)a0 capabilities:(unsigned long long)a1 task:(id)a2;
- (char)updateTaskWithTaskId:(id)a0 startDate:(id)a1 task:(id)a2;

@end
