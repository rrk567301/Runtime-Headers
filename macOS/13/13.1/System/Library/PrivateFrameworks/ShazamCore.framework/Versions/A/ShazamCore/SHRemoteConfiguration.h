@class AMSBagValue, SHMusicSubscriptionStatus, SHFeatureFlags, ICLightweightMusicSubscriptionStatusRequest, AMSBag;

@interface SHRemoteConfiguration : NSObject

@property (retain) ICLightweightMusicSubscriptionStatusRequest *subscriptionRequest;
@property (retain) SHMusicSubscriptionStatus *musicSubscriptionStatus;
@property (retain) AMSBag *amsBag;
@property (retain) SHFeatureFlags *featureFlags;
@property (retain) AMSBagValue *featureFlagsBagValue;
@property (retain) AMSBagValue *endpointsBagValue;
@property (retain) AMSBagValue *internalHostBagValue;
@property (retain) AMSBagValue *externalHostBagValue;
@property (retain) AMSBagValue *campaignTokenBagValue;
@property (retain) AMSBagValue *defaultValuesBagValue;
@property (retain) AMSBagValue *languageTagBagValue;

+ (id)sharedInstance;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithBag:(id)a0;
- (void)didChangeMusicSubscriptionStatus:(id)a0;
- (void)populateRemoteConfiguration;
- (void)populateFeatureFlags;
- (void)endpointsWithCompletion:(id /* block */)a0;
- (void)hostForClientType:(long long)a0 completion:(id /* block */)a1;
- (void)campaignTokenWithCompletion:(id /* block */)a0;
- (void)defaultValuesWithCompletion:(id /* block */)a0;
- (void)fetchMusicSubscriptionStatus;

@end
