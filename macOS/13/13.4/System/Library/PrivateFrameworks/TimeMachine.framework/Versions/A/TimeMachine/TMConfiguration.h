@class NSNumber;

@interface TMConfiguration : NSObject

@property (class, copy) NSNumber *automaticBackupsInterval;
@property (class) BOOL requiresACPower;

+ (void)initialize;
+ (BOOL)save:(id *)a0;
+ (id)adapter;
+ (void)_postNotification:(id)a0;
+ (void)setAdapter:(id)a0;
+ (BOOL)_synchronize:(id *)a0;
+ (id)formerHostUUIDs;
+ (BOOL)setLocalSnapshotsEnabled:(BOOL)a0 error:(id *)a1;
+ (BOOL)_addValue:(id)a0 toPrefsArrayForKey:(id)a1 error:(id *)a2;
+ (void)_clearOutstandingConfigurationChanges;
+ (BOOL)_isIncludedDisk:(id)a0 context:(id)a1;
+ (void)_notifyClientsOfConfigurationChanges:(unsigned int)a0;
+ (unsigned int)_outstandingConfigurationChanges;
+ (id)_pathsForLegacyAliasArrayPrefsKey:(id)a0;
+ (id)_pathsForMountedDestinations;
+ (void)_recordConfigurationChanges:(unsigned int)a0;
+ (BOOL)_removeValue:(id)a0 fromPrefsArrayForKey:(id)a1 error:(id *)a2;
+ (BOOL)_repairSystemExclusions:(id *)a0;
+ (BOOL)_storeExclusionPaths:(id)a0 forKey:(id)a1 error:(id *)a2;
+ (BOOL)addHostUUID:(id)a0;
+ (BOOL)addPathExclusions:(id)a0 error:(id *)a1;
+ (BOOL)automaticBackupsEnabled;
+ (long long)backupQOS;
+ (id)destinationsPlist;
+ (BOOL)disableThrottling;
+ (id)errorForLastDestination;
+ (BOOL)excludeDisk:(id)a0 error:(id *)a1;
+ (id)excludedDisks;
+ (BOOL)helperActivitySuspended;
+ (id)hostUUIDs;
+ (BOOL)includeDisk:(id)a0 error:(id *)a1;
+ (id)includedDisks;
+ (BOOL)isTimeMachineConfigured;
+ (BOOL)localSnapshotsEnabled;
+ (id)localizedCanonicalVolumeName;
+ (id)pathExclusions;
+ (BOOL)removePathExclusionsEqualTo:(id)a0 error:(id *)a1;
+ (BOOL)setAutomaticBackupsEnabled:(BOOL)a0 error:(id *)a1;
+ (void)setDestinationsPlist:(id)a0;
+ (void)setHelperActivitySuspensionDate:(id)a0;
+ (BOOL)setHostUUIDs:(id)a0;
+ (void)setLocalizedCanonicalVolumeName:(id)a0;
+ (void)setMenuExtraEnabled:(BOOL)a0;
+ (BOOL)setPathExclusions:(id)a0 error:(id *)a1;
+ (BOOL)setSystemFilesExcluded:(BOOL)a0 error:(id *)a1;
+ (BOOL)systemFilesExcluded;
+ (BOOL)systemFilesExcludedByDefault;
+ (BOOL)upgrade:(id *)a0;

@end
