@class NSString, NSDictionary;

@interface GraphAPICreateTaskRequest : GraphAPIBaseRequest

@property (copy, nonatomic) NSString *todoTaskListId;
@property (copy, nonatomic) NSDictionary *task;

- (id)httpMethod;
- (id)resource;
- (void).cxx_destruct;
- (id)body;

@end
