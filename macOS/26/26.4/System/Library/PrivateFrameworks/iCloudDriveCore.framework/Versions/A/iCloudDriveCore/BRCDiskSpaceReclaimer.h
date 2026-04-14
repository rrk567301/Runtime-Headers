@class BRCAccountSession, NSObject;
@protocol OS_dispatch_queue;

@interface BRCDiskSpaceReclaimer : NSObject {
    BRCAccountSession *_session;
    BOOL _isClosed;
    BOOL _computingPurgable;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (id)initWithAccountSession:(id)a0;
- (void)resume;
- (long long)_dbAutovacuumableSpaceInBytes:(id)a0;
- (unsigned long long)totalSize;
- (long long)_garbageCollectGroupContainersStageOfType:(short)a0 maxAgeDelta:(long long)a1;
- (long long)_garbageCollectGroupContainerStage;
- (long long)_fullVacuumIfPossible:(id)a0;
- (long long)_computeCiconiaSizeInBytes:(BOOL)a0;
- (long long)_downloadGroupContainerStageSize;
- (void).cxx_destruct;
- (unsigned long long)nonPurgeableSizeWithPurgeableSize:(unsigned long long)a0;
- (void)_cleanFPCreationItemIdentifier:(id)a0;
- (long long)periodicReclaimSpace;
- (long long)_doIncrementalVacuum:(id)a0 amount:(long long)a1;
- (void)computePurgeableSpaceWithReply:(id /* block */)a0;
- (void)close;
- (long long)_dbSizeInBytes:(id)a0;

@end
