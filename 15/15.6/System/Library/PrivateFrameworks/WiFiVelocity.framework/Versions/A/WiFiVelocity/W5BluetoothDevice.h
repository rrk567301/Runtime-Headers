@class NSString;

@interface W5BluetoothDevice : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *address;
@property (nonatomic) char isPaired;
@property (nonatomic) char isCloudPaired;
@property (nonatomic) char isConnected;
@property (nonatomic) unsigned long long majorClass;
@property (nonatomic) unsigned long long minorClass;
@property (nonatomic) char isLowEnergy;
@property (nonatomic) long long rssi;
@property (copy, nonatomic) NSString *afhMap;
@property (nonatomic) long long connectionMode;
@property (nonatomic) unsigned long long connectionModeInterval;
@property (nonatomic) long long manufacturer;
@property (nonatomic) unsigned long long lmpVersion;
@property (nonatomic) unsigned long long lmpSubversion;
@property (nonatomic) long long role;
@property (nonatomic) char isAppleDevice;

- (void)dealloc;
- (char)conformsToProtocol:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToBluetoothDevice:(id)a0;

@end
