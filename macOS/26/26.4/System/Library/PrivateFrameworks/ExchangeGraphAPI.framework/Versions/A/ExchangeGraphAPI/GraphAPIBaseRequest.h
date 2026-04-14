@class NSString, NSNumber, NSArray;

@interface GraphAPIBaseRequest : NSObject

@property (copy, nonatomic) NSString *userId;
@property NSNumber *top;
@property (retain, nonatomic) NSArray *select;

- (void).cxx_destruct;
- (id)httpMethod;
- (id)resource;
- (id)body;
- (BOOL)appendQueryToResource:(id)a0;
- (id)bodyAsDictionary;
- (BOOL)hasRawResponse;

@end
