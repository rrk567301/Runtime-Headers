@class NSString;

@interface GraphAPIDeleteTaskRequest : GraphAPIBaseRequest

@property (copy, nonatomic) NSString *todoTaskListId;
@property (copy, nonatomic) NSString *taskId;

- (id)httpMethod;
- (void).cxx_destruct;
- (id)resource;

@end
