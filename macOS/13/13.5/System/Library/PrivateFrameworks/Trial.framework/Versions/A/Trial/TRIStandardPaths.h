@class NSString, TRIAppContainer;

@interface TRIStandardPaths : NSObject <TRIPaths> {
    unsigned int _schemaVersion;
    TRIAppContainer *_container;
    BOOL _isClient;
    struct atomic_flag { _Atomic BOOL _Value; } _loggedRootDir;
    NSString *_containerPath;
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
- (BOOL)validateWithError:(id *)a0;
- (id)assetStore;
- (id)subjectDataFile;
- (id)trialRootVolume;
- (id)_pathErrorWithDescription:(id)a0;
- (id)_realHomeDirectory;
- (id)_trialSystemRootDir;
- (id)_trialSystemRootDirWithError:(id *)a0;
- (id)_versionSpecificStorageDir;
- (id)_versionSpecificStorageDirUsingGlobal:(BOOL)a0;
- (id)_versionSpecificSystemStorageDir;
- (id)assetStoreUsingGlobal:(BOOL)a0;
- (id)containerDir;
- (id)databaseDir;
- (id)decryptionKeyDirForAppleInternal:(BOOL)a0;
- (id)deviceIdentifierFile;
- (id)experimentsDir;
- (id)initWithCurrentSchemaVersion;
- (id)initWithSchemaVersion:(unsigned int)a0;
- (id)initWithSchemaVersion:(unsigned int)a0 container:(id)a1 asClientProcess:(BOOL)a2;
- (id)localTempDir;
- (id)logDir;
- (id)namespaceDescriptorsDefaultDir;
- (id)namespaceDescriptorsDevOverrideDir;
- (id)namespaceDescriptorsDir;
- (id)namespaceDescriptorsExperimentDir;
- (id)namespaceDescriptorsPathForLayer:(unsigned long long)a0;
- (id)namespaceDescriptorsRolloutDir;
- (id)pathsForContainer:(id)a0 asClientProcess:(BOOL)a1;
- (id)systemDataFile;
- (id)treatmentsDir;
- (id)trialRootDir;
- (id)trialRootDirUsingGlobal:(BOOL)a0;
- (id)trialRootDirWithError:(id *)a0;

@end
