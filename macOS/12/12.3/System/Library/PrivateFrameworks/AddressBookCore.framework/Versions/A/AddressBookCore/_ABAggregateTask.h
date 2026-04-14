@class NSMutableArray;

@interface _ABAggregateTask : ABTask {
    NSMutableArray *_tasks;
}

- (void)dealloc;
- (id)description;
- (BOOL)cancel;
- (id)run:(id *)a0;
- (id)runSubtask:(id)a0 error:(id *)a1;
- (void)cancelSubtasks;
- (id)initWithTasks:(id)a0;

@end
