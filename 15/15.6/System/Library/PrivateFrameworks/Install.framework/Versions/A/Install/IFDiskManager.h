@interface IFDiskManager : NSObject

+ (void)initialize;
+ (id)manager;
+ (id)mountPointForPath:(id)a0;
+ (char)pathOnLocalVolume:(id)a0;
+ (char)rootVolumeIsReadOnly;
+ (void)setTypeForSession:(Class)a0;
+ (char)volumeAtPathIsReadOnly:(id)a0;

- (void)dealloc;
- (id)init;
- (id)rootVolume;
- (id)disks;
- (char)ejectDisk:(id)a0;
- (char)renameDisk:(id)a0 toName:(id)a1;
- (id)diskForPath:(id)a0;
- (id)mountPointForPath:(id)a0;
- (id)wholeDiskForDisk:(id)a0;
- (void)csDiskAppeared:(id)a0;
- (void)daDiskAppeared:(struct __DADisk { } *)a0;
- (char)diskIsAnImgsrc:(id)a0;
- (id)_diskDictForIdentifier:(id)a0;
- (id)allMountedVolumes;
- (id)allMountedVolumesIncludingSystemImages:(char)a0;
- (char)checkDisksMediaReadOnly:(id)a0;
- (void)csDiskChanged:(id)a0;
- (void)csDiskTerminated:(id)a0;
- (void)csLVGTerminated:(id)a0;
- (void)daDiskChanged:(struct __DADisk { } *)a0;
- (void)daDiskDisappeared:(struct __DADisk { } *)a0;
- (void)daIdle;
- (char)disablePermissionsOnDisk:(id)a0;
- (id)diskForDiskIdentifier:(id)a0;
- (id)diskForDiskSpecifier:(id)a0;
- (id)disksForLogicalVolumeGroup:(id)a0;
- (void)enablePermissionsOnDisk:(id)a0;
- (id)fileSystemLocalizationForFileSystem:(id)a0;
- (void)finalizeDisk:(id)a0;
- (id)imgsrcDiskAtLevel:(unsigned long long)a0;
- (char)isAnticipatingMoreDisks;
- (char)mountDisk:(id)a0;
- (id)pathIsRemovable:(id)a0;
- (int)prepareDisk:(id)a0;
- (void)releaseDisk:(id)a0;
- (char)reserveDisk:(id)a0;
- (unsigned long long)sizeOfImgsrcHierarchy;
- (char)unmountAllDisksExceptDisk:(id)a0;
- (char)unmountDisk:(id)a0;
- (id)volumeAtPath:(id)a0;

@end
