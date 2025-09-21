@interface HDSyncAnchorEntity : HDHealthEntity

+ (long long)protectionClass;
+ (id)databaseTable;
+ (char)updateReceivedVersion:(int)a0 entityIdentifier:(id)a1 store:(id)a2 transaction:(id)a3 error:(id *)a4;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (char)enumerateSyncAnchorsForStoreID:(long long)a0 database:(id)a1 error:(id *)a2 handler:(id /* block */)a3;
+ (id)frozenAnchorMapPerStoreInProfile:(id)a0 error:(id *)a1;
+ (char)getMinimumSyncAnchorsOfType:(long long)a0 anchorMap:(id)a1 updatedSince:(id)a2 profile:(id)a3 error:(id *)a4;
+ (char)getRequestedVersion:(id *)a0 entityIdentifier:(id)a1 store:(id)a2 transaction:(id)a3 error:(id *)a4;
+ (char)getSyncAnchorsOfType:(long long)a0 anchorMap:(id)a1 store:(id)a2 profile:(id)a3 error:(id *)a4;
+ (id)latestFrozenAnchorUpdatePerStoreInProfile:(id)a0 error:(id *)a1;
+ (char)prepareSyncAnchorsForEntityIdentifiers:(id)a0 store:(id)a1 profile:(id)a2 error:(id *)a3;
+ (char)resetAllSyncAnchorsOfType:(long long)a0 syncProvenances:(id)a1 transaction:(id)a2 error:(id *)a3;
+ (char)resetNextAnchorsIfNeededForStore:(id)a0 profile:(id)a1 minimumElapsedTime:(double)a2 error:(id *)a3;
+ (char)resetSyncAnchorsOfType:(long long)a0 store:(id)a1 profile:(id)a2 error:(id *)a3;
+ (char)resetSyncStore:(id)a0 profile:(id)a1 error:(id *)a2;
+ (char)setAcknowledgedAnchorsWithMap:(id)a0 store:(id)a1 resetNext:(char)a2 resetInvalid:(char)a3 profile:(id)a4 error:(id *)a5;
+ (long long)syncAnchorOfType:(long long)a0 entityIdentifier:(id)a1 store:(id)a2 profile:(id)a3 error:(id *)a4;
+ (id)uniquedColumns;
+ (char)updateLocalVersion:(int)a0 entityIdentifier:(id)a1 store:(id)a2 transaction:(id)a3 error:(id *)a4;
+ (char)updateRequestedVersion:(int)a0 entityIdentifier:(id)a1 store:(id)a2 transaction:(id)a3 error:(id *)a4;
+ (char)updateSyncAnchor:(long long)a0 type:(long long)a1 entityIdentifier:(id)a2 store:(id)a3 updatePolicy:(long long)a4 profile:(id)a5 error:(id *)a6;
+ (char)updateSyncAnchor:(long long)a0 type:(long long)a1 updateDate:(id)a2 entityIdentifier:(id)a3 store:(id)a4 updatePolicy:(long long)a5 profile:(id)a6 error:(id *)a7;
+ (char)updateSyncAnchorsWithMap:(id)a0 type:(long long)a1 store:(id)a2 updatePolicy:(long long)a3 resetInvalid:(char)a4 profile:(id)a5 error:(id *)a6;
+ (char)updateSyncAnchorsWithMap:(id)a0 type:(long long)a1 updateDate:(id)a2 store:(id)a3 updatePolicy:(long long)a4 resetInvalid:(char)a5 profile:(id)a6 error:(id *)a7;

@end
