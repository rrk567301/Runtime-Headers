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

- (unsigned int)deviceSubtype;
- (id)roomID;
- (BOOL)containsUID:(id)a0;
- (void)setVolume:(float)a0 details:(id)a1;
- (void)adjustVolume:(long long)a0 details:(id)a1;
- (id)roomName;
- (unsigned int)clusterType;
- (BOOL)isVolumeMuted;
- (id)clusterComposition;
- (float)volume;
- (unsigned int)deviceType;
- (unsigned int)volumeCapabilities;
- (id)parentUID;
- (id)localizedName;
- (id)primaryID;
- (id)name;
- (id)uid;
- (void).cxx_destruct;
- (BOOL)isPickable;
- (id)debugName;
- (void)setVolumeMuted:(BOOL)a0 details:(id)a1;
- (id)modelID;
- (id)initWithOutputDevice:(id)a0 memberOutputDevices:(id)a1;

@end
