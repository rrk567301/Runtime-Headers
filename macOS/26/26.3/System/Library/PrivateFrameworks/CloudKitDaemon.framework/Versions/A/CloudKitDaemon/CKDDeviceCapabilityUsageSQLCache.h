@class CKContainerID, CKDDeviceCapabilityUsageSQLTable, CKDDeviceCapabilityLastSentCapabilitiesAndUsageTable;

@interface CKDDeviceCapabilityUsageSQLCache : CKSQLiteContainerAttributedTableGroup

@property (retain, nonatomic) CKContainerID *containerID;
@property (readonly, nonatomic) CKDDeviceCapabilityUsageSQLTable *usageTable;
@property (readonly, nonatomic) CKDDeviceCapabilityLastSentCapabilitiesAndUsageTable *lastSentTable;

+ (double)expirationTime;
+ (id)_groupNameForContainer:(id)a0;
+ (id)deviceCapabilityUsageSQLCacheForContainer:(id)a0;
+ (id)deviceCapabilityUsageSQLCacheForTesting:(id)a0;
+ (id)deviceCapabilityUsageSQLCacheForTesting:(id)a0 withDatabase:(id)a1;

- (void)createTables;
- (void).cxx_destruct;
- (BOOL)deleteAllUsageEntriesWithError:(id *)a0;
- (id)shareUsageForShareID:(id)a0 withError:(id *)a1;
- (BOOL)updateUsageSavedDate:(id)a0 withError:(id *)a1;
- (BOOL)deleteLastSentCapabilitiesAndUsageEntryWithError:(id *)a0;
- (BOOL)deleteRecordWithUnknownShareUsageForRecordID:(id)a0 withError:(id *)a1;
- (BOOL)deleteShareUsageForShareID:(id)a0 withError:(id *)a1;
- (BOOL)deleteZoneUsageForZoneID:(id)a0 withError:(id *)a1;
- (id)lastSentCapabilitiesAndUsageWithError:(id *)a0;
- (id)recordWithUnknownShareUsageForRecordID:(id)a0 withError:(id *)a1;
- (id)recordWithUnknownShareUsagesWithMaxCount:(unsigned long long)a0 withError:(id *)a1;
- (BOOL)setRecordWithUnknownShareUsage:(id)a0 forRecordID:(id)a1 withError:(id *)a2;
- (BOOL)setShareUsage:(id)a0 forShareID:(id)a1 withError:(id *)a2;
- (BOOL)setZoneUsage:(id)a0 forZoneID:(id)a1 withError:(id *)a2;
- (id)shareUsagesWithMaxCount:(unsigned long long)a0 withError:(id *)a1;
- (BOOL)updateCapabilitySet:(id)a0 capabilitySetSavedDate:(id)a1 withError:(id *)a2;
- (id)zoneUsageForZoneID:(id)a0 withError:(id *)a1;
- (id)zoneUsagesWithMaxCount:(unsigned long long)a0 withError:(id *)a1;

@end
