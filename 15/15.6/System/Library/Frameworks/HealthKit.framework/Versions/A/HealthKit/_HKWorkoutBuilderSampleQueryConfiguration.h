@class NSUUID;

@interface _HKWorkoutBuilderSampleQueryConfiguration : HKQueryServerConfiguration

@property (nonatomic) char needsHistoricalData;
@property (copy, nonatomic) NSUUID *workoutBuilderIdentifier;
@property (nonatomic) char deliverQuantities;

+ (char)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
