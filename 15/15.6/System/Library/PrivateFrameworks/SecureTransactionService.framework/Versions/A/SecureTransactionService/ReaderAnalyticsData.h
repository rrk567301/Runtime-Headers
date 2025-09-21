@class NSString;

@interface ReaderAnalyticsData : NSObject <NSSecureCoding> {
    char _trusted;
    NSString *_untrustedIdentifier;
    NSString *_untrustedOrganization;
    NSString *_untrustedIssuerIdentifier;
    NSString *_untrustedIssuerOrganization;
}

@property (class, readonly) char supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
