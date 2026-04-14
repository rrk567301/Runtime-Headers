@class MRAVOutputDevice, MRDeviceInfo;

@interface MRDeviceInfoOutputDevice : MRAVOutputDevice

@property (nonatomic) BOOL exporting;
@property (retain, nonatomic) MRAVOutputDevice *fallbackOutputDevice;
@property (readonly, nonatomic) MRDeviceInfo *deviceInfo;

- (id)name;
- (void).cxx_destruct;
- (id)uid;
- (float)volume;
- (id)groupID;
- (unsigned int)deviceType;
- (unsigned int)deviceSubtype;
- (id)modelID;
- (unsigned int)clusterType;
- (id)logicalDeviceID;
- (BOOL)canAccessAppleMusic;
- (BOOL)canAccessRemoteAssets;
- (BOOL)canAccessiCloudMusicLibrary;
- (unsigned long long)configuredClusterSize;
- (BOOL)groupContainsGroupLeader;
- (BOOL)isGroupLeader;
- (BOOL)supportsBufferedAirPlay;
- (long long)hostDeviceClass;
- (id)clusterCompositionOutputDevices;
- (id)avOutputDevice;
- (id)clusterComposition;
- (id)clusterCompositionMembers;
- (id)initWithDeviceInfo:(id)a0;
- (id)initWithDeviceInfo:(id)a0 fallbackOutputDevice:(id)a1 forExporting:(BOOL)a2;
- (id)initWithDeviceInfo:(id)a0 forExporting:(BOOL)a1;
- (BOOL)isGroupable;
- (BOOL)isLocalDevice;
- (BOOL)isProxyGroupPlayer;
- (BOOL)isRemoteControllable;
- (BOOL)isVolumeMuted;
- (BOOL)parentGroupContainsDiscoverableLeader;
- (BOOL)shouldBeLocallyHosted;
- (BOOL)supportsMultiplayer;
- (unsigned int)volumeCapabilities;

@end
