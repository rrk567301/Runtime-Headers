@class NSString;

@interface GraphAPICreateTaskListRequest : GraphAPIBaseRequest

@property (copy, nonatomic) NSString *displayName;

- (id)httpMethod;
- (id)body;
- (id)resource;
- (void).cxx_destruct;

@end
