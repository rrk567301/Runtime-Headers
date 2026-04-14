@class NSString, NSDictionary;

@interface STWebBrowserRateLimitedCoreAnalyticsEvent : NSObject <STCoreAnalyticsEvent>

@property (readonly, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSDictionary *payload;

+ (id)description;

- (id)initWithBundleIdentifier:(id)a0;
- (void).cxx_destruct;

@end
