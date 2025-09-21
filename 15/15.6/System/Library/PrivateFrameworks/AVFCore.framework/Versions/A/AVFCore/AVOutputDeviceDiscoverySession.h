@class NSArray, AVOutputDeviceDiscoverySessionAvailableOutputDevices, AVAudioSession, AVOutputDeviceDiscoverySessionInternal;

@interface AVOutputDeviceDiscoverySession : NSObject {
    AVOutputDeviceDiscoverySessionInternal *_outputDeviceDiscoverySession;
}

@property (readonly) struct OpaqueFigRouteDiscoverer { } *routeDiscoverer;
@property (nonatomic) char onlyDiscoversBluetoothDevices;
@property (nonatomic) long long discoveryMode;
@property (retain, nonatomic) AVAudioSession *targetAudioSession;
@property (readonly, nonatomic) NSArray *availableOutputDevices;
@property (readonly, nonatomic) AVOutputDeviceDiscoverySessionAvailableOutputDevices *availableOutputDevicesObject;
@property (readonly, nonatomic) char devicePresenceDetected;

+ (void)initialize;
+ (id)outputDeviceDiscoverySessionFactory;

- (void)dealloc;
- (id)init;
- (id)impl;
- (id)initWithDeviceFeatures:(unsigned long long)a0;
- (id)initWithOutputDeviceDiscoverySessionImpl:(id)a0;
- (void)outputDeviceDiscoverySessionImpl:(id)a0 didExpireWithReplacement:(id)a1;
- (void)outputDeviceDiscoverySessionImplDidChangeAvailableOutputDeviceGroups:(id)a0;
- (void)outputDeviceDiscoverySessionImplDidChangeAvailableOutputDevices:(id)a0;
- (void)setDiscoveryMode:(long long)a0 forClientIdentifiers:(id)a1;

@end
