@class NSString;

@interface SMSystem_FileManager_ROSV : SMSystem_FileManager_DiskBased

@property char pointedAtDataVolume;
@property char pointedAtMountedROSVVolume;
@property (retain, nonatomic) NSString *dataVolumeMount;
@property (retain, nonatomic) NSString *systemVolumeMount;

+ (char)isRootROSV:(id)a0;

- (void).cxx_destruct;
- (id)productVersion;
- (id)userContentRoot;
- (id)bundleInformationAtPaths:(id)a0;
- (id)pathToRemoteFile:(id)a0 exists:(char *)a1 makeAvailable:(char)a2;
- (id)resourceValuesForKeys:(id)a0 onPaths:(id)a1 error:(id *)a2;
- (id)slash;
- (id)userHomeRoot;
- (id)initAtRoot:(id)a0;

@end
