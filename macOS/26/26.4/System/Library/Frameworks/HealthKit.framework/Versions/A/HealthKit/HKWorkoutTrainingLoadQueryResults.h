@class NSDictionary, HKWorkoutTrainingLoad;

@interface HKWorkoutTrainingLoadQueryResults : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDictionary *trainingloadByActivityType;
@property (readonly, copy) HKWorkoutTrainingLoad *totalTrainingLoad;

- (id)activityTypes;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithTotalTrainingLoad:(id)a0 trainingloadByActivityType:(id)a1;
- (id)trainingLoadForActivityType:(unsigned long long)a0;

@end
