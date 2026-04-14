@class HDCodableLocationSeries;

@interface HKWorkoutRoute : HKSeriesSample

@property (retain, nonatomic, setter=_setCodableWorkoutRoute:) HDCodableLocationSeries *_codableWorkoutRoute;

+ (BOOL)_isConcreteObjectClass;
+ (id)_workoutRouteWithDevice:(id)a0 metadata:(id)a1;

- (void).cxx_destruct;
- (id)_valueDescription;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x0; unsigned int x1; })a0;
- (id)_validateSample;
- (BOOL)_requiresPrivateEntitlementForQueries;
- (BOOL)_isSmoothed;

@end
