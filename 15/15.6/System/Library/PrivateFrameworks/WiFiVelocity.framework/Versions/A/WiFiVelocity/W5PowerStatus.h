@interface W5PowerStatus : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long powerSourceType;
@property (nonatomic) int batteryWarningLevel;
@property (nonatomic) double internalBatteryLevel;
@property (nonatomic) unsigned int powerStateCaps;

- (char)conformsToProtocol:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToPowerStatus:(id)a0;

@end
