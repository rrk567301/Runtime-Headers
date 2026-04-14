@class NSString, NSDictionary;

@interface NetworkQualityRemoteConfiguration : NSObject {
    NSDictionary *_urls;
}

@property (retain, nonatomic) NSString *resolver;
@property (retain, nonatomic) NSString *targetDomain;
@property (retain, nonatomic) NSString *testEndpoint;
@property (retain, nonatomic) NSString *interfaceName;

+ (BOOL)isAppleInternal;
+ (id)environment;
+ (id)networkQualityConfigurationURL;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (BOOL)DNSConfigured;
- (id)URLForURLType:(int)a0;
- (id)portForURLType:(int)a0;
- (id)testEndpoint:(int)a0;

@end
