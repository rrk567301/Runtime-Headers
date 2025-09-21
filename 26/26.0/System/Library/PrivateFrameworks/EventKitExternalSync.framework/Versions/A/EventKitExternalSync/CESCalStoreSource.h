@class NSArray, NSDictionary, EKEventStore, NSMutableDictionary, NSMutableArray, ISyncSessionDriver;

@interface CESCalStoreSource : NSObject

@property (retain) EKEventStore *eventStore;
@property (retain) NSDictionary *syncEntityMappings;
@property (retain) NSArray *ekStore_insertions;
@property (retain) NSArray *ekStore_updates;
@property (retain) NSArray *ekStore_deletions;
@property BOOL fullSyncRequired;
@property BOOL hasChanges;
@property long long latestToken;
@property (retain) NSMutableArray *deferredDeletes;
@property (retain) NSMutableDictionary *objectWrapperCache;
@property (retain) NSMutableDictionary *brandNewIDMappings;
@property (retain) NSMutableDictionary *acceptanceDepending;
@property BOOL shouldSyncAgain;
@property (retain) ISyncSessionDriver *sessionDriver;

- (id)entityNamed:(id)a0;
- (id)init;
- (id)initWithEventStore:(id)a0;
- (void).cxx_destruct;
- (id)changedObjectIDsForEntityName:(id)a0;
- (void)clearForUnitTests;
- (id)deletedUIDsForEntityName:(id)a0;
- (id)entityWithFullName:(id)a0;
- (BOOL)finishSync;
- (void)processDeferredDeletes;
- (void)recordClientID:(id)a0 forSyncID:(id)a1;
- (void)releaseMemoryFromPushing;
- (BOOL)shouldScheduleSyncAgain;

@end
