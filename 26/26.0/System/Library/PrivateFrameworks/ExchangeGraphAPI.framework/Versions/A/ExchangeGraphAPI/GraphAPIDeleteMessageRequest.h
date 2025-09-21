@class NSString;

@interface GraphAPIDeleteMessageRequest : GraphAPIBaseRequest

@property (copy, nonatomic) NSString *messageId;
@property (copy, nonatomic) NSString *folderId;

- (id)httpMethod;
- (id)resource;
- (void).cxx_destruct;

@end
