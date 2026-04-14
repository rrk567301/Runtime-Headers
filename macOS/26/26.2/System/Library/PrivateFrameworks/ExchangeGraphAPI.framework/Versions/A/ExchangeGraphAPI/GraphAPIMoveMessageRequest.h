@class NSString;

@interface GraphAPIMoveMessageRequest : GraphAPIBaseRequest

@property (copy, nonatomic) NSString *messageId;
@property (copy, nonatomic) NSString *folderId;
@property (copy, nonatomic) NSString *destinationId;

- (id)httpMethod;
- (id)body;
- (void).cxx_destruct;
- (id)resource;
- (id)bodyAsDictionary;

@end
