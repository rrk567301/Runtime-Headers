@class CKDRecordCacheTable;

@interface CKDRecordCache : CKSQLiteTableGroup {
    CKDRecordCacheTable *_rc;
}

+ (unsigned long long)ttlDays;
+ (id)recordCacheForContainer:(id)a0;
+ (id)recordCacheInDatabase:(id)a0 withContainer:(id)a1;
+ (id)recordCacheWithPath:(id)a0 forContainer:(id)a1;

- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)createTables;

@end
