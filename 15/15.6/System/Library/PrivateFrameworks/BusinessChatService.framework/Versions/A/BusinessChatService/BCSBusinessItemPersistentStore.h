@interface BCSBusinessItemPersistentStore : BCSPersistentStore

+ (const char *)debugQueueName;

- (id)databasePath;
- (const char *)schema;
- (long long)schemaVersion;
- (id)_databasePath;
- (char)_executeDeleteBusinessItemSQLQuery:(const char *)a0;
- (id)_executeFetchPersistentBusinessItemObjectSQLQuery:(const char *)a0;
- (char)_insertBusinessItem:(id)a0 withTTL:(double)a1;
- (char)_insertOrReplaceBusinessItem:(id)a0 withTTL:(double)a1;
- (char)_updateToLastRetrievedDate:(id)a0 forBusinessItem:(id)a1;
- (char)deleteBusinessItem:(id)a0;
- (char)deleteBusinessItemWithBizID:(id)a0;
- (char)deleteBusinessItemWithPhoneNumber:(id)a0;
- (id)fetchPersistentBusinessItemObjectWithBizID:(id)a0;
- (id)fetchPersistentBusinessItemObjectWithPhoneNumber:(id)a0;
- (char)insertOrReplaceBusinessItem:(id)a0 withTTL:(double)a1;
- (char)updateLastRetrievedDateForBusinessItem:(id)a0;
- (char)updateTTL:(double)a0 forBusinessItem:(id)a1;

@end
