@class NSString, NSNumber;

@interface SystemProperties : NSObject

@property (nonatomic) char vendorBuild;
@property (readonly, nonatomic) int deviceClass;
@property (readonly, nonatomic) NSString *deviceClassString;
@property (readonly, nonatomic) char basebandCapability;
@property (readonly, nonatomic) char dualSIMCapable;
@property (readonly, nonatomic) char dualSIMEnabled;
@property (readonly, nonatomic) char internalBuild;
@property (readonly, nonatomic) char factoryBuild;
@property (readonly, nonatomic) char seedBuild;
@property (readonly, nonatomic) char carrierBuild;
@property (readonly, nonatomic) char customerBuild;
@property (readonly, nonatomic) char customerSeedBuild;
@property (readonly, nonatomic) char carrierSeedBuild;
@property (readonly, nonatomic) char npiDevice;
@property (readonly, nonatomic) NSString *productName;
@property (readonly, nonatomic) NSString *productType;
@property (readonly, nonatomic) NSString *productVersion;
@property (readonly, nonatomic) NSString *buildVersion;
@property (readonly, nonatomic) NSString *buildVersionPrefix;
@property (readonly, nonatomic) NSString *buildPlatform;
@property (readonly, nonatomic) NSString *buildVariant;
@property (readonly, nonatomic) NSString *serialNumber;
@property (readonly, nonatomic) NSString *basebandChipset;
@property (readonly, nonatomic) NSString *wifiChipset;
@property (readonly, nonatomic) NSString *basebandFirmwareVersion;
@property (nonatomic) char internalBuildDisabledByOverride;
@property (copy, nonatomic) NSNumber *carrierSeedBuildOverride;
@property (copy, nonatomic) NSNumber *seedBuildOverride;
@property (copy, nonatomic) NSNumber *vendorBuildOverride;
@property (copy, nonatomic) NSNumber *npiDeviceOverride;

+ (id)sharedInstance;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (char)carrierSeedBuild;
- (char)customerBuild;
- (char)customerSeedBuild;

@end
