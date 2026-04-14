@class NSString, NSDictionary;

@interface GraphAPIUpdateMessageRequest : GraphAPIBaseRequest

@property (copy, nonatomic) NSString *messageId;
@property (copy, nonatomic) NSString *folderId;
@property (copy, nonatomic) NSDictionary *message;

- (void).cxx_destruct;
- (id)httpMethod;
- (id)resource;
- (id)body;

@end
