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

+ (id)pathsForUser:(unsigned int)a0;
+ (unsigned int)legacySchemaVersion;
+ (id)sharedPaths;
+ (unsigned int)resetStorageRequestSchemaVersion;
+ (id)resolveHardCodedPath:(id)a0;
+ (unsigned int)currentSchemaVersion;
+ (id)sharedPathsForSystem;
+ (id)schemaVersionFile;

- (id)namespaceDescriptorsDir;
- (id)container;
- (id)subjectDataFile;
- (id)localTempDir;
- (id)namespaceDescriptorsExperimentDir;
- (id)_getHomeDirectoryForUser:(unsigned int)a0;
- (id)externalParametersFile;
- (BOOL)validateWithError:(id *)a0;
- (id)_pathErrorWithDescription:(id)a0;
- (id)_versionSpecificSystemStorageDir;
- (id)_trialSystemRootDir;
- (id)decryptionKeyDirForAppleInternal:(BOOL)a0;
- (id)_trialSystemRootDirWithError:(id *)a0;
- (id)_versionSpecificStorageDirUsingGlobal:(BOOL)a0;
- (id)trialRootDirUsingGlobal:(BOOL)a0;
- (id)namespaceDescriptorsDefaultDir;
- (id)namespaceDescriptorsPathForLayer:(unsigned long long)a0;
- (id)systemDataFile;
- (id)logDir;
- (id)allowEnvVarDefaultLevelsDir;
- (void).cxx_destruct;
- (id)activeLowLevelFactorsFile;
- (id)systemInteropDirectory;
- (id)trialRootDir;
- (id)namespaceDescriptorsDevOverrideDir;
- (id)trialRootDirWithError:(id *)a0;
- (id)_versionSpecificStorageDir;
- (id)databaseDir;
- (id)containerDir;
- (id)treatmentsDir;
- (id)deviceIdentifierFile;
- (id)namespaceDescriptorsDirUsingGlobal:(BOOL)a0;
- (id)treatmentsDirUsingGlobal:(BOOL)a0;
- (id)initWithSchemaVersion:(unsigned int)a0 forUser:(unsigned int)a1 forTrialdSystem:(BOOL)a2;
- (id)volumeForDirectory:(id)a0;
- (id)_realHomeDirectory;
- (id)init;
- (id)trialVolume;
- (id)assetStore;
- (id)experimentsDir;
- (id)assetStoreUsingGlobal:(BOOL)a0;

@end
