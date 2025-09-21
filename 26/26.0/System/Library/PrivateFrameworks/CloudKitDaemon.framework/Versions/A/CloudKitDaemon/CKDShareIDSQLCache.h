@class CKDZoneIDCacheTable, CKContainerID, CKDShareIDCacheTable, CKDZoneShareCacheTable, CKDShareIDCacheRecordTable;

@interface CKDShareIDSQLCache : CKSQLiteContainerAttributedTableGroup

@property (retain, nonatomic) CKContainerID *containerID;
@property (readonly, nonatomic) CKDZoneIDCacheTable *zoneIDTable;
@property (readonly, nonatomic) CKDShareIDCacheTable *shareIDTable;
@property (readonly, nonatomic) CKDZoneShareCacheTable *zoneShareTable;
@property (readonly, nonatomic) CKDShareIDCacheRecordTable *recordTable;

+ (double)expirationTime;
+ (id)_groupNameForContainer:(id)a0;
+ (id)shareIDSQLCacheForContainer:(id)a0 error:(id *)a1;
+ (id)shareIDSQLCacheForContainerID:(id)a0 dbPath:(id)a1 registryDatabase:(id)a2 groupName:(id)a3 error:(id *)a4;
+ (id)shareIDSQLCacheForTestingWithIdentifier:(id)a0 error:(id *)a1;

- (void)removeZoneWithID:(id)a0;
- (void)createTables;
- (void).cxx_destruct;
- (void)removeRecordID:(id)a0;
- (void)addZoneShareID:(id)a0;
- (void)addHierarchicalShareID:(id)a0 forRootRecordID:(id)a1;
- (void)addOrUpdateRecordID:(id)a0 withParentID:(id)a1;
- (void)removeShareID:(id)a0;
- (BOOL)removeShareWithShareEntry:(id)a0 error:(id *)a1;
- (void)removeZoneShareForZoneID:(id)a0;
- (id)shareIDForRecordID:(id)a0;
- (id)shareIDsForZoneID:(id)a0;
- (id)zoneShareIDForZoneID:(id)a0;

@end
