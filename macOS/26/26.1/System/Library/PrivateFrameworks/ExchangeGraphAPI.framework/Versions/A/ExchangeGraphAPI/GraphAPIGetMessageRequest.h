@class NSString;

@interface GraphAPIGetMessageRequest : GraphAPIBaseRequest

@property (copy, nonatomic) NSString *messageId;
@property (copy, nonatomic) NSString *folderId;

- (id)resource;
- (void).cxx_destruct;

@end
