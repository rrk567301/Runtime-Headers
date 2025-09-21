@class NSCountedSet;
@protocol EFCancelable;

@interface _EDThreadMigrationState : NSObject {
    NSCountedSet *_objectIDsToMigrate;
    NSCountedSet *_recentlyMigratedObjectIDs;
    NSCountedSet *_recentlyDeletedObjectIDs;
}

@property (retain, nonatomic) id<EFCancelable> migrationCancelable;
@property (nonatomic) unsigned long long state;
@property (readonly, nonatomic) unsigned long long generation;
@property (readonly, nonatomic) unsigned long long unmigratedCount;
@property (readonly, nonatomic) char isEmpty;
@property (readonly, nonatomic) char isFullyMigrated;
@property (readonly, nonatomic) char isInProgress;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)cancel;
- (void)fail;
- (id)nextBatch;
- (void)_removeAllObjectIDs;
- (char)_verifyIsMigratingGeneration:(unsigned long long)a0 stateVerifier:(id /* block */)a1 logIdentifier:(id)a2 logAction:(id)a3 logCount:(unsigned long long)a4;
- (void)addDeletedObjectIDs:(id)a0;
- (void)addObjectIDs:(id)a0;
- (char)isRecentlyMigrated:(id)a0;
- (void)removeDeletedObjectIDs:(id)a0;
- (void)removeMigratedObjectIDs:(id)a0;
- (void)removeObjectIDs:(id)a0;
- (char)verifyIsMigratingGeneration:(unsigned long long)a0 andIsInState:(unsigned long long)a1 logIdentifier:(id)a2 logAction:(id)a3 logCount:(unsigned long long)a4;
- (char)verifyIsMigratingGeneration:(unsigned long long)a0 andIsInState:(unsigned long long)a1 orState:(unsigned long long)a2 logIdentifier:(id)a3 logAction:(id)a4 logCount:(unsigned long long)a5;

@end
