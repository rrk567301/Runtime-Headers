@class NSDictionary, NSURL, NSData, NSNumber;

@interface FTURLRequestMessage : FTIDSMessage <NSCopying>

@property (nonatomic) unsigned long long requestType;
@property (copy, nonatomic) NSURL *requestURL;
@property (copy, nonatomic) NSDictionary *requestHeaders;
@property (copy, nonatomic) NSDictionary *requestStringParams;
@property (copy, nonatomic) NSData *requestBody;
@property (copy, nonatomic) NSDictionary *responseHeaders;
@property (copy, nonatomic) NSData *responseBody;
@property (copy, nonatomic) NSNumber *responseStatusCode;
@property (copy, nonatomic) NSDictionary *timingData;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 type:(unsigned long long)a1 headers:(id)a2 stringParams:(id)a3 body:(id)a4;
- (id)additionalQueryStringParameters;
- (id)additionalMessageHeaders;
- (char)allowDualDelivery;
- (void)handleResponseBody:(id)a0;
- (void)handleResponseHeaders:(id)a0;
- (void)handleResponseStatus:(unsigned long long)a0;
- (char)isIDSMessage;
- (id)messageBodyDataOverride;
- (char)wantsBodySignature;
- (char)wantsHTTPGet;
- (char)wantsIDSServer;
- (char)wantsIDSSignatures;
- (char)wantsManagedRetries;

@end
