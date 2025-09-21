@class NSString, LPStaticAPFSVolume;

@interface OSPVolume : NSObject

@property (retain) NSString *mountpoint;
@property (retain) NSString *prebootMountpoint;
@property (retain) NSString *volumeGroupUUID;
@property char isAPFS;
@property char isAuthenticatedRootVolume;
@property (retain) LPStaticAPFSVolume *prebootVolume;

- (id)description;
- (void).cxx_destruct;
- (char)_checkIsAuthenticatedRootVolume:(id)a0 isSnapshot:(char)a1;
- (id)initDummyARVVolumeWithPrebootMountpoint:(id)a0 volumeGroupUUID:(id)a1;
- (id)initDummyVolumeWithMountpoint:(id)a0;
- (id)initWithMountpoint:(id)a0;
- (char)mountPrebootWithError:(id *)a0;
- (char)unmountPreboot;

@end
