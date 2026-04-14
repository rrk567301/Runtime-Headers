@class NSString, NSArray, NSData, NSSet;

@interface CWFWiFiNetworkSharingEAPCredentials : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *outerIdentity;
@property (copy, nonatomic) NSArray *trustedServerCertificates;
@property (copy, nonatomic) NSArray *trustedServerNames;
@property (copy, nonatomic) NSArray *clientCertificateChain;
@property (copy, nonatomic) NSData *clientPrivateKey;
@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSSet *acceptedEAPTypes;
@property (copy, nonatomic) NSString *TLSMinimumVersion;
@property (copy, nonatomic) NSString *TLSMaximumVersion;
@property (nonatomic) BOOL TLSCertificateRequired;
@property (nonatomic) long long TTLSInnerAuthenticationType;
@property (nonatomic) BOOL FASTUsePAC;
@property (nonatomic) BOOL FASTProvisionPACAnonymously;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)a0;
- (long long)__TTLSInnerAuthenticationTypeForString:(id)a0;
- (id)__acceptedCWFWiFiNetworkSharingEAPTypes:(id)a0;
- (id)initWithShareableEAPConfiguration:(id)a0;

@end
