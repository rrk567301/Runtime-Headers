@class NSString;

@interface GraphAPIGetTaskDeltaRequest : GraphAPIBaseRequest

@property (copy, nonatomic) NSString *todoTaskListId;
@property (copy, nonatomic) NSString *deltaToken;
@property (copy, nonatomic) NSString *deltaLink;

- (id)resource;
- (void).cxx_destruct;

@end
