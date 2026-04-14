@class AMSBagValue, SHMusicSubscriptionStatus, ICLightweightMusicSubscriptionStatusRequest, AMSBag;

@interface SHRemoteConfiguration : NSObject

@property (retain) ICLightweightMusicSubscriptionStatusRequest *subscriptionRequest;
@property (retain) SHMusicSubscriptionStatus *musicSubscriptionStatus;
@property (retain) AMSBag *amsBag;
@property (retain) AMSBagValue *endpointsBagValue;
@property (retain) AMSBagValue *internalHostBagValue;
@property (retain) AMSBagValue *externalHostBagValue;
@property (retain) AMSBagValue *campaignTokenBagValue;
@property (retain) AMSBagValue *defaultValuesBagValue;
@property (retain) AMSBagValue *languageTagBagValue;
@property (retain) AMSBagValue *featureFlagsBagValue;
@property (retain) AMSBagValue *shazamOfferAPIHostsBagValue;
@property (retain) AMSBagValue *shazamOfferAPIEndpointsBagValue;

+ (id)sharedInstance;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithBag:(id)a0;
- (void)campaignTokenWithCompletion:(id /* block */)a0;
- (void)defaultValuesWithCompletion:(id /* block */)a0;
- (void)didChangeMusicSubscriptionStatus:(id)a0;
- (void)endpointsWithCompletion:(id /* block */)a0;
- (void)featureFlagsWithCompletion:(id /* block */)a0;
- (void)fetchMusicSubscriptionStatus;
- (void)hostForClientType:(long long)a0 completion:(id /* block */)a1;
- (void)populateRemoteConfiguration;
- (void)shazamOfferAPIHostWithCompletion:(id /* block */)a0;
- (void)shazamOfferAPIURLPathWithCompletion:(id /* block */)a0;

@end
