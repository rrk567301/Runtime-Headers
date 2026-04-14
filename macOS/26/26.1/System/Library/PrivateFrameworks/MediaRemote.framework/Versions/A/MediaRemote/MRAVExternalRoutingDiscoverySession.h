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
- (unsigned int)discoveryMode;
- (id)availableEndpoints;
- (id)availableOutputDevices;
- (unsigned int)endpointFeatures;
- (void)setDiscoveryMode:(unsigned int)a0;
- (id)initWithConfiguration:(id)a0;
- (id)description;
- (void)dealloc;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)destinationOutputDeviceUID;

@end
