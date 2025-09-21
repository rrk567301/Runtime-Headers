@class SAHLWorkoutType, NSString, SAHLWorkoutGoal;

@interface SAHLStartWorkout : SADomainCommand

@property (nonatomic) char isOpenGoal;
@property (nonatomic) char skipActivitySetup;
@property (retain, nonatomic) SAHLWorkoutGoal *workoutGoal;
@property (retain, nonatomic) SAHLWorkoutType *workoutType;
@property (copy, nonatomic) NSString *workoutUserMode;

+ (id)startWorkout;
+ (id)startWorkoutWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end
