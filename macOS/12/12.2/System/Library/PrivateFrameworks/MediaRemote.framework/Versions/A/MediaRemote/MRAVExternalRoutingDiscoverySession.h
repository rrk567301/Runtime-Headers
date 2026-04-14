@class NSString, MRExternalDevice, MRAVRoutingDiscoverySessionConfiguration, MRAVEndpoint;

@interface MRAVExternalRoutingDiscoverySession : MRAVRoutingDiscoverySession <MREndpointObserver> {
    unsigned int _discoveryMode;
    MRAVRoutingDiscoverySessionConfiguration *_configuration;
}

@property (retain, nonatomic) MRAVEndpoint *destination;
@property (retain, nonatomic) MRExternalDevice *externalDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (unsigned int)discoveryMode;
- (BOOL)devicePresenceDetected;
- (void)setDiscoveryMode:(unsigned int)a0;
- (id)availableOutputDevices;
- (unsigned int)endpointFeatures;
- (void)endpointDidDisconnect:(id)a0;
- (id)availableEndpoints;

@end
