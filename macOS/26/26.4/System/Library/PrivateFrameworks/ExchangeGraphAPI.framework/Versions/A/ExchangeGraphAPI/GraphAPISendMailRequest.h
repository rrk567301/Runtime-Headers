@class NSDictionary, NSData;

@interface GraphAPISendMailRequest : GraphAPIBaseRequest

@property (nonatomic) BOOL shouldSaveToSentItems;
@property (copy, nonatomic) NSDictionary *message;
@property (copy, nonatomic) NSData *mimeData;

- (void).cxx_destruct;
- (id)httpMethod;
- (id)resource;
- (id)body;

@end
