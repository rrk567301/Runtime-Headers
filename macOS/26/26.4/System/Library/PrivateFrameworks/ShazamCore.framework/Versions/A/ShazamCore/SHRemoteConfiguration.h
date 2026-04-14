@class SHAMPConfigurationRequester, AMSBag;

@interface SHRemoteConfiguration : NSObject

@property (retain) AMSBag *amsBag;
@property (readonly) SHAMPConfigurationRequester *configurationRequester;

+ (id)sharedInstance;

- (id)initWithBag:(id)a0;
- (void).cxx_destruct;
- (void)announcementsBagConfigurationWithCompletion:(id /* block */)a0;
- (void)cacheValuesWithCompletion:(id /* block */)a0;
- (id)cachedDictionaryForKey:(id)a0;
- (id)cachedMusicalFeaturesBagConfiguration;
- (id)cachedRematchBagConfiguration;
- (void)campaignTokenWithCompletion:(id /* block */)a0;
- (void)defaultValuesWithCompletion:(id /* block */)a0;
- (void)endpointsWithCompletion:(id /* block */)a0;
- (void)featureFlagsWithCompletion:(id /* block */)a0;
- (void)hapticsWithCompletion:(id /* block */)a0;
- (void)hostForClientType:(long long)a0 completion:(id /* block */)a1;
- (void)musicalFeaturesBagConfigurationWithCompletion:(id /* block */)a0;
- (id)musicalFeaturesBagConfigurationWithPromise;
- (void)offerValuesWithCompletion:(id /* block */)a0;
- (void)recorderConfigurationWithCompletion:(id /* block */)a0;
- (id)recorderConfigurationWithPromise;
- (void)rematchBagConfigurationWithCompletion:(id /* block */)a0;
- (id)rematchBagConfigurationWithPromise;
- (void)shazamAMPConfigurationAPIHostWithCompletion:(id /* block */)a0;
- (void)shazamOfferAPIURLPathWithCompletion:(id /* block */)a0;
- (void)streamingProviderValuesWithCompletion:(id /* block */)a0;

@end
