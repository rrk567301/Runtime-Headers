@class NSDate;

@interface CMDeviceImpact : CMLogItem

@property (readonly, nonatomic) long long impactType;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) double peakAcceleration;
@property (readonly, nonatomic, getter=isSimulated) BOOL simulated;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (long long)compare:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithImpactType:(long long)a0 peakAcceleration:(double)a1 simulated:(BOOL)a2 date:(id)a3 timestamp:(double)a4;

@end
