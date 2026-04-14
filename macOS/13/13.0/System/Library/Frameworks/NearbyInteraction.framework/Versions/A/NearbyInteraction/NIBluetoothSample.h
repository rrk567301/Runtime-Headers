@class NSString;

@interface NIBluetoothSample : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) double rssi;
@property (readonly) NSString *identifier;
@property (readonly) NSString *model;
@property (readonly) int channel;
@property (readonly) double machContinuousTimeSeconds;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithRSSI:(double)a0 identifier:(id)a1 model:(id)a2 channel:(int)a3 machContinuousTimeSeconds:(double)a4;
- (id)initWithBluetoothSample:(id)a0;

@end
