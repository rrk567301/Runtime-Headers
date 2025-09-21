@class NSString;

@interface W5BluetoothDevice : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *address;
@property (nonatomic) BOOL isPaired;
@property (nonatomic) BOOL isCloudPaired;
@property (nonatomic) BOOL isConnected;
@property (nonatomic) BOOL isAppleDevice;
@property (nonatomic) BOOL isLowEnergy;
@property (nonatomic) unsigned long long majorClass;
@property (nonatomic) unsigned long long minorClass;
@property (nonatomic) long long rssi;
@property (copy, nonatomic) NSString *afhMap;
@property (nonatomic) long long connectionMode;
@property (nonatomic) unsigned long long connectionModeInterval;
@property (nonatomic) long long manufacturer;
@property (nonatomic) unsigned long long lmpVersion;
@property (nonatomic) unsigned long long lmpSubversion;
@property (nonatomic) long long role;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToBluetoothDevice:(id)a0;

@end
