@class NSArray;

@interface MRAVClusterOutputDevice : MRAVConcreteOutputDevice

@property (readonly, nonatomic) NSArray *memberOutputDevices;

- (void).cxx_destruct;
- (id)uid;
- (unsigned int)deviceType;
- (unsigned int)deviceSubtype;
- (id)clusterComposition;
- (id)primaryID;
- (BOOL)isLocalDevice;
- (id)initWithPrimaryOutputDevice:(id)a0 members:(id)a1 sourceInfo:(id)a2;
- (id)initWithDevices:(id)a0 sourceInfo:(id)a1;
- (BOOL)anyDeviceSupportsMultiplayer;

@end
