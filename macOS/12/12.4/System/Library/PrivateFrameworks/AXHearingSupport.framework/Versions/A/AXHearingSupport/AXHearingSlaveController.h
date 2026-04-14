@class NSString, AXDispatchTimer, AXRemoteHearingAidDevice;

@interface AXHearingSlaveController : AXIDCSlaveController <NSNetServiceDelegate, AXHARemoteUpdateProtocol, AXHARemoteControllerProtocol>

@property (retain, nonatomic) AXRemoteHearingAidDevice *localDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL didValidateHIID;
@property (retain, nonatomic) AXDispatchTimer *communicationTimer;

- (void)dealloc;
- (id)init;
- (void)stream:(id)a0 handleEvent:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)device;
- (void)netServiceWillPublish:(id)a0;
- (void)netService:(id)a0 didNotPublish:(id)a1;
- (void)netServiceDidStop:(id)a0;
- (void)netServiceDidPublish:(id)a0;
- (void)resetConnection;
- (void)receivedData:(id)a0;
- (double)searchTimeout;
- (void)updateProperty:(unsigned long long)a0 forDeviceID:(id)a1;
- (void)writeValue:(id)a0 forProperty:(unsigned long long)a1 forDeviceID:(id)a2;
- (BOOL)shouldAcceptConnection;
- (void)openConnectionIfNecessary;
- (void)didCommunicate;
- (BOOL)sendObject:(id)a0 withSendCompletion:(id /* block */)a1;
- (void)validatePairedAid;

@end
