@interface HMMTRFeatures : NSObject

+ (void)disableFeatureMatterRVCForTests;
+ (void)disableFeatureMatterHRAPDeviceTypesForTests;
+ (void)disableFeatureMatterLocalFabricConfigEnabledForTests;
+ (void)disableFeatureiPhoneOnlyPairingControlForTests;
+ (void)enableFeatureMatterHRAPDeviceTypesForTests;
+ (void)enableFeatureMatterLocalFabricConfigEnabledForTests;
+ (void)enableFeatureMatterRVCForTests;
+ (void)enableFeatureiPhoneOnlyPairingControlForTests;
+ (void)unsetFeatureMatterHRAPDeviceTypesForTests;
+ (void)unsetFeatureMatterLocalFabricConfigEnabledForTests;
+ (void)unsetFeatureMatterRVCForTests;
+ (void)unsetFeatureiPhoneOnlyPairingControlForTests;

@end
