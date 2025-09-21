@class NSString;

@interface ICFullDeviceInfo : ICMigrationDeviceInfo

@property (readonly, nonatomic) struct ICDeviceHardwareInfo { unsigned long long modelName; long long version; long long subVersion; } hardwareInfo;
@property (readonly, nonatomic) NSString *model;
@property (readonly, nonatomic) NSString *modelDisplayName;
@property (readonly, nonatomic) NSString *softwareVersion;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (char)upgradedToIOS13;
- (struct ICDeviceHardwareInfo { unsigned long long x0; long long x1; long long x2; })hardwareInfoFromModelId:(id)a0;
- (unsigned long long)hardwareInfoNameFromString:(id)a0;
- (id)initWithName:(id)a0 model:(id)a1 modelDisplayName:(id)a2 softwareVersion:(id)a3;
- (char)isHardwareInfoUpgradable:(struct ICDeviceHardwareInfo { unsigned long long x0; long long x1; long long x2; })a0;
- (char)isHardwareInfoUpgradableToIOS13:(struct ICDeviceHardwareInfo { unsigned long long x0; long long x1; long long x2; })a0;
- (char)isHardwareInfoUpgradableToMacOS11:(struct ICDeviceHardwareInfo { unsigned long long x0; long long x1; long long x2; })a0;
- (char)isIOSDevice;
- (char)isOSXDevice;
- (id)loggableDescription;
- (char)shouldBeHidden;
- (char)upgradable;
- (char)upgradableToIOS13;
- (char)upgradableToIOS14orMacOS11;
- (char)upgraded;
- (char)upgradedToIOS14EorMacOS11E;
- (char)upgradedToMajor:(int)a0 minor:(int)a1;

@end
