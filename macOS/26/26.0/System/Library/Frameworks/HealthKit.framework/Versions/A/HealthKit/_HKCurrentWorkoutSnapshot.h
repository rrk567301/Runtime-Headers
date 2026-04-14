@class NSUUID, HKWorkoutConfiguration, NSString, NSError, NSDate;

@interface _HKCurrentWorkoutSnapshot : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *sessionIdentifier;
@property (readonly, nonatomic) HKWorkoutConfiguration *configuration;
@property (readonly, copy, nonatomic) NSString *applicationIdentifier;
@property (readonly, nonatomic) BOOL isFirstPartyWorkout;
@property (readonly, nonatomic) long long sessionState;
@property (readonly, nonatomic) long long internalState;
@property (readonly, nonatomic) BOOL isSessionActive;
@property (readonly, nonatomic) long long sessionType;
@property (readonly, nonatomic) NSError *sessionError;
@property (readonly, nonatomic) BOOL isBuilderPaused;
@property (readonly, nonatomic) NSDate *snapshotDate;
@property (readonly, nonatomic) double elapsedTime;
@property (readonly, copy, nonatomic) NSDate *builderStartDate;

- (long long)state;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_initWithSessionIdentifier:(id)a0 workoutConfiguration:(id)a1 sessionServerState:(long long)a2 isSessionActive:(BOOL)a3 sessionType:(long long)a4 sessionError:(id)a5 isBuilderPaused:(BOOL)a6 applicationIdentifier:(id)a7 elapsedTime:(double)a8 snapshotDate:(id)a9 builderStartDate:(id)a10;
- (double)elapsedTimeAtDate:(id)a0;

@end
