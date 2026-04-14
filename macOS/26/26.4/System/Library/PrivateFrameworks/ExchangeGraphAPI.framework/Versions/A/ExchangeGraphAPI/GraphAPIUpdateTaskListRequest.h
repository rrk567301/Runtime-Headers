@class NSString;

@interface GraphAPIUpdateTaskListRequest : GraphAPIBaseRequest

@property (copy, nonatomic) NSString *todoTaskListId;
@property (copy, nonatomic) NSString *displayName;

- (void).cxx_destruct;
- (id)httpMethod;
- (id)resource;
- (id)body;

@end
