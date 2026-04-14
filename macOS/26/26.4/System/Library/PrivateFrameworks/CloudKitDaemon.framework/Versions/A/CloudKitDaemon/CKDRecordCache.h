@class CKDRecordCacheTable;

@interface CKDRecordCache : CKSQLiteTableGroup {
    CKDRecordCacheTable *_rc;
}

+ (BOOL)rebootShouldClearData;
+ (id)recordCacheWithPath:(id)a0 forContainer:(id)a1;
+ (id)recordCacheForContainer:(id)a0;
+ (id)recordCacheInDatabase:(id)a0 withContainer:(id)a1;

- (void).cxx_destruct;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)createTables;

@end
