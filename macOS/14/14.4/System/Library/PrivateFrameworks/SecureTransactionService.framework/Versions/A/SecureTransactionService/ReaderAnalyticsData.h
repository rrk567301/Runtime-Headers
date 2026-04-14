@class NSString;

@interface ReaderAnalyticsData : NSObject <NSSecureCoding> {
    NSString *_untrustedIdentifier;
    NSString *_untrustedOrganization;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
