@class APDeviceCapabilityEngine, NSString;

@interface APLegacyFeatureFlags : NSObject <APLegacyFeatureFlagsProviding>

@property (readonly, nonatomic) BOOL odcaP0;
@property (readonly, nonatomic) BOOL odcaP0u1;
@property (readonly, nonatomic) BOOL odcaP1;
@property (readonly, nonatomic) BOOL toroIDPartialSuppression;
@property (readonly, nonatomic) APDeviceCapabilityEngine *capabilityEngine;
@property (readonly, nonatomic) BOOL devicePipelinesEnabled;
@property (readonly, nonatomic) BOOL attributionV3Enabled;
@property (readonly, nonatomic) BOOL attributionV2Enabled;
@property (readonly, nonatomic) BOOL actionStoreEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
