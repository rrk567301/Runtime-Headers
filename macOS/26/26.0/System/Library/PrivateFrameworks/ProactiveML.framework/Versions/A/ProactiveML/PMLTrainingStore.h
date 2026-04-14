@class NSString, _PASSqliteDatabase;

@interface PMLTrainingStore : NSObject {
    NSString *_dbPath;
    _PASSqliteDatabase *_db;
    id _lockStateNotificationToken;
    BOOL _allowSkipSchema;
    unsigned long long _maxTimesAccessed;
}

+ (id)getSchema:(unsigned long long *)a0;
+ (long long)_migrate:(id)a0 forStore:(id)a1;
+ (BOOL)_runQueries:(id)a0 andUpdateVersionTo:(unsigned int)a1 inTransactionOnDb:(id)a2 forStore:(id)a3;
+ (id)_sessionDataToBatchWithNumberOfColumns:(unsigned long long)a0 rowsData:(id)a1 labelsData:(id)a2;
+ (id)inMemoryStoreForTesting;
+ (double)lastUsedTimestampLimit;
+ (long long)migrate:(id)a0 to:(id)a1 forStore:(id)a2;
+ (void)setLastUsedTimestampLimit:(double)a0;

- (id)initWithPath:(id)a0;
- (long long)_openDbIfUnlocked;
- (void)loadSessionsForModel:(id)a0 privacyBudgetRefreshPeriod:(double)a1 labels:(id)a2 batchSize:(unsigned long long)a3 block:(id /* block */)a4;
- (void)vacuumDbWithDeferralBlock:(id /* block */)a0;
- (void)dealloc;
- (BOOL)createSnapshot:(id)a0;
- (unsigned long long)numberOfRowsInTable:(id)a0;
- (BOOL)_truncateDbIfCorrupted;
- (id)getSchema:(unsigned long long *)a0;
- (void)setMaxTimesAccessed:(unsigned long long)a0;
- (void)loadSessionsForModel:(id)a0 excludeItemIdsUsedWithin:(double)a1 limit:(unsigned long long)a2 onlyAppleInternal:(BOOL)a3 positiveLabel:(unsigned long long)a4 skew:(double)a5 block:(id /* block */)a6;
- (void)updateLastTrainingFeaturizationForModel:(id)a0 andData:(id)a1;
- (void)convertToBagOfIdsVectorForModel:(id)a0;
- (void)_loadDataFromLabelAndTuples:(id)a0 model:(id)a1 numberOfRows:(unsigned long long)a2 numberOfColumns:(unsigned long long)a3 lastUsedMax:(double)a4 block:(id /* block */)a5;
- (id)sessionStatsForSessionDescriptor:(id)a0;
- (void)deleteSessionsWithBundleId:(id)a0;
- (void)loadDataForModel:(id)a0 excludeItemIdsUsedWithin:(double)a1 limit:(unsigned long long)a2 onlyAppleInternal:(BOOL)a3 positiveLabel:(unsigned long long)a4 skew:(double)a5 block:(id /* block */)a6;
- (void)_unregisterUnlockHandler;
- (id)init;
- (void)_loadDataForModel:(id)a0 privacyBudgetRefreshPeriod:(double)a1 labelAndStartRows:(id)a2 batchSize:(unsigned long long)a3 supportPerLabel:(unsigned long long)a4 block:(id /* block */)a5;
- (void)storeSession:(id)a0 label:(long long)a1 model:(id)a2;
- (void)limitSessionsByMaxTimesAccessed;
- (void)_registerUnlockHandler;
- (BOOL)isDbOpen;
- (void)closeDbForTesting;
- (unsigned long long)sessionDescriptorIdFor:(id)a0;
- (long long)_unsafeOpenDbIfUnlocked;
- (id)initWithPath:(id)a0 allowSkipSchema:(BOOL)a1;
- (void)loadSessionsForModel:(id)a0 excludeItemIdsUsedWithin:(double)a1 limit:(unsigned long long)a2 onlyAppleInternal:(BOOL)a3 block:(id /* block */)a4;
- (void)deleteSessionsWithBundleId:(id)a0 domainId:(id)a1;
- (void)_loadDataForModel:(id)a0 positiveRowId:(unsigned long long)a1 negativeRowId:(unsigned long long)a2 excludeItemIdsUsedWithin:(double)a3 limit:(unsigned long long)a4 onlyAppleInternal:(BOOL)a5 positiveLabel:(unsigned long long)a6 skew:(double)a7 block:(id /* block */)a8;
- (id)sessionStats;
- (id)lastTrainingFeaturizationForModelName:(id)a0 andLocale:(id)a1;
- (void)loadDataForModel:(id)a0 privacyBudgetRefreshPeriod:(double)a1 labels:(id)a2 batchSize:(unsigned long long)a3 block:(id /* block */)a4;
- (void)storeSession:(id)a0 label:(long long)a1 model:(id)a2 bundleId:(id)a3 domainId:(id)a4 itemIds:(id)a5 isAppleInternal:(BOOL)a6;
- (void)limitSessionsWithSessionDescriptor:(id)a0 withLabel:(id)a1 limit:(unsigned long long)a2;
- (void)_loadBatchForModel:(id)a0 privacyBudgetRefreshPeriod:(double)a1 labels:(id)a2 batchSize:(unsigned long long)a3 block:(id /* block */)a4;
- (void)limitSessionsByLastUsedTTL:(double)a0;
- (void)deleteSessionsWithBundleId:(id)a0 itemId:(id)a1;
- (void)enumerateSessionDescriptorsUsingBlock:(id /* block */)a0;
- (id)sessionDimensionsForModel:(id)a0 startingRowId:(unsigned long long)a1 onlyAppleInternal:(BOOL)a2 labelFilter:(id)a3;
- (void)loadSessionsForModel:(id)a0 excludeItemIdsUsedWithin:(double)a1 withSkew:(double)a2 andLimit:(int)a3 block:(id /* block */)a4;
- (void)logDbNotOpenEvent;
- (id)dbForTesting;
- (long long)migrateTo:(id)a0;
- (void).cxx_destruct;
- (void)limitSessionsForEachLabelWithSessionDescriptor:(id)a0 totalSessionLimit:(unsigned long long)a1;

@end
