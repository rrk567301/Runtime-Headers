@class NSString;

@interface DCPresentmentProposalReaderAnalytics : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isTrusted) BOOL trusted;
@property (readonly, nonatomic) NSString *untrustedIdentifier;
@property (readonly, nonatomic) NSString *untrustedOrganization;
@property (readonly, nonatomic) NSString *untrustedIssuerIdentifier;
@property (readonly, nonatomic) NSString *untrustedIssuerOrganization;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithTrusted:(BOOL)a0 untrustedIdentifier:(id)a1 untrustedOrganization:(id)a2 untrustedIssuerIdentifier:(id)a3 untrustedIssuerOrganization:(id)a4;

@end
