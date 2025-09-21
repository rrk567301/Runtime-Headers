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
@property (readonly) char isDataVolume;
@property (readonly) char isLocked;
@property (readonly) char isMounted;
@property (readonly) char isPrebootVolume;
@property (readonly) char isSystemVolume;
@property (readonly) NSArray *dataVolumes;
@property (readonly) NSURL *macOSPrebootURL;
@property (readonly) NSString *passwordHint;
@property (readonly) LFVolume *prebootVolume;
@property (readonly) LFVolume *systemVolume;
@property (readonly) NSString *volumeGroupUUID;
@property (readonly) NSString *volumeName;
@property (readonly) NSURL *volumeURL;
@property (readonly) NSString *BSDName;

+ (id)volumeWithUUID:(id)a0;
+ (id)_systemVolumeFromPlist;
+ (id)_volumeUUIDFromSysctlbyname:(const char *)a0;
+ (void)mountPrebootVolume;

- (void)dealloc;
- (id)copy;
- (id)description;
- (void).cxx_destruct;
- (id)initWithUUID:(id)a0;
- (char)unmount;
- (id)_apfs;
- (struct __DADisk { } *)_diskRef;
- (id)_manager;
- (char)isVolumeGroup;
- (char)mount;
- (int)unlockWithUser:(id)a0 andPassword:(id)a1 unlockOnly:(char)a2;
- (int)verifyPassword:(id)a0 forUser:(id)a1;

@end
