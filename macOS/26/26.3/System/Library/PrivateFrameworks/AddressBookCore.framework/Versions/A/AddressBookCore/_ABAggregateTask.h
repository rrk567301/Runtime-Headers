@class NSMutableArray;

@interface _ABAggregateTask : ABTask {
    NSMutableArray *_tasks;
}

- (id)run:(id *)a0;
- (BOOL)cancel;
- (id)description;
- (void)dealloc;
- (void)cancelSubtasks;
- (id)runSubtask:(id)a0 error:(id *)a1;
- (id)initWithTasks:(id)a0;

@end
