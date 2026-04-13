@class SHFeatureFlags, AMSBagValue, AMSBag;

@interface SHRemoteConfiguration : NSObject

@property (retain) AMSBag *amsBag;
@property (retain) SHFeatureFlags *featureFlags;
@property (retain) AMSBagValue *featureFlagsBagValue;
@property (retain) AMSBagValue *endpointsBagValue;
@property (retain) AMSBagValue *insightsBagValue;
@property (retain) AMSBagValue *internalHostBagValue;
@property (retain) AMSBagValue *externalHostBagValue;
@property (retain) AMSBagValue *campaignTokenBagValue;
@property (retain) AMSBagValue *defaultValuesBagValue;
@property (retain) AMSBagValue *languageTagBagValue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)initWithBag:(id)a0;
- (void)populateRemoteConfiguration;
- (void)insightsWithCompletion:(id /* block */)a0;
- (void)populateFeatureFlags;
- (void)endpointsWithCompletion:(id /* block */)a0;
- (void)hostForClientType:(long long)a0 completion:(id /* block */)a1;
- (void)campaignTokenWithCompletion:(id /* block */)a0;
- (void)defaultValuesWithCompletion:(id /* block */)a0;

@end
