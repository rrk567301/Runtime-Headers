@class NSString;

@interface GraphAPICopyMessageRequest : GraphAPIBaseRequest

@property (copy, nonatomic) NSString *messageId;
@property (copy, nonatomic) NSString *folderId;
@property (copy, nonatomic) NSString *destinationId;

- (id)httpMethod;
- (id)resource;
- (void).cxx_destruct;
- (id)body;

@end
