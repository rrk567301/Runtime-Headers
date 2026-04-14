@class NSString, NSDictionary, NSData;

@interface GraphAPISendMessageRequest : GraphAPIBaseRequest

@property (copy, nonatomic) NSString *messageId;
@property (copy, nonatomic) NSDictionary *message;
@property (copy, nonatomic) NSData *mimeData;

- (id)httpMethod;
- (id)resource;
- (void).cxx_destruct;
- (id)body;

@end
