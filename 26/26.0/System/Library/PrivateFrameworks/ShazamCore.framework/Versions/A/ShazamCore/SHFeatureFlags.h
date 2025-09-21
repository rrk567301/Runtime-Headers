@class NSDictionary;

@interface SHFeatureFlags : NSObject

@property (readonly) NSDictionary *featureFlags;
@property (readonly) BOOL shouldDisplayShazamUpsell;
@property (readonly) BOOL preferDefaultOfferInLiveActivity;

- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;

@end
