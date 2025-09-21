@class NSArray;

@interface _CNAggregateTask : CNTask

@property (readonly, nonatomic) NSArray *tasks;

- (id)description;
- (void).cxx_destruct;
- (char)cancel;
- (void)cancelSubtasks;
- (id)initWithName:(id)a0 tasks:(id)a1;
- (id)run:(id *)a0;
- (id)runSubtask:(id)a0 error:(id *)a1;

@end
