@class NSHTTPURLResponse, NSDictionary, NSString, NSError, NSData, NSNumber;

@interface AAResponse : NSObject

@property (readonly, nonatomic) NSHTTPURLResponse *httpResponse;
@property (readonly, nonatomic) NSDictionary *responseDictionary;
@property (retain, nonatomic) NSError *error;
@property (readonly, nonatomic) NSString *protocolVersion;
@property (readonly, nonatomic) long long statusCode;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSNumber *maxAge;
@property (readonly, nonatomic) NSString *mediaType;

- (void).cxx_destruct;
- (id)initWithHTTPResponse:(id)a0 data:(id)a1;
- (id)initWithHTTPResponse:(id)a0 data:(id)a1 bodyIsPlist:(char)a2;
- (id)initWithHTTPResponse:(id)a0 data:(id)a1 mediaType:(id)a2;
- (id)_deviceSpecificLocalizedString:(id)a0;
- (void)_parseResponse:(id)a0 ofType:(id)a1;
- (id)_stringWithDescriptionForResponseError:(id)a0;

@end
