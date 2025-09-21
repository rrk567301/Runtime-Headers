@class NSString;

@interface CMFitnessMachineWorkout : CMWorkout {
    NSString *fManufacturerName;
    NSString *fModel;
}

@property (readonly, nonatomic) NSString *manufacturerName;
@property (readonly, nonatomic) NSString *model;

+ (char)supportsSecureCoding;
+ (char)isAvailable;
+ (id)fitnessMachineWorkoutInstance:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSessionId:(id)a0 workoutType:(long long)a1 manufacturerName:(id)a2 model:(id)a3;

@end
