@class CKContainerID;

@interface CKDDeviceCapabilityUsageSQLTable : CKSQLiteCacheTable

@property (retain, nonatomic) CKContainerID *containerID;

+ (Class)entryClass;
+ (id)dbProperties;

- (id)initWithContainerID:(id)a0;
- (void).cxx_destruct;
- (id)shareUsageForShareID:(id)a0 withError:(id *)a1;
- (BOOL)_deleteUsageForIDString:(id)a0 itemType:(unsigned long long)a1 withError:(id *)a2;
- (BOOL)_setUsage:(id)a0 forIDString:(id)a1 forItemType:(unsigned long long)a2 withError:(id *)a3;
- (id)_usageEntriesForContainerID:(id)a0 itemType:(unsigned long long)a1 maxCount:(unsigned long long)a2 withError:(id *)a3;
- (id)_usageForIDString:(id)a0 itemType:(unsigned long long)a1 withError:(id *)a2;
- (BOOL)deleteRecordWithUnknownShareUsageForRecordID:(id)a0 withError:(id *)a1;
- (BOOL)deleteShareUsageForShareID:(id)a0 withError:(id *)a1;
- (BOOL)deleteZoneUsageForZoneID:(id)a0 withError:(id *)a1;
- (id)recordWithUnknownShareUsageForRecordID:(id)a0 withError:(id *)a1;
- (id)recordWithUnknownShareUsagesForContainerID:(id)a0 maxCount:(unsigned long long)a1 withError:(id *)a2;
- (BOOL)setRecordWithUnknownShareUsage:(id)a0 forRecordID:(id)a1 withError:(id *)a2;
- (BOOL)setShareUsage:(id)a0 forShareID:(id)a1 withError:(id *)a2;
- (BOOL)setZoneUsage:(id)a0 forZoneID:(id)a1 withError:(id *)a2;
- (id)shareUsagesForContainerID:(id)a0 maxCount:(unsigned long long)a1 withError:(id *)a2;
- (id)zoneUsageForZoneID:(id)a0 withError:(id *)a1;
- (id)zoneUsagesForContainerID:(id)a0 maxCount:(unsigned long long)a1 withError:(id *)a2;

@end
