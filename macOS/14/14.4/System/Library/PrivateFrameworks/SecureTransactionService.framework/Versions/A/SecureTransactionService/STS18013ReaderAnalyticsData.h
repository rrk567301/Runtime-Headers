@class NSString;

@interface STS18013ReaderAnalyticsData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *untrustedIdentifier;
@property (readonly, nonatomic) NSString *untrustedOrganization;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithUntrustedIdentifier:(id)a0 untrustedOrganization:(id)a1;

@end
