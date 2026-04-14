@class NSDictionary, NSNumber, NSURL;

@interface PKPaymentWebServiceConfiguration : NSObject <NSSecureCoding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSDictionary *configuration;
@property (readonly, weak) NSNumber *version;
@property (copy) NSURL *configurationURL;

- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)peerPaymentEnabledForRegion:(id)a0;
- (BOOL)applyServiceEnabledForRegion:(id)a0;
- (BOOL)accountServiceEnabledForRegion:(id)a0;
- (id)featureWithType:(long long)a0 inRegion:(id)a1;
- (id)paymentSetupFeaturedNetworksForRegion:(id)a0;
- (id)paymentSetupBrowsableProductTypesForRegion:(id)a0;
- (id)supportedRegionsForOSVersion:(id)a0 deviceClass:(id)a1;
- (id)unsupportedRegionsForOSVersion:(id)a0 deviceClass:(id)a1;
- (BOOL)hasFeatureRequiringRegistrationInRegion:(id)a0 osVersion:(id)a1 deviceClass:(id)a2;
- (BOOL)buddyProvisioningEnabledForRegion:(id)a0;
- (id)discoveryManifestURLForRegion:(id)a0;
- (id)unsupportedWebPaymentConfigurations;
- (unsigned long long)notificationAuthorizationPromptPresentationCount;
- (BOOL)AMPNonDefaultBehaviourDisabledForRegion:(id)a0;
- (id)primaryFeaturedNetworkForRegion:(id)a0;
- (id)credentialTypesRequiringMetadata;
- (BOOL)browseProvisioningBankAppsEnabledForRegion:(id)a0;
- (id)marketsURL;
- (BOOL)suppressCardholderNameFieldForRegion:(id)a0;
- (BOOL)remotePaymentsRequiredForVoiceover;
- (BOOL)regionHasProvisioningEnablementPercentage:(id)a0;
- (double)provisioningEnablementPercentageForRegion:(id)a0;
- (id)marketGeoRegionNotificationNetworkThresholdsForRegion:(id)a0;
- (double)deviceUpgradeTaskEnablementPercentageForRegion:(id)a0;
- (id)betaPaymentNetworksForRegion:(id)a0;
- (id)betaPaymentNetworkVersionsForRegion:(id)a0;
- (id)applyServiceFeaturesForRegion:(id)a0;
- (id)_lock_region:(id)a0;
- (id)supportedRegionsForOSVersion:(id)a0 deviceClass:(id)a1 platform:(id)a2;
- (id)_regionsForOSVersion:(id)a0 deviceClass:(id)a1 platform:(id)a2 supportedRegions:(BOOL)a3;
- (id)unsupportedRegionsForOSVersion:(id)a0 deviceClass:(id)a1 platform:(id)a2;
- (id)_lock_featuresForRegion:(id)a0 osVersion:(id)a1 deviceClass:(id)a2;
- (id)_lock_globalFeaturesForOSVersion:(id)a0 deviceClass:(id)a1;
- (id)_featuresFromDictionary:(id)a0 withRegion:(id)a1 osVersion:(id)a2 deviceClass:(id)a3;
- (id)_lock_featuresForRegion:(id)a0;
- (id)_lock_unsupported_region:(id)a0;
- (id)_lock_regions;
- (id)_lock_unsupported_regions;
- (BOOL)_lock_supportedForOSVersion:(id)a0 inRegion:(id)a1 deviceClass:(id)a2 platform:(id)a3 suportedRegions:(BOOL)a4;
- (id)initWithConfiguration:(id)a0 url:(id)a1;
- (id)brokerURLForRegion:(id)a0;
- (id)paymentServicesURLForRegion:(id)a0;
- (id)paymentServicesMerchantURLForRegion:(id)a0;
- (BOOL)buddyManualProvisioningEnabledForRegion:(id)a0;
- (BOOL)manualProvisioningEnabledForRegion:(id)a0;
- (BOOL)cameraFirstProvisioningEnabledForRegion:(id)a0;
- (id)heroImageManifestURLForRegion:(id)a0;
- (id)defaultServerURL;
- (BOOL)paymentTransactionIconsEnabledForRegion:(id)a0;
- (BOOL)userCanResetCloudStoreApplePayViewForRegion:(id)a0;
- (id)maxRefreshIntervalForUnsupportedRegion;
- (id)maxRefreshIntervalForRegion:(id)a0;
- (BOOL)hasFeaturesSupportedForRegion:(id)a0 osVersion:(id)a1 deviceClass:(id)a2;
- (id)featuresForRegion:(id)a0;
- (id)numberOfDaysBetweenMapsReprocessingForRegion:(id)a0;
- (id)marketGeoRegionNotificationTimeRangeForRegion:(id)a0;
- (double)deviceCheckInIntervalForRegion:(id)a0;
- (BOOL)deviceCheckInDisabledForRegion:(id)a0;
- (BOOL)shouldPaymentSetupFeaturesUseStrictProductsCheckForRegion:(id)a0;
- (BOOL)shouldEnableTransitServiceCheckInForRegion:(id)a0;
- (id)contactFormatConfiguration;
- (double)dynamicAssetPrefetchTimeIntervalForRegion:(id)a0;

@end
