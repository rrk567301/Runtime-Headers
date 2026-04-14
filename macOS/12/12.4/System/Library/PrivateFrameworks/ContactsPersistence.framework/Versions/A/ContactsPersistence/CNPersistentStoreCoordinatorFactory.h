@interface CNPersistentStoreCoordinatorFactory : NSObject {
    BOOL _readOnly;
}

- (id)initReadOnly:(BOOL)a0;
- (id)makeCoordinatorForSourcesWithAccountCollection:(id)a0;
- (id)pool_makeCoordinatorForAllSourcesWithAccountCollection:(id)a0;
- (id)builderWithStoreDescription:(id)a0;
- (id)addStoresForAccountCollection:(id)a0 withStoreBuilder:(id)a1;
- (id)makeCoordinatorWithStoreAtURL:(id)a0 storeDescription:(id)a1;

@end
