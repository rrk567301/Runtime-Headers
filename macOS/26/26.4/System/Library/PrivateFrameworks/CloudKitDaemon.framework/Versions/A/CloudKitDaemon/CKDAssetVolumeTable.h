@class NSMutableDictionary;

@interface CKDAssetVolumeTable : CKSQLiteTable {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_volumeUUIDByVolumeIndex;
    NSMutableDictionary *_volumeIndexByVolumeUUID;
}

+ (id)dbProperties;
+ (Class)entryClass;

- (id)unmountedAssetVolumes;
- (id)initWithLogicalTableName:(id)a0;
- (void)_lockedSetVolumeIndex:(id)a0 forVolumeUUID:(id)a1;
- (id)volumeIndexForVolumeUUID:(id)a0;
- (void).cxx_destruct;
- (id)wakeFromDatabase;
- (id)volumeUUIDWithVolumeIndex:(id)a0;

@end
