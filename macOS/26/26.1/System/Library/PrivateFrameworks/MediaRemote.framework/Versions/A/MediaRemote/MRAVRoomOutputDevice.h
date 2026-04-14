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

- (id)roomID;
- (unsigned int)clusterType;
- (void)setVolume:(float)a0 details:(id)a1;
- (id)roomName;
- (id)clusterComposition;
- (BOOL)isPickable;
- (unsigned int)deviceSubtype;
- (unsigned int)volumeCapabilities;
- (void)setVolumeMuted:(BOOL)a0 details:(id)a1;
- (BOOL)containsUID:(id)a0;
- (id)uid;
- (void)adjustVolume:(long long)a0 details:(id)a1;
- (unsigned int)deviceType;
- (id)modelID;
- (BOOL)isVolumeMuted;
- (id)localizedName;
- (id)parentUID;
- (id)primaryID;
- (id)debugName;
- (float)volume;
- (void).cxx_destruct;
- (id)name;
- (id)initWithOutputDevice:(id)a0 memberOutputDevices:(id)a1;

@end
