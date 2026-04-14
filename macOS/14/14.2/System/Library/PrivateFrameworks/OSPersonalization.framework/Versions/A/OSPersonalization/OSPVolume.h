@class NSString, LPAPFSVolume;

@interface OSPVolume : NSObject

@property (retain) NSString *mountpoint;
@property (retain) NSString *prebootMountpoint;
@property (retain) NSString *volumeGroupUUID;
@property BOOL isAPFS;
@property BOOL isAuthenticatedRootVolume;
@property (retain) LPAPFSVolume *prebootVolume;

- (id)description;
- (void).cxx_destruct;
- (BOOL)_checkIsAuthenticatedRootVolume:(id)a0 isSnapshot:(BOOL)a1;
- (id)initDummyARVVolumeWithPrebootMountpoint:(id)a0 volumeGroupUUID:(id)a1;
- (id)initDummyVolumeWithMountpoint:(id)a0;
- (id)initWithMountpoint:(id)a0;
- (BOOL)mountPrebootWithError:(id *)a0;
- (BOOL)unmountPreboot;

@end
