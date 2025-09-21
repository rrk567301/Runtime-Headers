@interface CNPersistentStoreCoordinatorFactory : NSObject {
    char _readOnly;
}

- (id)addStoresForAccountCollection:(id)a0 withStoreBuilder:(id)a1;
- (id)builderWithStoreDescription:(id)a0;
- (id)initReadOnly:(char)a0;
- (id)makeCoordinatorForSourcesWithAccountCollection:(id)a0;
- (id)makeCoordinatorWithStoreAtURL:(id)a0 storeDescription:(id)a1;
- (id)pool_makeCoordinatorForAllSourcesWithAccountCollection:(id)a0;

@end
