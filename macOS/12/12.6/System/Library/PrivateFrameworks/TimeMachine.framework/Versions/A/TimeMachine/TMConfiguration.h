@interface TMConfiguration : NSObject

+ (void)initialize;
+ (BOOL)save:(id *)a0;
+ (id)adapter;
+ (void)_postNotification:(id)a0;
+ (void)setAdapter:(id)a0;
+ (BOOL)_synchronize:(id *)a0;
+ (id)errorForLastDestination;
+ (id)pathExclusions;
+ (void)_notifyClientsOfConfigurationChanges:(unsigned int)a0;
+ (void)_recordConfigurationChanges:(unsigned int)a0;
+ (BOOL)_storeExclusionPaths:(id)a0 forKey:(id)a1 error:(id *)a2;
+ (BOOL)setPathExclusions:(id)a0 error:(id *)a1;
+ (BOOL)_removeValue:(id)a0 fromPrefsArrayForKey:(id)a1 error:(id *)a2;
+ (BOOL)_addValue:(id)a0 toPrefsArrayForKey:(id)a1 error:(id *)a2;
+ (BOOL)_isIncludedDisk:(id)a0 context:(id)a1;
+ (BOOL)systemFilesExcluded;
+ (id)_pathsForLegacyAliasArrayPrefsKey:(id)a0;
+ (id)_pathsForMountedDestinations;
+ (BOOL)_repairSystemExclusions:(id *)a0;
+ (id)hostUUIDs;
+ (BOOL)setHostUUIDs:(id)a0;
+ (void)_clearOutstandingConfigurationChanges;
+ (unsigned int)_outstandingConfigurationChanges;
+ (BOOL)isTimeMachineConfigured;
+ (BOOL)automaticBackupsEnabled;
+ (BOOL)setAutomaticBackupsEnabled:(BOOL)a0 error:(id *)a1;
+ (BOOL)helperActivitySuspended;
+ (BOOL)localSnapshotsEnabled;
+ (BOOL)setLocalSnapshotsEnabled:(BOOL)a0 error:(id *)a1;
+ (BOOL)systemFilesExcludedByDefault;
+ (BOOL)setSystemFilesExcluded:(BOOL)a0 error:(id *)a1;
+ (BOOL)addPathExclusions:(id)a0 error:(id *)a1;
+ (BOOL)removePathExclusionsEqualTo:(id)a0 error:(id *)a1;
+ (BOOL)excludeDisk:(id)a0 error:(id *)a1;
+ (BOOL)includeDisk:(id)a0 error:(id *)a1;
+ (id)excludedDisks;
+ (id)includedDisks;
+ (BOOL)upgrade:(id *)a0;
+ (id)formerHostUUIDs;
+ (BOOL)addHostUUID:(id)a0;
+ (id)localizedCanonicalVolumeName;
+ (long long)backupQOS;
+ (BOOL)disableThrottling;

@end
