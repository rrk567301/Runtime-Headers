@class HDCodableLocationSeries;

@interface HKWorkoutRoute : HKSeriesSample

@property (retain, nonatomic, setter=_setCodableWorkoutRoute:) HDCodableLocationSeries *_codableWorkoutRoute;

+ (char)_isConcreteObjectClass;
+ (id)_workoutRouteWithDevice:(id)a0 metadata:(id)a1;

- (void).cxx_destruct;
- (id)_validateSample;
- (char)_isSmoothed;
- (char)_requiresPrivateEntitlementForQueries;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x0; unsigned long long x1; })a0;
- (id)_valueDescription;

@end
