@interface STWorkoutSetStateRequest : AFSiriRequest {
    long long _workoutState;
}

+ (char)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)createResponse;
- (long long)workoutState;
- (id)_initWithState:(long long)a0;

@end
