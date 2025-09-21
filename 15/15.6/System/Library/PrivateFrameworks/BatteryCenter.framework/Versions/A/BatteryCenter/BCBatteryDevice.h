@class NSString;

@interface BCBatteryDevice : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long percentCharge;
@property (nonatomic, getter=isConnected) char connected;
@property (nonatomic, getter=isCharging) char charging;
@property (nonatomic, getter=isInternal) char internal;
@property (nonatomic, getter=isPowerSource) char powerSource;
@property (nonatomic) char approximatesPercentCharge;
@property (nonatomic) unsigned long long parts;
@property (nonatomic, getter=isWirelesslyCharging) char wirelesslyCharging;
@property (copy, nonatomic) NSString *groupName;
@property (readonly, copy, nonatomic) NSString *matchIdentifier;
@property (nonatomic) long long transportType;
@property (nonatomic) long long powerSourceState;
@property (nonatomic, getter=isFake) char fake;
@property (nonatomic, getter=isLowPowerModeActive) char lowPowerModeActive;
@property (nonatomic, getter=isLowBattery) char lowBattery;
@property (copy, nonatomic) NSString *accessoryIdentifier;
@property (nonatomic) unsigned long long accessoryCategory;
@property (copy, nonatomic) NSString *modelNumber;
@property (readonly, nonatomic) long long vendor;
@property (readonly, nonatomic) long long productIdentifier;

+ (id)batteryDeviceWithIdentifier:(id)a0 vendor:(long long)a1 productIdentifier:(long long)a2 parts:(unsigned long long)a3 matchIdentifier:(id)a4;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)synthesizedRepresentativeDevice;
- (id)initWithIdentifier:(id)a0 vendor:(long long)a1 productIdentifier:(long long)a2 parts:(unsigned long long)a3 matchIdentifier:(id)a4;
- (char)isBatterySaverModeActive;

@end
