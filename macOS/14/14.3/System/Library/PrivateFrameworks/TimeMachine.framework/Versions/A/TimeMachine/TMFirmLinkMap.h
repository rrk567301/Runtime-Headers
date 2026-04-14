@class NSString, NSArray;

@interface TMFirmLinkMap : NSObject {
    struct _fakelink_group { } *_group;
}

@property (class, readonly, retain) TMFirmLinkMap *currentRootFirmLinkMap;

@property (readonly, copy) NSString *systemVolumeMountPoint;
@property (readonly, copy) NSString *dataVolumeMountPoint;
@property (readonly, copy) NSArray *virtualLinksOnSystemVolume;

- (void)dealloc;
- (void).cxx_destruct;
- (id)absolutePathOnDataVolumeByResolvingFirmLinkInPath:(id)a0;
- (id)firmLinkedPathByUnresolvingAbsolutePathOnDataVolume:(id)a0;
- (id)initWithMountPoint:(id)a0;
- (id)initWithSystemMountPoint:(id)a0 dataMountPoint:(id)a1 firmLinkManifest:(id)a2 syntheticManifest:(id)a3;

@end
