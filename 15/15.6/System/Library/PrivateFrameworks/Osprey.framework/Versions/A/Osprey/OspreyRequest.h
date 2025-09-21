@class NSString, NSDictionary, NSData, NSNumber;

@interface OspreyRequest : NSObject

@property (readonly, nonatomic) NSString *methodName;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSDictionary *headers;
@property (nonatomic) char enableDeviceAuthentication;
@property (retain, nonatomic) NSData *signedDeviceAuthenticationData;
@property (retain, nonatomic) NSNumber *deviceAuthenticationVersion;
@property (nonatomic) char useCompression;
@property (nonatomic) char forceHTTPv2;
@property (copy, nonatomic) NSString *clientTraceId;
@property (readonly, nonatomic) NSString *userAgent;
@property (nonatomic) char allowsCellularAccess;
@property (nonatomic) char requireAbsintheAuthentication;

+ (id)requestWithMethodName:(id)a0;

- (void).cxx_destruct;
- (id)grpcRequestWithBaseURL:(id)a0;
- (id)initWithMethodName:(id)a0;

@end
