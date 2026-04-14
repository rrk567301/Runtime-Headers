@class NSString;

@interface ReaderAnalyticsData : NSObject <NSSecureCoding> {
    BOOL _trusted;
    NSString *_untrustedIdentifier;
    NSString *_untrustedOrganization;
    NSString *_untrustedIssuerIdentifier;
    NSString *_untrustedIssuerOrganization;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
