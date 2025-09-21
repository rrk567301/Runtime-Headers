@class NSDictionary, NSString;

@interface AMSBadgeRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSDictionary *actionMetricsEvent;
@property (readonly) NSString *badgeIdentifier;
@property (readonly) NSString *bundleIdentifier;
@property (readonly) BOOL enabled;
@property (readonly) NSDictionary *metrics;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithPushPayload:(id)a0;

@end
