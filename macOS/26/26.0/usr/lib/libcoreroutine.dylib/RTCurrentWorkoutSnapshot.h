@class NSUUID, NSError, NSDate;

@interface RTCurrentWorkoutSnapshot : NSObject

@property (readonly, nonatomic) NSUUID *sessionIdentifier;
@property (readonly, nonatomic) unsigned long long activityType;
@property (readonly, nonatomic) long long locationType;
@property (readonly, nonatomic) long long swimmingLocationType;
@property (readonly, nonatomic) long long sessionType;
@property (readonly, nonatomic) BOOL isFirstPartyWorkout;
@property (readonly, nonatomic) unsigned long long sessionState;
@property (readonly, copy, nonatomic) NSDate *workoutStartDate;
@property (readonly, nonatomic) NSDate *snapshotDate;
@property (readonly, nonatomic) NSError *sessionError;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithSessionIdentifier:(id)a0 activityType:(unsigned long long)a1 locationType:(long long)a2 swimmingLocationType:(long long)a3 sessionType:(long long)a4 isFirstPartyWorkout:(BOOL)a5 sessionState:(unsigned long long)a6 workoutStartDate:(id)a7 snapshotDate:(id)a8 sessionError:(id)a9;

@end
