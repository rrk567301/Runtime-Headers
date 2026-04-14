@class AVInputDeviceDiscoverySessionInternal, NSArray, AVInputDevice, NSNumber;

@interface AVInputDeviceDiscoverySession : NSObject {
    AVInputDeviceDiscoverySessionInternal *_inputDeviceDiscoverySession;
}

@property (readonly) struct OpaqueFigRouteDiscoverer { } *routeDiscoverer;
@property (nonatomic) long long discoveryMode;
@property (retain, nonatomic) NSNumber *audioSessionID;
@property (readonly, nonatomic) NSArray *availableInputDevices;
@property (readonly, nonatomic) BOOL devicePresenceDetected;
@property (readonly, nonatomic) AVInputDevice *fallbackInputDevice;

+ (void)initialize;

- (id)impl;
- (void)dealloc;
- (void)setDiscoveryMode:(long long)a0 forClientIdentifiers:(id)a1;
- (id)initWithDeviceFeatures:(unsigned long long)a0;
- (id)initWithInputDeviceDiscoverySessionImpl:(id)a0;
- (void)inputDeviceDiscoverySessionImpl:(id)a0 didExpireWithReplacement:(id)a1;
- (void)inputDeviceDiscoverySessionImplDidChangeAvailableInputDevices:(id)a0;

@end
