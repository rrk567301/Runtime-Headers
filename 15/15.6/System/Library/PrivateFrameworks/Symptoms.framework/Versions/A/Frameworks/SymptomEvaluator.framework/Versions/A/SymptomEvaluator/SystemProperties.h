@class NSString, NSNumber;

@interface SystemProperties : NSObject

@property (readonly, nonatomic) NSString *productType;
@property (readonly, nonatomic) int deviceClass;
@property (readonly, nonatomic) NSString *deviceClassString;
@property (readonly, nonatomic) char basebandCapability;
@property (readonly, nonatomic) int dualSIMCapability;
@property (readonly, nonatomic) char internalBuild;
@property (readonly, nonatomic) char vendorBuild;
@property (readonly, nonatomic) char seedBuild;
@property (readonly, nonatomic) char carrierBuild;
@property (readonly, nonatomic) char customerSeedBuild;
@property (readonly, nonatomic) char carrierSeedBuild;
@property (readonly, nonatomic) char isSymptomsdHelper;
@property (readonly, nonatomic) NSString *productName;
@property (readonly, nonatomic) NSString *productVersion;
@property (readonly, nonatomic) NSString *buildVersion;
@property (readonly, nonatomic) NSString *buildVersionPrefix;
@property (readonly, nonatomic) NSString *buildPlatform;
@property (readonly, nonatomic) NSString *buildVariant;
@property (readonly, nonatomic) NSString *basebandChipset;
@property (readonly, nonatomic) NSString *serialNumber;
@property (nonatomic) char internalBuildDisabledByOverride;
@property (copy, nonatomic) NSNumber *carrierSeedBuildOverride;
@property (copy, nonatomic) NSNumber *seedBuildOverride;
@property (copy, nonatomic) NSNumber *vendorBuildOverride;

+ (id)sharedInstance;
+ (unsigned long long)retrieveDeviceConfigTypeForKey:(struct __CFString { } *)a0;
+ (void)deleteDeviceConfigTypePreference;
+ (void)deleteDeviceConfigTypePreferenceForKey:(struct __CFString { } *)a0;
+ (unsigned long long)retrieveDeviceConfigTypePreference;
+ (unsigned long long)retrieveDeviceConfigTypePreferenceForKey:(struct __CFString { } *)a0;
+ (void)saveDeviceConfigType:(unsigned long long)a0 forKey:(struct __CFString { } *)a1;
+ (void)setDeviceConfigTypeForSerialNumber:(id)a0;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (char)carrierSeedBuild;
- (char)customerSeedBuild;
- (const char *)dualSIMCapabilityString;

@end
