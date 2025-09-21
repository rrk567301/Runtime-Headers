@class NSURL;

@interface IXGlobalConfiguration : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _dynamicPropertyLock;
}

@property (readonly, nonatomic) NSURL *daemonUserHome;
@property (readonly, nonatomic) NSURL *rootPath;
@property (readonly, nonatomic) NSURL *dataStorageHome;
@property (readonly, nonatomic) NSURL *frameworkURL;
@property (readonly, nonatomic) NSURL *userVolumeURL;
@property (readonly, nonatomic) unsigned int daemonUID;
@property (readonly, nonatomic) unsigned int daemonGID;
@property (readonly, nonatomic) BOOL isiPad;

+ (id)sharedInstance;

- (id)iconStagingDirectoryWithError:(id *)a0;
- (id)_dataStorageHomeURLWithError:(id *)a0;
- (id)extractedInstallableStagingDirectory:(id *)a0;
- (id)dataDirectoryAbortingOnError;
- (id)removabilityDirectoryAbortingOnError;
- (id)promiseStagingRootAbortingOnErrorForInstallLocation:(id)a0 usingUniqueName:(id)a1;
- (id)remoteInstallationStagingDirectory:(id *)a0;
- (id)init;
- (id)dataDirectoryWithError:(id *)a0;
- (id)removabilityDirectoryWithError:(id *)a0;
- (void)createDirectories;
- (id)promiseStagingRootForInstallLocation:(id)a0 usingUniqueName:(id)a1 error:(id *)a2;
- (id)_userTempDirURLWithError:(id *)a0;
- (void).cxx_destruct;

@end
