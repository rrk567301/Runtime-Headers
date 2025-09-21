@class CKSQLiteKeyValueStore;

@interface CKSQLiteKeyValueTableGroup : CKSQLiteTableGroup {
    CKSQLiteKeyValueStore *_store;
}

+ (id)keyValueStoreInDatabase:(id)a0 create:(char)a1;

- (void).cxx_destruct;
- (id)createTables:(id *)a0;

@end
