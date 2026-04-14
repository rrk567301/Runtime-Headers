@class MRDeviceInfo;

@interface MRDeviceInfoOutputDevice : MRAVOutputDevice

@property (readonly, nonatomic) MRDeviceInfo *deviceInfo;

- (id)name;
- (void).cxx_destruct;
- (id)uid;
- (unsigned int)deviceType;
- (id)groupID;
- (unsigned int)deviceSubtype;
- (id)modelID;
- (BOOL)canAccessRemoteAssets;
- (BOOL)canAccessAppleMusic;
- (BOOL)canAccessiCloudMusicLibrary;
- (id)logicalDeviceID;
- (BOOL)supportsMultiplayer;
- (BOOL)isRemoteControllable;
- (BOOL)isLocalDevice;
- (long long)hostDeviceClass;
- (BOOL)isGroupable;
- (BOOL)shouldBeLocallyHosted;
- (id)initWithDeviceInfo:(id)a0;
- (id)avOutputDevice;

@end
