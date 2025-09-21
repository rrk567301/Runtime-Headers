@class NSArray, NSMeasurement, NSDate;

@interface SRPhotoplethysmogramSample : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) long long nanosecondsSinceStart;
@property (readonly, copy, nonatomic) NSArray *usage;
@property (readonly, copy, nonatomic) NSArray *opticalSamples;
@property (readonly, copy, nonatomic) NSArray *accelerometerSamples;
@property (readonly, nonatomic) NSMeasurement *temperature;

+ (id)new;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithHAPPGFrame:(id)a0;
- (id)initWithStartDate:(id)a0 nsSinceStart:(long long)a1 usage:(id)a2 opticalSamples:(id)a3 accelSamples:(id)a4 degrees:(id)a5;
- (char)isEqualToPPGSample:(id)a0;

@end
