@class NSString;

@interface SMSystem_FileManager_ROSV : SMSystem_FileManager_DiskBased

@property BOOL pointedAtDataVolume;
@property BOOL pointedAtMountedROSVVolume;
@property (retain, nonatomic) NSString *dataVolumeMount;
@property (retain, nonatomic) NSString *systemVolumeMount;

+ (BOOL)isRootROSV:(id)a0;

- (id)productVersion;
- (void).cxx_destruct;
- (id)userContentRoot;
- (id)bundleInformationAtPaths:(id)a0;
- (id)pathToRemoteFile:(id)a0 exists:(BOOL *)a1 makeAvailable:(BOOL)a2;
- (id)resourceValuesForKeys:(id)a0 onPaths:(id)a1 error:(id *)a2;
- (id)slash;
- (id)userHomeRoot;
- (id)initAtRoot:(id)a0;

@end
