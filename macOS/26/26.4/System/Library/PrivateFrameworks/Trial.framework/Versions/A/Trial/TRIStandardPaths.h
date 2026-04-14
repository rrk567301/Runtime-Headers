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

+ (id)sharedPathsForSystem;
+ (id)pathsForUser:(unsigned int)a0;
+ (id)sharedPaths;
+ (unsigned int)currentSchemaVersion;
+ (id)resolveHardCodedPath:(id)a0;
+ (unsigned int)resetStorageRequestSchemaVersion;
+ (id)schemaVersionFile;
+ (unsigned int)legacySchemaVersion;

- (BOOL)validateWithError:(id *)a0;
- (id)_realHomeDirectory;
- (id)logDir;
- (id)_pathErrorWithDescription:(id)a0;
- (id)containerDir;
- (id)_versionSpecificStorageDir;
- (id)namespaceDescriptorsDefaultDir;
- (id)localTempDir;
- (id)_versionSpecificSystemStorageDir;
- (id)_trialSystemRootDirWithError:(id *)a0;
- (id)allowEnvVarDefaultLevelsDir;
- (id)_versionSpecificStorageDirUsingGlobal:(BOOL)a0;
- (id)subjectDataFile;
- (id)assetStoreUsingGlobal:(BOOL)a0;
- (id)namespaceDescriptorsPathForLayer:(unsigned long long)a0;
- (id)namespaceDescriptorsDir;
- (id)deviceIdentifierFile;
- (id)databaseDir;
- (id)treatmentsDirUsingGlobal:(BOOL)a0;
- (id)_trialSystemRootDir;
- (id)container;
- (id)_getHomeDirectoryForUser:(unsigned int)a0;
- (id)initWithSchemaVersion:(unsigned int)a0 forUser:(unsigned int)a1 forTrialdSystem:(BOOL)a2;
- (void).cxx_destruct;
- (id)trialRootDir;
- (id)externalParametersFile;
- (id)systemInteropDirectory;
- (id)init;
- (id)trialRootDirWithError:(id *)a0;
- (id)trialVolume;
- (id)assetStore;
- (id)namespaceDescriptorsExperimentDir;
- (id)decryptionKeyDirForAppleInternal:(BOOL)a0;
- (id)experimentsDir;
- (id)treatmentsDir;
- (id)volumeForDirectory:(id)a0;
- (id)trialRootDirUsingGlobal:(BOOL)a0;
- (id)systemDataFile;
- (id)activeLowLevelFactorsFile;
- (id)namespaceDescriptorsDirUsingGlobal:(BOOL)a0;
- (id)namespaceDescriptorsDevOverrideDir;

@end
