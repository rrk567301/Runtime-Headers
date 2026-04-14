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

- (unsigned int)endpointFeatures;
- (unsigned int)discoveryMode;
- (id)availableOutputDevices;
- (void)setDiscoveryMode:(unsigned int)a0;
- (id)debugDescription;
- (BOOL)devicePresenceDetected;
- (void).cxx_destruct;
- (id)availableEndpoints;
- (id)description;
- (id)initWithConfiguration:(id)a0;
- (void)dealloc;
- (id)destinationOutputDeviceUID;

@end
