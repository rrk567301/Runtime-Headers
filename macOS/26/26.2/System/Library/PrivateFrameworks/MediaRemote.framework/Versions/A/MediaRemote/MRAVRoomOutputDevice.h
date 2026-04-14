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

- (id)localizedName;
- (id)modelID;
- (id)clusterComposition;
- (id)debugName;
- (unsigned int)deviceType;
- (id)roomName;
- (BOOL)containsUID:(id)a0;
- (unsigned int)volumeCapabilities;
- (id)uid;
- (id)roomID;
- (id)parentUID;
- (void)setVolume:(float)a0 details:(id)a1;
- (BOOL)isVolumeMuted;
- (void).cxx_destruct;
- (BOOL)isPickable;
- (float)volume;
- (unsigned int)deviceSubtype;
- (unsigned int)clusterType;
- (void)adjustVolume:(long long)a0 details:(id)a1;
- (id)name;
- (void)setVolumeMuted:(BOOL)a0 details:(id)a1;
- (id)primaryID;
- (id)initWithOutputDevice:(id)a0 memberOutputDevices:(id)a1;

@end
