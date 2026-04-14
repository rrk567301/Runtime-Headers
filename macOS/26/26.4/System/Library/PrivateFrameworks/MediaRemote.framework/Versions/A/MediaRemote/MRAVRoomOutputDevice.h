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

- (unsigned int)volumeCapabilities;
- (unsigned int)deviceSubtype;
- (id)uid;
- (id)roomID;
- (unsigned int)clusterType;
- (id)clusterComposition;
- (id)name;
- (float)volume;
- (id)roomName;
- (void)setVolume:(float)a0 details:(id)a1;
- (BOOL)containsUID:(id)a0;
- (void)setVolumeMuted:(BOOL)a0 details:(id)a1;
- (void)adjustVolume:(long long)a0 details:(id)a1;
- (unsigned int)deviceType;
- (BOOL)isVolumeMuted;
- (id)modelID;
- (BOOL)isPickable;
- (void).cxx_destruct;
- (id)parentUID;
- (id)debugName;
- (id)localizedName;
- (id)primaryID;
- (id)initWithOutputDevice:(id)a0 memberOutputDevices:(id)a1;

@end
