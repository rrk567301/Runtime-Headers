@class NSString;

@interface AFSiriWorkoutReminder : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *predictionIdentifier;
@property (readonly, nonatomic) long long workoutType;
@property (readonly, nonatomic) long long predictionType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPredictionIdentifier:(id)a0 predictionType:(long long)a1 workoutType:(long long)a2;

@end
