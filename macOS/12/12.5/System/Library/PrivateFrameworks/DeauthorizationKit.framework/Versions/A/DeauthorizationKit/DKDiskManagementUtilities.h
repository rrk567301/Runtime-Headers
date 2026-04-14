@class DMManager, DMAPFS;

@interface DKDiskManagementUtilities : NSObject

@property struct __DASession { } *daSession;
@property (retain) DMManager *manager;
@property (retain) DMAPFS *dmAPFS;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (id)currentlyMountedDiskBSD;
- (id)currentlyMountedVolumeName;
- (struct __DASession { } *)_createDiskSession;
- (id)getStartupTopDisk:(id)a0;
- (id)getDiskName:(struct __DADisk { } *)a0;
- (BOOL)containsValidEACSLayoutWithLayoutType:(int *)a0;
- (id)getAPFSContainers;
- (BOOL)_physicalStoreIsBootedContainer:(id)a0;
- (int)validDiskLayout;
- (struct __DADisk { } *)_getStartupTopDisk:(id)a0;
- (id)volumeNameForDisk:(struct __DADisk { } *)a0;
- (id)getRootDiskFrom:(struct __DADisk { } *)a0;
- (struct __DADisk { } *)getPhysicalContainerFrom:(struct __DADisk { } *)a0;
- (BOOL)diskIsSnapshot:(struct __DADisk { } *)a0;
- (id)getNonAPFSDisks;
- (id)getMountPoint:(struct __DADisk { } *)a0;
- (BOOL)canProceedWithFullFactoryResetWithLayoutType:(int *)a0;
- (BOOL)isBootedFromInternalDisk;
- (BOOL)fileExistsAtMountPoint:(id)a0 withFilesToSearch:(id)a1;
- (id)crawlThroughPartitionsFromAPFSPhysicalDisk:(struct __DADisk { } *)a0 returningIsInvalidLayout:(BOOL *)a1;
- (void)getPartitions:(id)a0 from:(struct __DADisk { } *)a1 efi:(struct __DADisk **)a2 hfs:(struct __DADisk **)a3 msReserved:(struct __DADisk **)a4 msdos:(struct __DADisk **)a5 abt:(struct __DADisk **)a6 cst:(struct __DADisk **)a7 apfs:(struct __DADisk **)a8;
- (id)getChildrenDisksFrom:(struct __DADisk { } *)a0;
- (BOOL)blessCurrentVolume;
- (BOOL)bootedFromSnapshot;

@end
