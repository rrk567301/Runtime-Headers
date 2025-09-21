@class NSArray, NSData, NSString;

@interface NEHotspotEAPSettings : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy) NSArray *clientTrustChainReference;
@property (copy) NSData *identityReference;
@property (copy) NSArray *trustedServerCertificateReferences;
@property (copy) NSArray *supportedEAPTypes;
@property (copy) NSString *username;
@property (copy) NSString *outerIdentity;
@property long long ttlsInnerAuthenticationType;
@property (copy) NSString *password;
@property (copy) NSArray *trustedServerNames;
@property (getter=isTLSClientCertificateRequired) char tlsClientCertificateRequired;
@property long long preferredTLSVersion;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)setIdentity:(struct __SecIdentity { } *)a0;
- (char)setTrustedServerCertificates:(id)a0;

@end
