@class NSString;

@interface GraphAPIGetMessageMIMEContentRequest : GraphAPIBaseRequest

@property (copy, nonatomic) NSString *messageId;

- (id)resource;
- (void).cxx_destruct;
- (BOOL)hasRawResponse;

@end
