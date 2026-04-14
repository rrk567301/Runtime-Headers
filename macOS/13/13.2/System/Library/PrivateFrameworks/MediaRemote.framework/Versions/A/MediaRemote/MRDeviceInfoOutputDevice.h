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
- (long long)hostDeviceClass;
- (BOOL)isRemoteControllable;
- (BOOL)isGroupable;
- (BOOL)isLocalDevice;
- (BOOL)supportsMultiplayer;
- (BOOL)shouldBeLocallyHosted;
- (id)initWithDeviceInfo:(id)a0;
- (id)avOutputDevice;

@end
