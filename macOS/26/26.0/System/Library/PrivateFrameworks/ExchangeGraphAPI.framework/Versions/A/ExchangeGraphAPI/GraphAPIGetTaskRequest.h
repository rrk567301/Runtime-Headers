@class NSString;

@interface GraphAPIGetTaskRequest : GraphAPIBaseRequest

@property (copy, nonatomic) NSString *todoTaskListId;
@property (copy, nonatomic) NSString *taskId;

- (id)resource;
- (void).cxx_destruct;

@end
