@class NSDictionary, NSSet, NSMutableDictionary;

@interface HKWorkoutBuilderStatistics : NSObject <NSSecureCoding> {
    NSMutableDictionary *_workoutStatistics;
    NSMutableDictionary *_activitiesStatistics;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDictionary *workoutStatistics;
@property (readonly, copy, nonatomic) NSDictionary *activitiesStatistics;
@property (readonly, nonatomic) char isEmpty;
@property (readonly, copy, nonatomic) NSSet *allTypes;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)addActivityStatistics:(id)a0 forType:(id)a1 activityUUID:(id)a2;
- (void)addWorkoutStatistics:(id)a0 forType:(id)a1;

@end
