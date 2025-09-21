@class NSString;

@interface RTBackgroundInertialOdometryStore : RTStore <RTEnumerableStore>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPersistenceManager:(id)a0;
- (id)fetchRequestFromOptions:(id)a0 offset:(unsigned long long)a1 error:(id *)a2;
- (void)_fetchStoredBackgroundInertialOdometrySamplesWithContext:(id)a0 handler:(id /* block */)a1;
- (void)_fetchStoredBackgroundInertialOdometrySamplesWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)_purgeBackgroundInertialOdometrySamplesPredating:(id)a0 handler:(id /* block */)a1;
- (void)_storeBackgroundInertialOdometrySamples:(id)a0 handler:(id /* block */)a1;
- (id)fetchRequestFromStoredBackgroundInertialOdometrySampleOptions:(id)a0;
- (void)fetchStoredBackgroundInertialOdometrySamplesWithContext:(id)a0 handler:(id /* block */)a1;
- (void)fetchStoredBackgroundInertialOdometrySamplesWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)purgeBackgroundInertialOdometrySamplesPredating:(id)a0 handler:(id /* block */)a1;
- (void)storeBackgroundInertialOdometrySamples:(id)a0 handler:(id /* block */)a1;

@end
