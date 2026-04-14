@class NSString;

@interface GraphAPIUpdateTaskListRequest : GraphAPIBaseRequest

@property (copy, nonatomic) NSString *todoTaskListId;
@property (copy, nonatomic) NSString *displayName;

- (id)httpMethod;
- (id)body;
- (void).cxx_destruct;
- (id)resource;

@end
