@class HKQuantity;

@interface STStartWorkoutRequest : AFSiriRequest {
    long long _activityType;
    long long _locationType;
    long long _goalType;
    long long _userMode;
    HKQuantity *_goal;
    BOOL _isOpenGoal;
    BOOL _skipActivitySetup;
}

+ (BOOL)supportsSecureCoding;

- (long long)locationType;
- (long long)activityType;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)userMode;
- (void).cxx_destruct;
- (id)createResponse;
- (BOOL)isOpenGoal;
- (BOOL)skipActivitySetup;
- (id)workoutGoal;
- (long long)goalType;
- (id)_initWithType:(long long)a0 location:(long long)a1 goal:(id)a2 goalType:(long long)a3 userMode:(long long)a4 isOpenGoal:(BOOL)a5 skipActivitySetup:(BOOL)a6;

@end
