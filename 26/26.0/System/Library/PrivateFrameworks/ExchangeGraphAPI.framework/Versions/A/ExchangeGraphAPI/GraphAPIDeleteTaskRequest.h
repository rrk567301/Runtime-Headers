@class NSString;

@interface GraphAPIDeleteTaskRequest : GraphAPIBaseRequest

@property (copy, nonatomic) NSString *todoTaskListId;
@property (copy, nonatomic) NSString *taskId;

- (id)httpMethod;
- (id)resource;
- (void).cxx_destruct;

@end
