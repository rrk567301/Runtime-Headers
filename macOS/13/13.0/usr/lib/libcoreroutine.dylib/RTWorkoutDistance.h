@class NSString, NSUUID, NSDate;

@interface RTWorkoutDistance : NSObject <RTCoreDataReadable, RTCoreDataWritable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSUUID *firstWorkout;
@property (readonly, copy, nonatomic) NSUUID *secondWorkout;
@property (readonly, nonatomic) double distance;
@property (readonly, nonatomic) BOOL areBothWorkoutsDecimated;
@property (readonly, nonatomic) long long distanceMetric;
@property (readonly, nonatomic) long long workoutActivityType;
@property (readonly, copy, nonatomic) NSDate *date;

+ (id)createWithManagedObject:(id)a0;
+ (id)createWithWorkoutDistanceMO:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)managedObjectWithContext:(id)a0;
- (id)initWithFirstWorkout:(id)a0 secondWorkout:(id)a1 distanceMetric:(long long)a2 workoutActivityType:(long long)a3 areBothWorkoutsDecimated:(BOOL)a4 distance:(double)a5 date:(id)a6;

@end
