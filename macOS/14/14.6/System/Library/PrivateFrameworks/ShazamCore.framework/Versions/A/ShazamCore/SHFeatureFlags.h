@class NSDictionary;

@interface SHFeatureFlags : NSObject

@property (readonly) NSDictionary *featureFlags;
@property (readonly) BOOL isAppClipEnabled;
@property (readonly) BOOL isTrackPageEnabled;
@property (readonly) BOOL appClipAppendsSubscriptionStatus;
@property (readonly) BOOL trackPageDisplaysShazamUpsell;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;

@end
