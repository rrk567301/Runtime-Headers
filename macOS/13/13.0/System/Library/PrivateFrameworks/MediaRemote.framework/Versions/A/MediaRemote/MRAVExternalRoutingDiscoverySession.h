@class MRAVEndpoint, MRExternalDevice, MRAVRoutingDiscoverySessionConfiguration;

@interface MRAVExternalRoutingDiscoverySession : MRAVRoutingDiscoverySession {
    unsigned int _discoveryMode;
    MRAVRoutingDiscoverySessionConfiguration *_configuration;
    id _externalDeviceDiscoveryToken;
}

@property (retain, nonatomic) MRAVEndpoint *destination;
@property (retain, nonatomic) MRExternalDevice *externalDevice;

- (void)dealloc;
- (id)description;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (void)setDiscoveryMode:(unsigned int)a0;
- (BOOL)devicePresenceDetected;
- (unsigned int)discoveryMode;
- (id)availableOutputDevices;
- (unsigned int)endpointFeatures;
- (id)availableEndpoints;
- (id)destinationOutputDeviceUID;

@end
