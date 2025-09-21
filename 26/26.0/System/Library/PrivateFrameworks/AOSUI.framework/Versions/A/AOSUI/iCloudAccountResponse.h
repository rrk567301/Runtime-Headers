@class NSHTTPURLResponse, NSDictionary, NSString, NSError, NSData, NSNumber;

@interface iCloudAccountResponse : NSObject

@property (readonly, nonatomic) NSHTTPURLResponse *httpResponse;
@property (readonly, nonatomic) NSDictionary *responseDictionary;
@property (retain, nonatomic) NSError *error;
@property (readonly, nonatomic) NSString *protocolVersion;
@property (readonly, nonatomic) long long statusCode;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSNumber *maxAge;

- (id)initWithHTTPResponse:(id)a0 data:(id)a1;
- (void).cxx_destruct;
- (id)initWithHTTPResponse:(id)a0 data:(id)a1 bodyIsPlist:(BOOL)a2;
- (void)_parsePlistResponse:(id)a0;

@end
