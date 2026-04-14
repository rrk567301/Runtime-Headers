@class DMManager, NSString, DMAPFS, NSURL, NSArray;

@interface LFVolume : NSObject

@property (class, readonly) LFVolume *systemVolume;

@property (retain) NSString *uuid;
@property struct __DASession { } *DASession;
@property (retain) DMManager *DMManager;
@property (retain) DMAPFS *DMAPFS;
@property struct __DADisk { } *apfsDiskRef;
@property (retain) NSURL *prebootURL;
@property (retain) NSString *volumeGroupUUIDInternal;
@property long long isPrebootVolumeFlag;
@property long long isDataVolumeFlag;
@property long long isSystemVolumeFlag;
@property long long isVolumeGroupFlag;
@property (readonly) BOOL isDataVolume;
@property (readonly) BOOL isLocked;
@property (readonly) BOOL isMounted;
@property (readonly) BOOL isPrebootVolume;
@property (readonly) BOOL isSystemVolume;
@property (readonly) NSArray *dataVolumes;
@property (readonly) NSURL *macOSPrebootURL;
@property (readonly) NSString *passwordHint;
@property (readonly) LFVolume *prebootVolume;
@property (readonly) LFVolume *systemVolume;
@property (readonly) NSString *volumeGroupUUID;
@property (readonly) NSString *volumeName;
@property (readonly) NSURL *volumeURL;
@property (readonly) NSString *BSDName;

+ (id)_systemVolumeFromPlist;
+ (void)mountPrebootVolume;
+ (id)_volumeUUIDFromSysctlbyname:(const char *)a0;
+ (id)volumeWithUUID:(id)a0;

- (void)dealloc;
- (id)copy;
- (id)description;
- (id)initWithUUID:(id)a0;
- (id)_manager;
- (id)_apfs;
- (struct __DADisk { } *)_diskRef;
- (BOOL)isVolumeGroup;
- (BOOL)mount;
- (BOOL)unmount;
- (int)unlockWithUser:(id)a0 andPassword:(id)a1 unlockOnly:(BOOL)a2;

@end
