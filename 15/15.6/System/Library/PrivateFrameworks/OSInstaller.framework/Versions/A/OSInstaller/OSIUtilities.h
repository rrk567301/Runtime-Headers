@interface OSIUtilities : NSObject

+ (id)serialNumber;
+ (char)isVirtualMachine;
+ (char)isNetBooted;
+ (void)muteBootChimeForNextReboot;
+ (void)forceNVRAMSync;
+ (id)parseFirmlinkManifestForVolume:(id)a0 withError:(id *)a1;
+ (id)systemVersionForMountPoint:(id)a0;
+ (id)allDiskUUIDs:(id)a0;
+ (char)bless2Device:(id)a0 once:(char)a1;
+ (char)blessDevice:(id)a0 once:(char)a1;
+ (char)blessLegacyMode:(id)a0 path:(id)a1 once:(char)a2;
+ (char)blessMountPoint:(id)a0 once:(char)a1;
+ (void)enableDarkReboot;
+ (void)enableDarkRebootAndPersist:(char)a0;
+ (char)forceAttributesOfSrcPath:(id)a0 toDstPath:(id)a1;
+ (id)getEFIVersion;
+ (void)inducePanicWithMessage:(id)a0 onInternalOnly:(char)a1;
+ (char)insistentUnmount:(id)a0 purpose:(id)a1;
+ (char)isAPFSFusion:(id)a0;
+ (char)isCSFusion:(id)a0;
+ (char)isDarkBoot;
+ (id)mapMountPointToROSVPath:(id)a0;
+ (id)mapPathToROSV:(id)a0;
+ (id)masterBOMSystemPath;
+ (id)mountDiskImageWithPath:(id)a0 withError:(id *)a1;
+ (char)mountRequiredVolume:(id)a0 atLocation:(id)a1 disableFirmlinks:(char)a2 andPurpose:(id)a3;
+ (char)mountRequiredVolume:(id)a0 purpose:(id)a1;
+ (int)promoteDiskToReadWrite:(id)a0;
+ (void)rebootNow;
+ (char)remountVolume:(id)a0 preferredMountpoint:(id)a1 disableFirmlinks:(char)a2 andPurpose:(id)a3;
+ (void)setUseROSVPaths:(char)a0;
+ (char)shouldAllowInsecureCollections;
+ (char)stopAutomationOnDisk:(id)a0 reblessUUID:(id)a1;
+ (id)systemVersionForDisk:(id)a0;
+ (void)takeRecoveryDiagnose;
+ (char)unsupportedInstallEnvironmentForGatheringDiagnosticsWithError:(id *)a0;

@end
