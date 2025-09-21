@interface HDSyncStoreEntity : HDHealthEntity

+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (long long)protectionClass;
+ (id)databaseTable;
+ (id)activeStoresForMaxAnchorPruningInProfile:(id)a0 referenceDate:(id)a1 error:(id *)a2;
+ (id)recreateSyncStoreWithUUID:(id)a0 type:(long long)a1 profile:(id)a2 error:(id *)a3;
+ (id)existingSyncStoreEntityWithUUID:(id)a0 database:(id)a1 error:(id *)a2;
+ (id)syncStoreEntityWithUUID:(id)a0 type:(long long)a1 healthDatabase:(id)a2 error:(id *)a3;
+ (id)activeStoresForRestrictionPredictePruningInProfile:(id)a0 referenceDate:(id)a1 error:(id *)a2;
+ (id)syncStoreEntityWithUUID:(id)a0 type:(long long)a1 creationDate:(id)a2 healthDatabase:(id)a3 error:(id *)a4;
+ (id)allSyncStoreEntitiesOfType:(long long)a0 transaction:(id)a1 error:(id *)a2;
+ (id)existingSyncStoreEntityWithUUID:(id)a0 ofType:(long long)a1 database:(id)a2 error:(id *)a3;

- (long long)syncProvenance;

@end
