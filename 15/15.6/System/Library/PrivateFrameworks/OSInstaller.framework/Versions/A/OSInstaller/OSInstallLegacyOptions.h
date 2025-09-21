@class NSURL, NSString;

@interface OSInstallLegacyOptions : OSInstallOptions

@property (retain) NSURL *distributionURL;
@property (retain) NSURL *choiceChangesURL;
@property (retain) NSURL *payloadImageURL;
@property (retain) NSString *alternateBlessVolumePath;
@property (retain) NSString *alternateBlessVolumeUUID;
@property (retain) NSString *distributionPath;
@property (retain) NSString *choiceChangesPath;
@property (retain) NSString *payloadImagePath;
@property (retain) NSString *baseSystemMountPoint;
@property (retain) NSString *payloadImageMountPoint;
@property char isAutomated;
@property char isEraseInstall;
@property char hadToMountBaseSystemDMG;
@property char needsLongInstallSizeCheck;
@property char enableSUFLO;
@property char didRequestEraseInstall;
@property (retain) NSString *volumeUUIDToErase;
@property char doROSVInstall;

- (void).cxx_destruct;
- (id)initWithFile:(id)a0;
- (id)_resolveTargetWithPath:(id)a0 name:(id)a1 orUUID:(id)a2;
- (id)alternateBlessTarget;
- (id)initWithDefaultSettings;

@end
