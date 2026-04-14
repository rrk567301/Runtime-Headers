@class NUStoragePoolStats, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface NUPurgeableStoragePool : NSObject {
    NUStoragePoolStats *_stats;
    unsigned long long _nonPurgeableActivityCounter;
    BOOL _migrationTimerScheduled;
    NSMutableArray *_sharedStoragesToBeReclaimedList;
}

@property (readonly, nonatomic) long long nonPurgeableLimit;
@property (readonly, nonatomic) long long purgeableLimit;
@property (readonly, nonatomic) double migrationDelay;
@property (readonly, nonatomic) NSMutableArray *volatileList;
@property (readonly, nonatomic) NSMutableArray *nonPurgeableList;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *stateQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *migrationQueue;
@property (readonly, copy, nonatomic) NUStoragePoolStats *stats;
@property (readonly, nonatomic) Class storageClass;

+ (void)initialize;
+ (void)reapAllPurged;
+ (void)purge:(BOOL)a0;
+ (void)reapAllVolatile;

- (void)_returnStorage:(id)a0;
- (id)debugDescription;
- (void)_migrateStorageToPurgeable:(id)a0;
- (id)reapPurged;
- (void)purge:(BOOL)a0;
- (id)reapVolatile;
- (void)_returnVolatileStorage:(id)a0;
- (void)_migrationTimer:(unsigned long long)a0;
- (void)_reapVolatile;
- (void)_returnPurgedStorage:(id)a0;
- (void)_returnNonPurgeableStorage:(id)a0;
- (void)migrateAllNonPurgeableStorage;
- (void)_reapPurged;
- (void)_migrateAllNonPurgeableStorageIfNoRecentActivity:(unsigned long long)a0;
- (void)_enforcePurgableLimit;
- (id)initWithStorageClass:(Class)a0;
- (id)_popOldestNonPurgeableStorage;
- (id)newStorageWithSize:(struct { long long x0; long long x1; })a0 format:(id)a1;
- (void).cxx_destruct;
- (id)newStorageWithSize:(struct { long long x0; long long x1; })a0 format:(id)a1 exactMatch:(BOOL)a2;
- (void)_scheduleMigrationTimer;
- (id)_storageFromPoolWithSize:(struct { long long x0; long long x1; })a0 format:(id)a1 exactMatch:(BOOL)a2;
- (id)init;
- (void)returnStorage:(id)a0;
- (id)_allocateStorageWithSize:(struct { long long x0; long long x1; })a0 format:(id)a1;
- (void)_migrateOldestNonPurgeableStorageToPurgeable;
- (id)newStorageWithMinimumSize:(struct { long long x0; long long x1; })a0 format:(id)a1;
- (void)_reclaimSharedStorages;
- (void)_resetNonPurgeableStorageMigrationTimer;
- (void)waitForMigration;

@end
