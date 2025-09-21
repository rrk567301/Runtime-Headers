@class NSString;

@interface RTUserCurationStore : RTStore <RTEnumerableStore>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPersistenceManager:(id)a0;
- (id)fetchRequestFromOptions:(id)a0 offset:(unsigned long long)a1 error:(id *)a2;
- (void)_fetchStoredUserCurationWithIdentifier:(id)a0 handler:(id /* block */)a1;
- (void)_fetchStoredUserCurationsWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)_purgeUserCurationsPredating:(id)a0 handler:(id /* block */)a1;
- (void)_storeUserCuration:(id)a0 handler:(id /* block */)a1;
- (void)_updateUserCuration:(id)a0 handler:(id /* block */)a1;
- (void)fetchStoredUserCurationWithIdentifier:(id)a0 handler:(id /* block */)a1;
- (void)fetchStoredUserCurationsWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)purgeUserCurationsPredating:(id)a0 handler:(id /* block */)a1;
- (void)storeUserCuration:(id)a0 handler:(id /* block */)a1;
- (void)updateUserCuration:(id)a0 handler:(id /* block */)a1;

@end
