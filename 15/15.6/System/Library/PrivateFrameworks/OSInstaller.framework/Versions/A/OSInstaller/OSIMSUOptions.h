@class NSString, NSArray;

@interface OSIMSUOptions : OSInstallOptions

@property (retain) NSString *relativeUpdateBrainPath;
@property (retain) NSString *relativeUpdateBundlePath;
@property (retain) NSString *relativeMutableProductPath;
@property (retain) NSString *alternateBlessVolumeUUID;
@property (retain) NSArray *relativeAdditionalInstallers;
@property char isPastThePointOfNoReturn;
@property char doNotSeal;
@property char shouldMigrate;
@property char haveCreatedUnencryptedSystemVolume;
@property char didRequestEraseInstall;
@property (retain) NSString *volumeUUIDToErase;
@property char shouldRemoveSharedSupportBeforeInstall;

+ (id)currentlySetOptions;
+ (id)currentlySetOptionsWithError:(id *)a0;

- (void).cxx_destruct;
- (id)updateBrainPath;
- (id)updateBundlePath;
- (char)_loadOptionsFromMutableProduct:(id)a0;
- (id)additionalInstallers;
- (id)alternateBootUUID;
- (id)initWithMutableProductPath:(id)a0;
- (id)mutableProductPath;
- (id)personalizedManifestsRootsPath;

@end
