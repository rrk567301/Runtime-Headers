@class NSString, NSDictionary, NSData;

@interface GraphAPICreateMessageRequest : GraphAPIBaseRequest

@property (copy, nonatomic) NSString *folderId;
@property (copy, nonatomic) NSDictionary *message;
@property (copy, nonatomic) NSData *mimeData;

- (id)httpMethod;
- (id)resource;
- (void).cxx_destruct;
- (id)body;

@end
