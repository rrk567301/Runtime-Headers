@interface CMGenericWorkout : CMWorkout {
    unsigned long long fWorkoutLabel;
}

@property (readonly, nonatomic) unsigned long long workoutLabel;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isAvailable;
+ (id)genericWorkoutInstance:(id)a0;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)dealloc;
- (id)initWithSessionId:(id)a0 workoutLabel:(unsigned long long)a1;

@end
