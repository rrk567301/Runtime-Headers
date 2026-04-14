@class NSString, NSDictionary;

@interface GraphAPICreateTaskRequest : GraphAPIBaseRequest

@property (copy, nonatomic) NSString *todoTaskListId;
@property (copy, nonatomic) NSDictionary *task;

- (void).cxx_destruct;
- (id)httpMethod;
- (id)resource;
- (id)body;

@end
