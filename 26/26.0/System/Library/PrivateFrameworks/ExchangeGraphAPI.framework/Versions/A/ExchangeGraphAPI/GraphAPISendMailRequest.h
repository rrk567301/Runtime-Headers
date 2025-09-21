@class NSDictionary, NSData;

@interface GraphAPISendMailRequest : GraphAPIBaseRequest

@property (nonatomic) BOOL shouldSaveToSentItems;
@property (copy, nonatomic) NSDictionary *message;
@property (copy, nonatomic) NSData *mimeData;

- (id)httpMethod;
- (id)body;
- (id)resource;
- (void).cxx_destruct;

@end
