@class NSDictionary, NSString;

@interface AMSBadgeRequest : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) NSDictionary *actionMetricsEvent;
@property (readonly) NSString *badgeIdentifier;
@property (readonly) NSString *bundleIdentifier;
@property (readonly) char enabled;
@property (readonly) NSDictionary *metrics;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPushPayload:(id)a0;

@end
