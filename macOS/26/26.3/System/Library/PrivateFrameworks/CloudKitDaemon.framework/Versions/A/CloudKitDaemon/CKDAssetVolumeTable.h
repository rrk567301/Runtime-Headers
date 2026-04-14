@class NSMutableDictionary;

@interface CKDAssetVolumeTable : CKSQLiteTable {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_volumeUUIDByVolumeIndex;
    NSMutableDictionary *_volumeIndexByVolumeUUID;
}

+ (Class)entryClass;
+ (id)dbProperties;

- (id)unmountedAssetVolumes;
- (id)wakeFromDatabase;
- (void).cxx_destruct;
- (void)_lockedSetVolumeIndex:(id)a0 forVolumeUUID:(id)a1;
- (id)initWithLogicalTableName:(id)a0;
- (id)volumeUUIDWithVolumeIndex:(id)a0;
- (id)volumeIndexForVolumeUUID:(id)a0;

@end
