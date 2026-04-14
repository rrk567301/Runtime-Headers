@class MRAVEndpoint, MRExternalDevice, MRAVRoutingDiscoverySessionConfiguration;
@protocol MRActivityTracker;

@interface MRAVExternalRoutingDiscoverySession : MRAVRoutingDiscoverySession {
    unsigned int _discoveryMode;
    MRAVRoutingDiscoverySessionConfiguration *_configuration;
    id _externalDeviceDiscoveryToken;
    id<MRActivityTracker> _discoveryTracker;
}

@property (retain, nonatomic) MRAVEndpoint *destination;
@property (retain, nonatomic) MRExternalDevice *externalDevice;

- (BOOL)devicePresenceDetected;
- (id)availableOutputDevices;
- (void)setDiscoveryMode:(unsigned int)a0;
- (id)debugDescription;
- (unsigned int)discoveryMode;
- (unsigned int)endpointFeatures;
- (id)availableEndpoints;
- (id)initWithConfiguration:(id)a0;
- (id)destinationOutputDeviceUID;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;

@end
