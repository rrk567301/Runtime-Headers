@class NSURL, OSPDevice, OSPVolume;

@interface OSPVolumeAnalyzer : NSObject

@property (retain) NSURL *mountPointURL;
@property (retain) OSPDevice *device;
@property (retain) OSPVolume *volume;

- (id)init;
- (void).cxx_destruct;
- (void)_setVolume:(id)a0;
- (void)_setDevice:(id)a0;
- (id)_personalizedFilePathsForRecommendedSecureBundleForManifestRootType:(id)a0;
- (char)_rootDirectoryURLContainsRequiredPersonalizedManifests:(id)a0 forManifestRootType:(id)a1;
- (id)initWithVolumeMountPointURL:(id)a0;
- (char)personalizationRequiredForInstallRoot:(id)a0;
- (char)prebootFolderContainsRequiredPersonalizedManifests:(id)a0;
- (char)volumeContainsRequiredPersonalizedManifests;

@end
