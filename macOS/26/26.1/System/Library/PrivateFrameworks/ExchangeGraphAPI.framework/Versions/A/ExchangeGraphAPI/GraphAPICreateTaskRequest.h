@class NSString, NSDictionary;

@interface GraphAPICreateTaskRequest : GraphAPIBaseRequest

@property (copy, nonatomic) NSString *todoTaskListId;
@property (copy, nonatomic) NSDictionary *task;

- (id)httpMethod;
- (id)body;
- (id)resource;
- (void).cxx_destruct;

@end
