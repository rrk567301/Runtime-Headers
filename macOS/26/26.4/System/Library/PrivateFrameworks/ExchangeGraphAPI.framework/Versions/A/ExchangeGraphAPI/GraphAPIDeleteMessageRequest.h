@class NSString;

@interface GraphAPIDeleteMessageRequest : GraphAPIBaseRequest

@property (copy, nonatomic) NSString *messageId;
@property (copy, nonatomic) NSString *folderId;

- (void).cxx_destruct;
- (id)httpMethod;
- (id)resource;

@end
