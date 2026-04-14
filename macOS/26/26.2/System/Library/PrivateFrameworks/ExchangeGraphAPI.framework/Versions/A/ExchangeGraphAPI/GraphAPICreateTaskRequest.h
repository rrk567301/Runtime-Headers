@class NSString, NSDictionary;

@interface GraphAPICreateTaskRequest : GraphAPIBaseRequest

@property (copy, nonatomic) NSString *todoTaskListId;
@property (copy, nonatomic) NSDictionary *task;

- (id)httpMethod;
- (id)body;
- (void).cxx_destruct;
- (id)resource;

@end
