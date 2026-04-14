@class NSString, NSDictionary;

@interface GraphAPIUpdateTaskRequest : GraphAPIBaseRequest

@property (copy, nonatomic) NSString *todoTaskListId;
@property (copy, nonatomic) NSString *taskId;
@property (copy, nonatomic) NSDictionary *task;

- (void).cxx_destruct;
- (id)httpMethod;
- (id)resource;
- (id)body;

@end
