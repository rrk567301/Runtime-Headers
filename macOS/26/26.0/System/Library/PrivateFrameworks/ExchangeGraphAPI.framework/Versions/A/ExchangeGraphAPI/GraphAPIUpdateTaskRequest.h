@class NSString, NSDictionary;

@interface GraphAPIUpdateTaskRequest : GraphAPIBaseRequest

@property (copy, nonatomic) NSString *todoTaskListId;
@property (copy, nonatomic) NSString *taskId;
@property (copy, nonatomic) NSDictionary *task;

- (id)httpMethod;
- (id)body;
- (id)resource;
- (void).cxx_destruct;

@end
