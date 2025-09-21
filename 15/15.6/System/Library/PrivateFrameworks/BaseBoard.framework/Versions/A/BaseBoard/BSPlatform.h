@class NSString;

@interface BSPlatform : NSObject

@property (readonly, copy, nonatomic) NSString *productType;
@property (readonly, copy, nonatomic) NSString *productHardwareModel;
@property (readonly, copy, nonatomic) NSString *productHardwareModelName;
@property (readonly, copy, nonatomic) NSString *productClass;
@property (readonly, copy, nonatomic) NSString *localizedProductName;
@property (readonly, copy, nonatomic) NSString *operatingSystemName;
@property (readonly, copy, nonatomic) NSString *uniqueDeviceIdentifier;
@property (readonly, nonatomic) int deviceClass;
@property (readonly, nonatomic) long long homeButtonType;
@property (readonly, copy, nonatomic) NSString *productVersion;
@property (readonly, copy, nonatomic) NSString *productBuildVersion;
@property (readonly, nonatomic, getter=isInternalInstall) char internalInstall;
@property (readonly, nonatomic, getter=isDeveloperInstall) char developerInstall;
@property (readonly, nonatomic, getter=isCarrierInstall) char carrierInstall;
@property (readonly, nonatomic, getter=isMultiCore) char multiCore;
@property (readonly, nonatomic) char hasGasGauge;
@property (readonly, nonatomic) char hasOrbCapability;

+ (id)sharedInstance;

@end
