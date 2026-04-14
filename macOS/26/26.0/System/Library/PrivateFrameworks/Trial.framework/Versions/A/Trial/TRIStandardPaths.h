@class NSString, TRIAppContainer, _PASLock;

@interface TRIStandardPaths : NSObject <TRIPaths> {
    unsigned int _schemaVersion;
    TRIAppContainer *_container;
    struct atomic_flag { _Atomic BOOL _Value; } _loggedRootDir;
    NSString *_containerPath;
    unsigned int _forUserId;
    _PASLock *_lock;
}

@property (readonly, nonatomic) BOOL forTrialdSystem;

+ (id)resolveHardCodedPath:(id)a0;
+ (id)schemaVersionFile;
+ (id)sharedPathsForSystem;
+ (id)sharedPaths;
+ (id)pathsForUser:(unsigned int)a0;
+ (unsigned int)resetStorageRequestSchemaVersion;
+ (unsigned int)currentSchemaVersion;
+ (unsigned int)legacySchemaVersion;

- (BOOL)validateWithError:(id *)a0;
- (id)_versionSpecificSystemStorageDir;
- (id)containerDir;
- (id)_trialSystemRootDirWithError:(id *)a0;
- (id)namespaceDescriptorsDir;
- (id)initWithSchemaVersion:(unsigned int)a0 forUser:(unsigned int)a1 forTrialdSystem:(BOOL)a2;
- (id)logDir;
- (id)allowEnvVarDefaultLevelsDir;
- (id)_pathErrorWithDescription:(id)a0;
- (id)systemDataFile;
- (id)subjectDataFile;
- (id)systemInteropDirectory;
- (id)localTempDir;
- (id)_realHomeDirectory;
- (id)volumeForDirectory:(id)a0;
- (id)_versionSpecificStorageDirUsingGlobal:(BOOL)a0;
- (id)treatmentsDir;
- (id)activeLowLevelFactorsFile;
- (id)init;
- (id)decryptionKeyDirForAppleInternal:(BOOL)a0;
- (id)trialVolume;
- (id)databaseDir;
- (id)_versionSpecificStorageDir;
- (id)namespaceDescriptorsPathForLayer:(unsigned long long)a0;
- (id)_getHomeDirectoryForUser:(unsigned int)a0;
- (id)assetStore;
- (id)externalParametersFile;
- (id)namespaceDescriptorsDefaultDir;
- (id)treatmentsDirUsingGlobal:(BOOL)a0;
- (id)experimentsDir;
- (id)namespaceDescriptorsDirUsingGlobal:(BOOL)a0;
- (id)namespaceDescriptorsExperimentDir;
- (id)container;
- (id)trialRootDir;
- (id)assetStoreUsingGlobal:(BOOL)a0;
- (id)trialRootDirUsingGlobal:(BOOL)a0;
- (id)_trialSystemRootDir;
- (id)trialRootDirWithError:(id *)a0;
- (id)deviceIdentifierFile;
- (id)namespaceDescriptorsDevOverrideDir;
- (void).cxx_destruct;

@end
