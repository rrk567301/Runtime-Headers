@class MRAVConcreteOutputDevice, NSArray, MRAVOutputDevice, NSString;

@interface MRAVRoomOutputDevice : MRAVOutputDevice {
    NSArray *_clusterComposition;
    NSString *_uid;
}

@property (readonly, nonatomic) MRAVOutputDevice *outputDevice;
@property (readonly, nonatomic) MRAVConcreteOutputDevice *concreteOutputDevice;
@property (readonly, nonatomic) MRAVOutputDevice *roomMemberOutputDevice;
@property (readonly, nonatomic) NSArray *roomMemberOutputDevices;
@property (readonly, nonatomic) NSString *label;

+ (id)calculateOutputDeviceIDFromOutputDeviceID:(id)a0 withRoomID:(id)a1;

- (id)roomName;
- (unsigned int)volumeCapabilities;
- (id)uid;
- (unsigned int)deviceSubtype;
- (id)roomID;
- (BOOL)isPickable;
- (void)setVolumeMuted:(BOOL)a0 details:(id)a1;
- (void)adjustVolume:(long long)a0 details:(id)a1;
- (unsigned int)deviceType;
- (void)setVolume:(float)a0 details:(id)a1;
- (id)clusterComposition;
- (id)debugName;
- (id)parentUID;
- (float)volume;
- (BOOL)isVolumeMuted;
- (BOOL)containsUID:(id)a0;
- (id)primaryID;
- (id)modelID;
- (id)name;
- (id)localizedName;
- (unsigned int)clusterType;
- (void).cxx_destruct;
- (id)initWithOutputDevice:(id)a0 memberOutputDevices:(id)a1;

@end
