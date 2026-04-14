@class NSNumber, NSDate;

@interface PPSMetricSample : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSNumber *value;
@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) BOOL boolValue;
@property (readonly, nonatomic) int intValue;
@property (readonly, nonatomic) double doubleValue;

+ (id)sampleWithValue:(id)a0 timestamp:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithValue:(id)a0 timestamp:(id)a1;

@end
