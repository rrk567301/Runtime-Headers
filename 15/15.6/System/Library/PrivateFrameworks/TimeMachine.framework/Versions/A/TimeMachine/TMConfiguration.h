@class NSArray, NSError, NSSet;

@interface TMConfiguration : NSObject

@property (readonly) char isTimeMachineConfigured;
@property char automaticBackupsEnabled;
@property (copy) NSArray *destinationDictionaries;
@property (readonly) NSError *errorForLastDestination;
@property (readonly) NSArray *globalPathExclusions;
@property (readonly) NSSet *includedDisks;
@property (readonly) long long backupQoS;
@property long long outstandingChanges;
@property struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } outstandingChangesLock;
@property (readonly) long long restrictedSettings;

+ (char)save:(id *)a0;
+ (id)adapter;
+ (void)setAdapter:(id)a0;
+ (char)_synchronize:(id *)a0;
+ (long long)_configurationChangesForKey:(id)a0;
+ (Class)_expectedClassForKey:(id)a0;
+ (id)_keysImpactingExclusions;
+ (void)_notifyClientsOfConfigurationChanges:(long long)a0;
+ (char)automaticBackupsEnabled;
+ (id)destinationsPlist;
+ (id)errorForLastDestination;
+ (id)includedDisks;
+ (char)isTimeMachineConfigured;
+ (char)setAutomaticBackupsEnabled:(char)a0;

- (char)boolForKey:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)valueForKey:(id)a0;
- (char)save:(id *)a0;
- (void)_postNotification:(id)a0;
- (id)rawValueForKey:(id)a0;
- (void)setRawValue:(id)a0 forKey:(id)a1;
- (id)_exclusionsDict;
- (char)_checkClassOfValue:(id)a0 forKey:(id)a1;
- (char)_isIncludedDisk:(id)a0 context:(id)a1;
- (void)_notifyClientsOfConfigurationChanges:(long long)a0;
- (long long)_outstandingConfigurationChanges;
- (id)_pathExclusionsForDestinationUUID:(id)a0 includePerDestinationExclusions:(char)a1;
- (id)_pathsForLegacyAliasArrayPrefsKey:(id)a0;
- (id)_pathsForMountedDestinations;
- (void)_recordConfigurationChanges:(long long)a0;
- (id)excludedDisksForDestinationUUID:(id)a0;
- (id)excludedVolumeUUIDsForDestinationUUID:(id)a0;
- (long long)exclusionStatusForURL:(id)a0;
- (long long)exclusionStatusForURL:(id)a0 error:(id *)a1;
- (id)pathExclusionsForDestinationUUID:(id)a0;
- (void)postConfigurationChangedNotifications;

@end
