@class CKSQLiteKeyValueStore;

@interface CKSQLiteKeyValueTableGroup : CKSQLiteSharedTableGroup {
    CKSQLiteKeyValueStore *_store;
}

+ (id)keyValueStoreInDatabase:(id)a0;

- (void).cxx_destruct;
- (id)createTables:(id *)a0;

@end
