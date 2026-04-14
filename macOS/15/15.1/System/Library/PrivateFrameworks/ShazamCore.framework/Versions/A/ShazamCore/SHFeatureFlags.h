@class NSDictionary;

@interface SHFeatureFlags : NSObject

@property (readonly) NSDictionary *featureFlags;
@property (readonly) BOOL shouldDisplayShazamUpsell;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;

@end
