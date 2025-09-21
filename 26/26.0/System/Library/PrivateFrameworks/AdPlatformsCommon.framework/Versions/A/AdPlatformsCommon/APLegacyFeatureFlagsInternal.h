@class _TtC17AdPlatformsCommon22DeviceCapabilityEngine;

@interface APLegacyFeatureFlagsInternal : NSObject

@property (class, nonatomic, readonly) BOOL devicePipelinesEnabled;
@property (class, nonatomic, readonly) BOOL attributionV3Enabled;
@property (class, nonatomic, readonly) BOOL attributionV2Enabled;
@property (class, nonatomic, readonly) BOOL jetPackEnabled;
@property (class, nonatomic, readonly) BOOL actionStoreEnabled;
@property (class, nonatomic, readonly) BOOL odcaP0;
@property (class, nonatomic, readonly) BOOL odcaP1;
@property (class, nonatomic, readonly) BOOL odcaP0u1;
@property (class, nonatomic, readonly) BOOL toroIDPartialSuppression;
@property (class, nonatomic, readonly) _TtC17AdPlatformsCommon22DeviceCapabilityEngine *deviceCapabilityEngine;

+ (BOOL)isFeatureEnabledWithFeatureName:(id)a0 enabledByDefault:(BOOL)a1;

- (id)init;
- (void).cxx_destruct;

@end
