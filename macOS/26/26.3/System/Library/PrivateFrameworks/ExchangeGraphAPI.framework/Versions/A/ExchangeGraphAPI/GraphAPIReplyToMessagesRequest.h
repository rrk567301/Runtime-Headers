@class NSString, NSDictionary, NSData;

@interface GraphAPIReplyToMessagesRequest : GraphAPIBaseRequest

@property (copy, nonatomic) NSString *folderId;
@property (copy, nonatomic) NSString *messageId;
@property (copy, nonatomic) NSString *comment;
@property (copy, nonatomic) NSDictionary *message;
@property (copy, nonatomic) NSData *mimeData;

- (id)httpMethod;
- (id)resource;
- (void).cxx_destruct;
- (id)body;

@end
