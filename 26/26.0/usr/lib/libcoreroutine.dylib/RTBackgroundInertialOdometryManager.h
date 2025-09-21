@class NSString, CLLocationManagerRoutine, RTBackgroundInertialOdometryStore;

@interface RTBackgroundInertialOdometryManager : RTService <RTPurgable, RTStoreManager>

@property (retain, nonatomic) CLLocationManagerRoutine *routineLocationManager;
@property (retain, nonatomic) RTBackgroundInertialOdometryStore *inertialOdometryStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)vendedClasses;
+ (long long)periodicPurgePolicy;

- (void)fetchEnumerableObjectsWithOptions:(id)a0 offset:(unsigned long long)a1 handler:(id /* block */)a2;
- (void)performPurgeOfType:(long long)a0 referenceDate:(id)a1 completion:(id /* block */)a2;
- (void)addBackgroundInertialOdometrySamples:(id)a0 handler:(id /* block */)a1;
- (id)init;
- (void)fetchBackgroundInertialOdometrySamplesWithOptions:(id)a0 handler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)_addBackgroundInertialOdometrySamples:(id)a0 handler:(id /* block */)a1;
- (void)_fetchBackgroundInertialOdometrySamplesWithOptions:(id)a0 handler:(id /* block */)a1;
- (id)initWithBackgroundInertialOdometryStore:(id)a0;

@end
