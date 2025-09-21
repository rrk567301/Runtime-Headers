@class NSUUID, NSString, HKQuantity;

@interface HKWorkoutConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char shouldUseLowPowerMode;
@property (copy, nonatomic) NSUUID *fitnessMachineSessionUUID;
@property (copy, nonatomic) NSUUID *predictionSessionUUID;
@property (nonatomic) char shouldDisambiguateLocation;
@property (nonatomic) char shouldUseExtendedMode;
@property (copy, nonatomic) NSString *fitnessPlusCatalogWorkoutId;
@property (nonatomic) long long fitnessPlusMediaType;
@property (copy, nonatomic) NSUUID *suggestedActivityUUID;
@property unsigned long long activityType;
@property long long locationType;
@property long long swimmingLocationType;
@property (copy) HKQuantity *lapLength;

+ (id)_workoutConfigurationFromDictionary:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_dictionaryRepresentation;
- (char)validateIgnoringDeviceSupport:(char)a0 error:(id *)a1;

@end
