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

- (unsigned int)discoveryMode;
- (BOOL)devicePresenceDetected;
- (id)debugDescription;
- (void)setDiscoveryMode:(unsigned int)a0;
- (void)dealloc;
- (id)availableEndpoints;
- (id)availableOutputDevices;
- (unsigned int)endpointFeatures;
- (id)destinationOutputDeviceUID;
- (id)description;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;

@end
