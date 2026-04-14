@protocol ABAccountCollection;

@interface ABPersistentStoreCoordinatorFactory : NSObject {
    id<ABAccountCollection> _repository;
    BOOL _readOnly;
}

- (void).cxx_destruct;
- (id)builderWithStoreDescription:(id)a0;
- (id)addStoresForAccounts:(id)a0 withStoreBuilder:(id)a1;
- (void)attachPersistantStoresToExistingPersistentStoreCoordinator:(id)a0;
- (id)initWithRepository:(id)a0 readOnly:(BOOL)a1;
- (id)makeCoordinatorForAllAvailableSources;
- (id)makeCoordinatorWithStoreAtDatabasePath:(id)a0 storeDescription:(id)a1;
- (id)pool_makeCoordinatorForAllAvailableSources;

@end
