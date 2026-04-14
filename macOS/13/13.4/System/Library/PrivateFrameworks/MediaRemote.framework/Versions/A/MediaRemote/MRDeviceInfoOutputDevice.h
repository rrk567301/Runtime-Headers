@class MRDeviceInfo;

@interface MRDeviceInfoOutputDevice : MRAVOutputDevice

@property (readonly, nonatomic) MRDeviceInfo *deviceInfo;

- (id)name;
- (void).cxx_destruct;
- (id)uid;
- (id)groupID;
- (unsigned int)deviceType;
- (unsigned int)deviceSubtype;
- (id)modelID;
- (id)logicalDeviceID;
- (BOOL)canAccessAppleMusic;
- (BOOL)canAccessRemoteAssets;
- (BOOL)canAccessiCloudMusicLibrary;
- (long long)hostDeviceClass;
- (id)avOutputDevice;
- (id)initWithDeviceInfo:(id)a0;
- (BOOL)isGroupable;
- (BOOL)isLocalDevice;
- (BOOL)isRemoteControllable;
- (BOOL)shouldBeLocallyHosted;
- (BOOL)supportsMultiplayer;

@end
