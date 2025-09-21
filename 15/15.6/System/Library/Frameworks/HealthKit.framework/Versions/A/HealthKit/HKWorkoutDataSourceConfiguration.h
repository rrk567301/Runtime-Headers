@class HKWorkoutConfiguration, NSSet, NSDictionary;

@interface HKWorkoutDataSourceConfiguration : HKTaskConfiguration

@property (readonly, copy) HKWorkoutConfiguration *workoutConfiguration;
@property (readonly, copy) NSSet *sampleTypesToCollect;
@property (readonly, copy) NSDictionary *filtersBySampleType;
@property (readonly, copy) NSSet *eventTypesToCollect;
@property char collectsDefaultTypes;

+ (char)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithWorkoutConfiguration:(id)a0 sampleTypesToCollect:(id)a1 filters:(id)a2 eventTypesToCollect:(id)a3 collectsDefaultTypes:(char)a4;

@end
