@interface OSIUtilities : NSObject

+ (id)serialNumber;
+ (void)muteBootChimeForNextReboot;
+ (BOOL)isNetBooted;
+ (void)forceNVRAMSync;
+ (id)parseFirmlinkManifestForVolume:(id)a0 withError:(id *)a1;
+ (id)systemVersionForMountPoint:(id)a0;
+ (void)inducePanicWithMessage:(id)a0 onInternalOnly:(BOOL)a1;
+ (BOOL)isCSFusion:(id)a0;
+ (int)promoteDiskToReadWrite:(id)a0;
+ (BOOL)unsupportedInstallEnvironmentForGatheringDiagnosticsWithError:(id *)a0;
+ (id)mountDiskImageWithPath:(id)a0 withError:(id *)a1;
+ (BOOL)shouldAllowInsecureCollections;
+ (id)mapPathToROSV:(id)a0;
+ (void)setUseROSVPaths:(BOOL)a0;
+ (BOOL)stopAutomationOnDisk:(id)a0 reblessUUID:(id)a1;
+ (id)mapMountPointToROSVPath:(id)a0;
+ (BOOL)mountRequiredVolume:(id)a0 purpose:(id)a1;
+ (id)getEFIVersion;
+ (BOOL)isVirtualMachine;
+ (void)enableDarkReboot;
+ (void)rebootNow;
+ (BOOL)remountVolume:(id)a0 preferredMountpoint:(id)a1 disableFirmlinks:(BOOL)a2 andPurpose:(id)a3;
+ (BOOL)insistentUnmount:(id)a0 purpose:(id)a1;
+ (id)allDiskUUIDs:(id)a0;
+ (BOOL)mountRequiredVolume:(id)a0 atLocation:(id)a1 disableFirmlinks:(BOOL)a2 andPurpose:(id)a3;
+ (BOOL)isAPFSFusion:(id)a0;
+ (id)systemVersionForDisk:(id)a0;
+ (id)masterBOMSystemPath;
+ (BOOL)forceAttributesOfSrcPath:(id)a0 toDstPath:(id)a1;
+ (void)takeRecoveryDiagnose;

@end
