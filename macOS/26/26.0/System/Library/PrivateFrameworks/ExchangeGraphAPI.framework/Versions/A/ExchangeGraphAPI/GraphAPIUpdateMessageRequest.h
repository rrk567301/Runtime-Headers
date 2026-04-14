@class NSString, NSDictionary;

@interface GraphAPIUpdateMessageRequest : GraphAPIBaseRequest

@property (copy, nonatomic) NSString *messageId;
@property (copy, nonatomic) NSString *folderId;
@property (copy, nonatomic) NSDictionary *message;

- (id)httpMethod;
- (id)body;
- (id)resource;
- (void).cxx_destruct;

@end
