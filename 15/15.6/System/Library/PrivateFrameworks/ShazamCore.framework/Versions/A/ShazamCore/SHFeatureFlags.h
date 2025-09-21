@class NSDictionary;

@interface SHFeatureFlags : NSObject

@property (readonly) NSDictionary *featureFlags;
@property (readonly) char shouldDisplayShazamUpsell;
@property (readonly) char preferDefaultOfferInLiveActivity;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;

@end
