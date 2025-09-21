@class NSString, NSMutableDictionary;

@interface OspreyMutableRequest : NSObject {
    NSMutableDictionary *_additionalHeaders;
}

@property (readonly, nonatomic) NSString *methodName;
@property (copy, nonatomic) NSString *clientTraceIdentifier;
@property (nonatomic) char enableDeviceAuthentication;
@property (nonatomic) char allowsCellularAccess;
@property (nonatomic, getter=isCompressionEnabled) char compressionEnabled;
@property (nonatomic) char forceHTTPv2;
@property (nonatomic) char requireAbsintheAuthentication;

- (void).cxx_destruct;
- (void)setValue:(id)a0 forHTTPHeaderField:(id)a1;
- (id)buildInternalRequest;
- (id)initWithMethodName:(id)a0;

@end
