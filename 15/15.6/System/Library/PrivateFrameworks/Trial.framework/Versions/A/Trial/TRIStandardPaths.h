@class NSString, TRIAppContainer;

@interface TRIStandardPaths : NSObject <TRIPaths> {
    unsigned int _schemaVersion;
    TRIAppContainer *_container;
    char _isClient;
    struct atomic_flag { _Atomic BOOL _Value; } _loggedRootDir;
    NSString *_containerPath;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _homeDirectoryLock;
}

+ (unsigned int)currentSchemaVersion;
+ (unsigned int)legacySchemaVersion;
+ (unsigned int)resetStorageRequestSchemaVersion;
+ (id)resolveHardCodedPath:(id)a0;
+ (id)schemaVersionFile;
+ (id)sharedSystemPaths;

- (id)init;
- (void).cxx_destruct;
- (id)container;
- (char)validateWithError:(id *)a0;
- (id)assetStore;
- (id)subjectDataFile;
- (id)allowedLowLevelDefaultLevelsDir;
- (id)_pathErrorWithDescription:(id)a0;
- (id)_realHomeDirectory;
- (id)_trialSystemRootDir;
- (id)_trialSystemRootDirWithError:(id *)a0;
- (id)_versionSpecificStorageDir;
- (id)_versionSpecificStorageDirUsingGlobal:(char)a0;
- (id)_versionSpecificSystemStorageDir;
- (id)activeLowLevelFactorsFile;
- (id)assetStoreUsingGlobal:(char)a0;
- (id)containerDir;
- (id)databaseDir;
- (id)decryptionKeyDirForAppleInternal:(char)a0;
- (id)deviceIdentifierFile;
- (id)experimentsDir;
- (id)externalParametersFile;
- (id)initWithCurrentSchemaVersion;
- (id)initWithSchemaVersion:(unsigned int)a0;
- (id)initWithSchemaVersion:(unsigned int)a0 container:(id)a1 asClientProcess:(char)a2;
- (id)localTempDir;
- (id)logDir;
- (id)namespaceDescriptorsBMLTDir;
- (id)namespaceDescriptorsDefaultDir;
- (id)namespaceDescriptorsDevOverrideDir;
- (id)namespaceDescriptorsDir;
- (id)namespaceDescriptorsDirUsingGlobal:(char)a0;
- (id)namespaceDescriptorsExperimentDir;
- (id)namespaceDescriptorsPathForLayer:(unsigned long long)a0;
- (id)namespaceDescriptorsRolloutDir;
- (id)pathsForContainer:(id)a0 asClientProcess:(char)a1;
- (id)systemDataFile;
- (id)treatmentsDir;
- (id)treatmentsDirUsingGlobal:(char)a0;
- (id)trialRootDir;
- (id)trialRootDirUsingGlobal:(char)a0;
- (id)trialRootDirWithError:(id *)a0;
- (id)trialVolume;
- (id)volumeForDirectory:(id)a0;

@end
