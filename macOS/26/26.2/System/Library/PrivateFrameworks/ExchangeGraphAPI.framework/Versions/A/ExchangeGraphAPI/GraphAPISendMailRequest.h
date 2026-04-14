@class NSDictionary, NSData;

@interface GraphAPISendMailRequest : GraphAPIBaseRequest

@property (nonatomic) BOOL shouldSaveToSentItems;
@property (copy, nonatomic) NSDictionary *message;
@property (copy, nonatomic) NSData *mimeData;

- (id)httpMethod;
- (id)body;
- (void).cxx_destruct;
- (id)resource;

@end
