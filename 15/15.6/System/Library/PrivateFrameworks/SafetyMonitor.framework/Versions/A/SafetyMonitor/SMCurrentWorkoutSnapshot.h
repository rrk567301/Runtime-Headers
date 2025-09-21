@class NSUUID;

@interface SMCurrentWorkoutSnapshot : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *sessionIdentifier;
@property (readonly, nonatomic) unsigned long long activityType;
@property (readonly, nonatomic) char isWorkoutOngoing;
@property (readonly, nonatomic) char isFirstPartyWorkout;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSessionIdentifier:(id)a0 activityType:(unsigned long long)a1 isWorkoutOngoing:(char)a2 isFirstPartyWorkout:(char)a3;

@end
