@class CKContainerID;

@interface CKDDeviceCapabilityLastSentCapabilitiesAndUsageTable : CKSQLiteCacheTable

@property (retain, nonatomic) CKContainerID *containerID;

+ (Class)entryClass;
+ (id)dbProperties;

- (void).cxx_destruct;
- (id)initWithContainerID:(id)a0;
- (BOOL)updateUsageSavedDate:(id)a0 withError:(id *)a1;
- (id)lastSentCapabilityAndUsageWithError:(id *)a0;
- (BOOL)updateLastSentCapabilities:(id)a0 capabilitySetSavedDate:(id)a1 withError:(id *)a2;

@end
