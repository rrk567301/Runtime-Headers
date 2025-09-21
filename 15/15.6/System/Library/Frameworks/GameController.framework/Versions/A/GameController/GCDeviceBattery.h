@interface GCDeviceBattery : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) float batteryLevel;
@property (nonatomic) long long batteryState;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_setBatteryLevel:(float)a0;
- (void)_setBatteryState:(long long)a0;
- (id)initWithLevel:(float)a0 batteryState:(long long)a1;
- (id)initWithLevel:(unsigned char)a0 isCharging:(char)a1;

@end
