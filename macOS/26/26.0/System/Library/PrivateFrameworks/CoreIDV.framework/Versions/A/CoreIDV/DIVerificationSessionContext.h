@class NSString, NSDictionary, NSArray;

@interface DIVerificationSessionContext : NSObject <NSSecureCoding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSString *_serviceName;
    NSString *_tier;
    NSString *_serviceURL;
    NSDictionary *_httpHeaders;
    NSString *_regionCode;
    unsigned long long _invocationReason;
    NSArray *_preferredLanguages;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) NSString *tier;
@property (readonly, nonatomic) NSString *serviceURL;
@property (readonly, nonatomic) NSDictionary *httpHeaders;
@property (copy, nonatomic) NSString *regionCode;
@property (nonatomic) unsigned long long invocationReason;
@property (copy, nonatomic) NSArray *preferredLanguages;

- (void)encodeWithCoder:(id)a0;
- (void)setHttpHeaders:(id)a0;
- (void)setTier:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setServiceName:(id)a0;
- (void).cxx_destruct;
- (void)setServiceURL:(id)a0;
- (id)initWithName:(id)a0 tier:(id)a1 serviceUrl:(id)a2 httpHeaders:(id)a3;

@end
