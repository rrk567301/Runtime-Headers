@class NSString;

@interface GraphAPIDeleteMessageRequest : GraphAPIBaseRequest

@property (copy, nonatomic) NSString *messageId;
@property (copy, nonatomic) NSString *folderId;

- (id)httpMethod;
- (void).cxx_destruct;
- (id)resource;

@end
