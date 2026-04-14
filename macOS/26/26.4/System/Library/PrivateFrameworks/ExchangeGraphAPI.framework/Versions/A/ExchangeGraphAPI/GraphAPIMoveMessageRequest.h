@class NSString;

@interface GraphAPIMoveMessageRequest : GraphAPIBaseRequest

@property (copy, nonatomic) NSString *messageId;
@property (copy, nonatomic) NSString *folderId;
@property (copy, nonatomic) NSString *destinationId;

- (void).cxx_destruct;
- (id)httpMethod;
- (id)resource;
- (id)body;
- (id)bodyAsDictionary;

@end
