@class NSString;

@interface ICFullDeviceInfo : ICMigrationDeviceInfo

@property (readonly, nonatomic) struct ICDeviceHardwareInfo { unsigned long long modelName; long long version; long long subVersion; } hardwareInfo;
@property (readonly, nonatomic) NSString *model;
@property (readonly, nonatomic) NSString *modelDisplayName;
@property (readonly, nonatomic) NSString *softwareVersion;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (BOOL)upgraded;
- (BOOL)upgradable;
- (BOOL)isOSXDevice;
- (id)initWithName:(id)a0 model:(id)a1 modelDisplayName:(id)a2 softwareVersion:(id)a3;
- (BOOL)shouldBeHidden;
- (BOOL)upgradableToIOS13;
- (BOOL)upgradedToIOS13;
- (BOOL)isIOSDevice;
- (BOOL)upgradableToIOS14orMacOS11;
- (BOOL)upgradedToIOS14EorMacOS11E;
- (id)loggableDescription;
- (struct ICDeviceHardwareInfo { unsigned long long x0; long long x1; long long x2; })hardwareInfoFromModelId:(id)a0;
- (BOOL)isHardwareInfoUpgradable:(struct ICDeviceHardwareInfo { unsigned long long x0; long long x1; long long x2; })a0;
- (BOOL)isHardwareInfoUpgradableToIOS13:(struct ICDeviceHardwareInfo { unsigned long long x0; long long x1; long long x2; })a0;
- (BOOL)isHardwareInfoUpgradableToMacOS11:(struct ICDeviceHardwareInfo { unsigned long long x0; long long x1; long long x2; })a0;
- (BOOL)upgradedToMajor:(int)a0 minor:(int)a1;
- (unsigned long long)hardwareInfoNameFromString:(id)a0;

@end
