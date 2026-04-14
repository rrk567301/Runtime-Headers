@class NSString;

@interface GraphAPIUpdateTaskListRequest : GraphAPIBaseRequest

@property (copy, nonatomic) NSString *todoTaskListId;
@property (copy, nonatomic) NSString *displayName;

- (id)httpMethod;
- (id)resource;
- (void).cxx_destruct;
- (id)body;

@end
