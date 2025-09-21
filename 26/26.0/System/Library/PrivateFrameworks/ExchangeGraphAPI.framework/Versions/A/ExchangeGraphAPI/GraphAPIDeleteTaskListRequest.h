@class NSString;

@interface GraphAPIDeleteTaskListRequest : GraphAPIBaseRequest

@property (copy, nonatomic) NSString *todoTaskListId;

- (id)httpMethod;
- (id)resource;
- (void).cxx_destruct;

@end
