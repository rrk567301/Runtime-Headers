@class NSString;

@interface SFSSLClientTrustPolicy : SFTrustPolicy <NSSecureCoding> {
    id _sslClientTrustPolicyInternal;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *clientName;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithClientName:(id)a0;

@end
