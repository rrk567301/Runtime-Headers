@class NSString, TRIAppContainer;

@interface TRIStandardPaths : NSObject <TRIPaths> {
    unsigned int _schemaVersion;
    TRIAppContainer *_container;
    BOOL _isClient;
    struct atomic_flag { _Atomic BOOL _Value; } _loggedRootDir;
    NSString *_containerPath;
}

+ (unsigned int)currentSchemaVersion;
+ (id)sharedSystemPaths;
+ (unsigned int)legacySchemaVersion;
+ (id)resolveHardCodedPath:(id)a0;
+ (unsigned int)resetStorageRequestSchemaVersion;
+ (id)schemaVersionFile;

- (id)init;
- (void).cxx_destruct;
- (id)container;
- (BOOL)validateWithError:(id *)a0;
- (id)assetStore;
- (id)_realHomeDirectory;
- (id)namespaceDescriptorsDir;
- (id)namespaceDescriptorsDefaultDir;
- (id)namespaceDescriptorsExperimentDir;
- (id)namespaceDescriptorsRolloutDir;
- (id)pathsForContainer:(id)a0 asClientProcess:(BOOL)a1;
- (id)systemDataFile;
- (id)_trialSystemRootDirWithError:(id *)a0;
- (id)_pathErrorWithDescription:(id)a0;
- (id)trialRootDirWithError:(id *)a0;
- (id)trialRootDir;
- (id)initWithCurrentSchemaVersion;
- (id)_trialSystemRootDir;
- (id)initWithSchemaVersion:(unsigned int)a0 container:(id)a1 asClientProcess:(BOOL)a2;
- (id)initWithSchemaVersion:(unsigned int)a0;
- (id)_versionSpecificSystemStorageDir;
- (id)_versionSpecificStorageDir;
- (id)trialRootVolume;
- (id)databaseDir;
- (id)logDir;
- (id)containerDir;
- (id)namespaceDescriptorsPathForLayer:(unsigned long long)a0;
- (id)subjectDataFile;
- (id)deviceIdentifierFile;
- (id)treatmentsDir;
- (id)experimentsDir;
- (id)localTempDir;
- (id)decryptionKeyDirForAppleInternal:(BOOL)a0;

@end
