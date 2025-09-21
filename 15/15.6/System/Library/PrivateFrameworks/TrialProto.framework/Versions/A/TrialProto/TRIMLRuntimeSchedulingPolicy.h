@class TRIPBTimestamp;

@interface TRIMLRuntimeSchedulingPolicy : TRIPBMessage

@property (nonatomic) unsigned int maxEvaluations;
@property (nonatomic) char hasMaxEvaluations;
@property (nonatomic) unsigned int periodicIntervalSeconds;
@property (nonatomic) char hasPeriodicIntervalSeconds;
@property (retain, nonatomic) TRIPBTimestamp *startsAfter;
@property (nonatomic) char hasStartsAfter;
@property (retain, nonatomic) TRIPBTimestamp *endsAt;
@property (nonatomic) char hasEndsAt;
@property (nonatomic) int qos;
@property (nonatomic) char hasQos;

+ (id)descriptor;

@end
