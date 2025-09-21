@class HKQuantity;

@interface STStartWorkoutRequest : AFSiriRequest {
    long long _activityType;
    long long _locationType;
    long long _goalType;
    long long _userMode;
    HKQuantity *_goal;
    char _isOpenGoal;
    char _skipActivitySetup;
}

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)activityType;
- (long long)locationType;
- (id)createResponse;
- (long long)userMode;
- (char)isOpenGoal;
- (char)skipActivitySetup;
- (id)workoutGoal;
- (long long)goalType;
- (id)_initWithType:(long long)a0 location:(long long)a1 goal:(id)a2 goalType:(long long)a3 userMode:(long long)a4 isOpenGoal:(char)a5 skipActivitySetup:(char)a6;

@end
