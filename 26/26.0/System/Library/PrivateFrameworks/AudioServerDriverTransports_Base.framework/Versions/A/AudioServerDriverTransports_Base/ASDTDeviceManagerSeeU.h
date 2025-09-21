@class NSMutableSet, ASDTUInt32Property;

@interface ASDTDeviceManagerSeeU : ASDTDeviceManager

@property (nonatomic) BOOL underlyingDevicesArePublished;
@property (retain, nonatomic) NSMutableSet *underlyingDevices;
@property (retain, nonatomic) ASDTUInt32Property *publishUnderlyingDevicesProperty;

- (void).cxx_destruct;
- (void)removeAudioDevice:(id)a0;
- (void)removeAudioDevices:(id)a0;
- (BOOL)addAudioDeviceWithCheck:(id)a0;
- (id)initWithConfig:(id)a0 withDelegate:(id)a1;
- (void)publishDevice:(id)a0;
- (BOOL)setupPublishUnderlyingDevicesProperty;
- (void)updateUnderlyingDeviceVisibility;

@end
