@class NSDictionary, NSMutableDictionary, NSString;

@interface CalAbstractCDChangeTracker : NSObject {
    NSDictionary *alarmTypes;
    NSDictionary *directNames;
    NSMutableDictionary *allDeletes;
    NSMutableDictionary *allMods;
    NSString *DeleteKey;
    NSString *ModKey;
    int _syncMode;
}

- (void)dealloc;
- (id)init;
- (void)removeDeleted:(id)a0 fromMods:(id)a1;
- (BOOL)getAllChanges;
- (void)storeChanges:(id)a0;
- (void)clearAllStoredChanges;
- (void)clearProcessedChanges;
- (BOOL)handleContextSave:(id)a0 adds:(id)a1 mods:(id)a2 deletes:(id)a3;
- (id)substituteOtherObjectFor:(id)a0;
- (id)syncSchemaEntityNameOf:(id)a0;
- (void)processChangeObjects:(id)a0 into:(id)a1 ignoreOmitSyncRecord:(BOOL)a2;
- (void)makePListCompliant:(id)a0;
- (void)processChangeObjects:(id)a0 into:(id)a1;
- (id)changesFromNotification:(id)a0 adds:(id)a1 mods:(id)a2 deletes:(id)a3;
- (id)modsForEntity:(id)a0;
- (id)deletesForEntity:(id)a0;
- (id)alarmSyncName:(id)a0;
- (id)publicationSyncName:(id)a0;
- (void)storeMods:(id)a0 andDeletes:(id)a1;
- (void)getModifiedUIDsForEntity:(id)a0 modified:(id *)a1 deleted:(id *)a2;
- (BOOL)beginningSyncOfType:(int)a0;
- (void)endedSyncWith:(BOOL)a0;

@end
