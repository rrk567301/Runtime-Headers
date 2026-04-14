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
- (id)availableEndpoints;
- (id)availableOutputDevices;
- (void)setDiscoveryMode:(unsigned int)a0;
- (unsigned int)discoveryMode;
- (BOOL)devicePresenceDetected;
- (id)debugDescription;
- (id)initWithConfiguration:(id)a0;
- (id)destinationOutputDeviceUID;
- (id)description;
- (void).cxx_destruct;
- (void)dealloc;

@end
