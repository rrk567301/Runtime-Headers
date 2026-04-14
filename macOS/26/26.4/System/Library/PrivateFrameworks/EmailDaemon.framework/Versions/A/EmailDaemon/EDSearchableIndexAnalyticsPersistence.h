@interface EDSearchableIndexAnalyticsPersistence : NSObject <EDPersistenceDatabaseSchemaProvider> {
    void /* unknown type, empty encoding */ database;
}

+ (id)tablesAndForeignKeysToResolve:(id *)a0 associationsToResolve:(id *)a1;

- (id)initWithDatabase:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)didAddMessages:(id)a0;
- (void)didDonateItems:(id)a0;
- (void)batchDidEnd:(long long)a0 error:(id)a1;
- (long long)batchDidStart:(id)a0;
- (void)didDropIndex;
- (void)didEvictItems:(id)a0;
- (void)didFailToDonateItems:(id)a0;
- (void)didUpdateDataForMessages:(id)a0;
- (void)didUpdateMessagesAndRecordDonations:(id)a0;
- (void)sendAnalyticsEvents;
- (id)willEnqueueItems:(id)a0 fromBacklog:(BOOL)a1;

@end
