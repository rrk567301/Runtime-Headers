@class CKDZoneIDCacheTable, CKContainerID, CKDDeviceCapabilityShareIDSQLTableGroup, CKDShareIDCacheTable, CKDZoneShareCacheTable, CKDShareIDCacheRecordTable;

@interface CKDShareIDSQLCache : NSObject

@property (readonly, nonatomic) CKContainerID *containerID;
@property (readonly, nonatomic) CKDDeviceCapabilityShareIDSQLTableGroup *tableGroup;
@property (readonly, nonatomic) CKDZoneIDCacheTable *zoneIDTable;
@property (readonly, nonatomic) CKDShareIDCacheTable *shareIDTable;
@property (readonly, nonatomic) CKDZoneShareCacheTable *zoneShareTable;
@property (readonly, nonatomic) CKDShareIDCacheRecordTable *recordTable;

+ (double)expirationTime;

- (void).cxx_destruct;
- (id)initWithContainer:(id)a0 error:(id *)a1;
- (void)removeZoneWithID:(id)a0;
- (void)addZoneShareID:(id)a0;
- (void)removeRecordID:(id)a0;
- (void)addHierarchicalShareID:(id)a0 forRootRecordID:(id)a1;
- (void)addOrUpdateRecordID:(id)a0 withParentID:(id)a1;
- (void)removeShareID:(id)a0;
- (BOOL)removeShareWithShareEntry:(id)a0 error:(id *)a1;
- (void)removeZoneShareForZoneID:(id)a0;
- (id)shareIDForRecordID:(id)a0;
- (id)shareIDsForZoneID:(id)a0;
- (id)zoneShareIDForZoneID:(id)a0;

@end
