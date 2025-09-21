@interface IASFilesystemUtils : NSObject

+ (id)dataVolumePathGivenSystemPath:(id)a0;
+ (char)pathIsMemberOfSystemDataVolumeGroup:(id)a0;
+ (id)firmlinksOnTargetGivenPath:(id)a0 isAppleInternal:(char)a1 requireTargetInSystemVolumeGroup:(char)a2 withOutSyntheticSymlinks:(id *)a3;
+ (char)localizeParentFolderForBundleWithURL:(id)a0;
+ (char)pathIsMemberOfSystemDataVolumeGroup:(id)a0 isDataRole:(char *)a1 isSystemRole:(char *)a2;
+ (id)systemVolumePathGivenDataPath:(id)a0;
+ (char)isPathSafe:(id)a0 andOwnedByUID:(unsigned int)a1 andGID:(unsigned int)a2;
+ (char)isPathSafe:(id)a0 ofType:(id)a1 andOwnedByUID:(unsigned int)a2 andGID:(unsigned int)a3;
+ (char)isSystemSealedForMountpoint:(id)a0;
+ (id)devNodeForVolumeInContainer:(unsigned int)a0 withGroup:(id)a1 withRequestingDataVolume:(char)a2;
+ (unsigned int)_copyRootedSnapshotForVolume:(unsigned int)a0;
+ (id)getXattr:(id)a0 forPath:(id)a1;
+ (char)isAPFSDataVolumeRoleGivenDiskIdentifier:(id)a0;
+ (char)isAPFSSystemVolumeRoleGivenDiskIdentifier:(id)a0;
+ (char)isDiskInternal:(id)a0 withError:(id *)a1;
+ (char)isPathSafe:(id)a0;
+ (char)isPathSymlinked:(id)a0;
+ (unsigned int)newIOServiceFromDevNode:(id)a0;
+ (char)pathIsMemberOfReadOnlySystemGroup:(id)a0;
+ (id)uuidForDisk:(id)a0;
+ (id)volumePathForSystemOrDataGivenPath:(id)a0 withRequestingDataVolume:(char)a1;
+ (id)volumePathGivenPath:(id)a0;

@end
