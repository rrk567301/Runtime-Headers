@class NSMutableDictionary, KHDBPreparedSql, NSLock, KHDBCharIndexEntity;

@interface KHDBUniqueStringEntity : KHDBEntity {
    KHDBPreparedSql *_createStringSql;
    NSLock *_stringCacheLock;
    NSMutableDictionary *_stringsById;
    NSMutableDictionary *_stringIdByString;
}

@property (retain, nonatomic) KHDBCharIndexEntity *charIndexEntity;
@property (readonly, nonatomic) BOOL allStringsCached;

- (void)dealloc;
- (id)initWithTableName:(id)a0 forDatabaseManager:(id)a1 forDatabase:(id)a2;
- (void)waitForOutstandingWrites;
- (void)saveNextModelId;
- (BOOL)createTableIfMissing;
- (void)copyRecordsToEntity:(id)a0 withCanceler:(id)a1 where:(id)a2 args:(id)a3;
- (id)initWithTableName:(id)a0 charIndexTableName:(id)a1 forDatabaseManager:(id)a2 forDatabase:(id)a3;
- (id)searchStringForString:(id)a0;
- (void)saveIndexes;
- (id)cacheString:(id)a0 byId:(id)a1;
- (void)uncacheString:(id)a0 byId:(id)a1;
- (id)cachedStringForId:(id)a0;
- (id)cachedStringIdForString:(id)a0;
- (void)cacheAllStrings;
- (void)uncacheAllStrings;
- (void)uncacheStringsForIds:(id)a0;
- (void)deleteStringsForIds:(id)a0;
- (id)createStringSql;
- (void)addCharIndexForString:(id)a0 withStringId:(id)a1;
- (id)addStringProperty:(id)a0;
- (id)initialStringProperty:(id)a0;
- (void)addStringProperties:(id)a0;
- (void)reindexStringsForStringIds:(id)a0;
- (id)stringForStringId:(id)a0;
- (id)stringIdForString:(id)a0;
- (void)cacheStringsForStringIds:(id)a0;
- (void)cacheStringsForStrings:(id)a0;
- (id)possibleStringIdsForString:(id)a0 usingCharIndexes:(int)a1;
- (id)possibleStringIdsForString:(id)a0;

@end
