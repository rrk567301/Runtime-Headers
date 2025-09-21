@class NSString;

@interface ICCompatibilityControllerDevice : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long notesVersion;
@property (nonatomic) long long maximumNotesVersion;
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic, getter=isUpgraded) char upgraded;
@property (readonly, nonatomic, getter=isUpgradable) char upgradable;

+ (long long)maximumNotesVersionForHardwareInfo:(struct ICDeviceHardwareInfo { unsigned long long x0; long long x1; long long x2; })a0;
+ (long long)notesVersionForDeviceInfo:(id)a0;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithMigrationDeviceInfo:(id)a0;
- (id)initWithNotesVersion:(long long)a0 maximumNotesVersion:(long long)a1 name:(id)a2;

@end
