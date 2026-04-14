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

+ (unsigned int)currentSchemaVersion;
+ (id)pathsForUser:(unsigned int)a0;
+ (unsigned int)legacySchemaVersion;
+ (id)schemaVersionFile;
+ (id)sharedPaths;
+ (id)resolveHardCodedPath:(id)a0;
+ (unsigned int)resetStorageRequestSchemaVersion;
+ (id)sharedPathsForSystem;

- (id)container;
- (id)allowEnvVarDefaultLevelsDir;
- (id)treatmentsDirUsingGlobal:(BOOL)a0;
- (id)_versionSpecificStorageDir;
- (id)namespaceDescriptorsDirUsingGlobal:(BOOL)a0;
- (id)deviceIdentifierFile;
- (id)_versionSpecificSystemStorageDir;
- (id)systemDataFile;
- (id)localTempDir;
- (id)assetStore;
- (id)init;
- (id)namespaceDescriptorsDevOverrideDir;
- (id)activeLowLevelFactorsFile;
- (id)_versionSpecificStorageDirUsingGlobal:(BOOL)a0;
- (id)_realHomeDirectory;
- (id)subjectDataFile;
- (id)logDir;
- (id)externalParametersFile;
- (id)_getHomeDirectoryForUser:(unsigned int)a0;
- (id)namespaceDescriptorsDir;
- (id)assetStoreUsingGlobal:(BOOL)a0;
- (void).cxx_destruct;
- (id)_trialSystemRootDir;
- (id)decryptionKeyDirForAppleInternal:(BOOL)a0;
- (id)trialVolume;
- (id)trialRootDir;
- (id)volumeForDirectory:(id)a0;
- (id)systemInteropDirectory;
- (id)trialRootDirWithError:(id *)a0;
- (id)initWithSchemaVersion:(unsigned int)a0 forUser:(unsigned int)a1 forTrialdSystem:(BOOL)a2;
- (id)_pathErrorWithDescription:(id)a0;
- (BOOL)validateWithError:(id *)a0;
- (id)experimentsDir;
- (id)treatmentsDir;
- (id)namespaceDescriptorsExperimentDir;
- (id)_trialSystemRootDirWithError:(id *)a0;
- (id)databaseDir;
- (id)namespaceDescriptorsDefaultDir;
- (id)namespaceDescriptorsPathForLayer:(unsigned long long)a0;
- (id)trialRootDirUsingGlobal:(BOOL)a0;
- (id)containerDir;

@end
