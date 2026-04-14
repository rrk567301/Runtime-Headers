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
+ (id)schemaVersionFile;
+ (id)sharedSystemPaths;
+ (id)resolveHardCodedPath:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)container;
- (BOOL)validateWithError:(id *)a0;
- (id)assetStore;
- (id)trialRootDir;
- (id)trialRootDirUsingGlobal:(BOOL)a0;
- (id)trialRootVolume;
- (id)databaseDir;
- (id)logDir;
- (id)containerDir;
- (id)namespaceDescriptorsDir;
- (id)namespaceDescriptorsPathForLayer:(unsigned long long)a0;
- (id)namespaceDescriptorsDefaultDir;
- (id)namespaceDescriptorsRolloutDir;
- (id)namespaceDescriptorsExperimentDir;
- (id)subjectDataFile;
- (id)systemDataFile;
- (id)deviceIdentifierFile;
- (id)treatmentsDir;
- (id)experimentsDir;
- (id)localTempDir;
- (id)decryptionKeyDirForAppleInternal:(BOOL)a0;
- (id)pathsForContainer:(id)a0 asClientProcess:(BOOL)a1;
- (id)_pathErrorWithDescription:(id)a0;
- (id)_realHomeDirectory;
- (id)_trialSystemRootDir;
- (id)_trialSystemRootDirWithError:(id *)a0;
- (id)trialRootDirWithError:(id *)a0;
- (id)initWithSchemaVersion:(unsigned int)a0 container:(id)a1 asClientProcess:(BOOL)a2;
- (id)initWithSchemaVersion:(unsigned int)a0;
- (id)initWithCurrentSchemaVersion;
- (id)_versionSpecificSystemStorageDir;
- (id)_versionSpecificStorageDir;
- (id)_versionSpecificStorageDirUsingGlobal:(BOOL)a0;
- (id)assetStoreUsingGlobal:(BOOL)a0;

@end
