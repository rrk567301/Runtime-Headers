@class CKDRecordCacheTable;

@interface CKDRecordCache : CKSQLiteTableGroup {
    CKDRecordCacheTable *_rc;
}

+ (BOOL)rebootShouldClearData;
+ (id)recordCacheForContainer:(id)a0;
+ (id)recordCacheInDatabase:(id)a0 withContainer:(id)a1;
+ (id)recordCacheWithPath:(id)a0 forContainer:(id)a1;

- (id)forwardingTargetForSelector:(SEL)a0;
- (void)createTables;
- (void).cxx_destruct;

@end
