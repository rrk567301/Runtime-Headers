@class CKDRecordCacheTable;

@interface CKDRecordCache : CKSQLiteTableGroup {
    CKDRecordCacheTable *_rc;
}

+ (id)recordCacheInDatabase:(id)a0 withContainer:(id)a1;
+ (BOOL)rebootShouldClearData;
+ (id)recordCacheWithPath:(id)a0 forContainer:(id)a1;
+ (id)recordCacheForContainer:(id)a0;

- (id)forwardingTargetForSelector:(SEL)a0;
- (void)createTables;
- (void).cxx_destruct;

@end
