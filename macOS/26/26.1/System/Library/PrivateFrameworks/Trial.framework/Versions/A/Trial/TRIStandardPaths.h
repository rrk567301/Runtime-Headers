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

+ (id)schemaVersionFile;
+ (id)sharedPathsForSystem;
+ (unsigned int)legacySchemaVersion;
+ (id)sharedPaths;
+ (unsigned int)currentSchemaVersion;
+ (unsigned int)resetStorageRequestSchemaVersion;
+ (id)pathsForUser:(unsigned int)a0;
+ (id)resolveHardCodedPath:(id)a0;

- (id)databaseDir;
- (id)container;
- (id)assetStoreUsingGlobal:(BOOL)a0;
- (id)_trialSystemRootDir;
- (id)trialRootDirUsingGlobal:(BOOL)a0;
- (id)namespaceDescriptorsExperimentDir;
- (id)_getHomeDirectoryForUser:(unsigned int)a0;
- (id)namespaceDescriptorsPathForLayer:(unsigned long long)a0;
- (id)externalParametersFile;
- (id)_pathErrorWithDescription:(id)a0;
- (id)_realHomeDirectory;
- (id)namespaceDescriptorsDefaultDir;
- (id)assetStore;
- (BOOL)validateWithError:(id *)a0;
- (id)experimentsDir;
- (id)logDir;
- (id)allowEnvVarDefaultLevelsDir;
- (id)treatmentsDir;
- (id)systemInteropDirectory;
- (id)trialVolume;
- (id)decryptionKeyDirForAppleInternal:(BOOL)a0;
- (id)subjectDataFile;
- (id)_versionSpecificStorageDir;
- (id)volumeForDirectory:(id)a0;
- (id)namespaceDescriptorsDirUsingGlobal:(BOOL)a0;
- (id)initWithSchemaVersion:(unsigned int)a0 forUser:(unsigned int)a1 forTrialdSystem:(BOOL)a2;
- (id)_versionSpecificStorageDirUsingGlobal:(BOOL)a0;
- (id)deviceIdentifierFile;
- (void).cxx_destruct;
- (id)systemDataFile;
- (id)namespaceDescriptorsDevOverrideDir;
- (id)_versionSpecificSystemStorageDir;
- (id)_trialSystemRootDirWithError:(id *)a0;
- (id)treatmentsDirUsingGlobal:(BOOL)a0;
- (id)trialRootDir;
- (id)activeLowLevelFactorsFile;
- (id)trialRootDirWithError:(id *)a0;
- (id)localTempDir;
- (id)init;
- (id)containerDir;
- (id)namespaceDescriptorsDir;

@end
