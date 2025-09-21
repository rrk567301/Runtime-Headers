@class NSUUID, NSString, HKDevice, NSArray, HDWorkoutBuilderStatisticsCalculators, NSDateInterval, NSDictionary, HKWorkoutConfiguration, HKSource, HKWorkout, HKQuantity;

@interface HDCreateWorkoutOperation : HDJournalableOperation

@property (readonly, copy, nonatomic) HKWorkoutConfiguration *workoutConfiguration;
@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, copy, nonatomic) NSDateInterval *dateInterval;
@property (readonly, copy, nonatomic) NSDictionary *metadata;
@property (readonly, copy, nonatomic) HKDevice *device;
@property (readonly, copy, nonatomic) HKSource *source;
@property (readonly, copy, nonatomic) NSString *sourceVersion;
@property (readonly, copy, nonatomic) NSArray *events;
@property (readonly, copy, nonatomic) NSArray *activities;
@property (readonly, copy, nonatomic) NSArray *zones;
@property (readonly, nonatomic) HDWorkoutBuilderStatisticsCalculators *statisticsCalculators;
@property (readonly, copy, nonatomic) NSArray *associatedSeries;
@property (readonly, nonatomic) unsigned long long goalType;
@property (readonly, copy, nonatomic) HKQuantity *goal;
@property (readonly, copy, nonatomic) NSArray *quantityTypesIncludedWhilePaused;
@property (readonly, nonatomic) HKWorkout *createdWorkout;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithWorkoutConfiguration:(id)a0 identifier:(id)a1 dateInterval:(id)a2 metadata:(id)a3 device:(id)a4 source:(id)a5 sourceVersion:(id)a6 events:(id)a7 activities:(id)a8 zones:(id)a9 statisticsCalculators:(id)a10 associatedSeries:(id)a11 goalType:(unsigned long long)a12 goal:(id)a13 quantityTypesIncludedWhilePaused:(id)a14;
- (BOOL)performWithProfile:(id)a0 transaction:(id)a1 error:(id *)a2;

@end
