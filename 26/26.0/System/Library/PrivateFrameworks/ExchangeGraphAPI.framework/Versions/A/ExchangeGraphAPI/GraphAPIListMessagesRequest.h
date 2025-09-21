@class NSString;

@interface GraphAPIListMessagesRequest : GraphAPIBaseRequest

@property (copy, nonatomic) NSString *folderId;
@property (copy, nonatomic) NSString *searchQuery;

- (id)resource;
- (void).cxx_destruct;

@end
