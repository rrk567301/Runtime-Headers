@class NSMapTable;

@interface CBClassicManager : CBManager

@property (readonly, retain, nonatomic) NSMapTable *peers;
@property (readonly, nonatomic) char isInquiryRunning;
@property (readonly) char inquiryState;
@property (readonly) char discoverable;
@property (readonly) char connectable;
@property (readonly) long long powerState;
@property (nonatomic) char testMode;
@property (copy) id /* block */ classicPeerDiscovered;
@property (copy) id /* block */ sdpRecordAddedHandler;
@property (copy) id /* block */ pairingStatusHandler;
@property (copy) id /* block */ connectionStatusHandler;
@property (copy) id /* block */ connectCallback;
@property (copy) id /* block */ disconnectCallback;
@property (copy) id /* block */ serviceAddedHandler;
@property (copy) id /* block */ inquiryServiceAddedHandler;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)addService:(id)a0;
- (id)retrievePairedPeersWithOptions:(id)a0;
- (unsigned int)addServiceWithData:(id)a0;
- (void)alertUserNotificationIsReady:(id)a0;
- (void)cancelPeerConnection:(id)a0;
- (void)cancelPeerConnection:(id)a0 force:(char)a1;
- (void)connectPeer:(id)a0 options:(id)a1;
- (id)getLocalSDPDatabase;
- (id)initWithQueue:(id)a0 options:(id)a1;
- (void)removeServiceHandle:(unsigned int)a0;
- (id)retrievePeerWithAddress:(id)a0;
- (char)secureBluetooth:(char)a0 withAuthData:(id)a1;
- (void)setBTConnectable:(char)a0;
- (void)setBTDiscoverable:(char)a0;
- (char)setBTPowerState:(char)a0;
- (void)startInquiryWithOptions:(id)a0 classicPeerDiscovered:(id /* block */)a1;
- (void)stopInquiry;
- (void)handleMsg:(unsigned short)a0 args:(id)a1;
- (void)addAACPClient:(unsigned short)a0 aacpClientAdded:(id /* block */)a1;
- (void)addService:(id)a0 sdpRecord:(id)a1 sdpRecordAddedHandler:(id /* block */)a2;
- (void)addServiceToInquiryList:(id)a0;
- (void)cancelPeerConnection:(id)a0 options:(id)a1;
- (id)classicPeerWithInfo:(id)a0;
- (void)forEachClassicPeer:(id /* block */)a0;
- (void)handleLocalDeviceStateUpdatedMsg:(id)a0;
- (void)handlePeerConnectionCompleted:(id)a0;
- (void)handlePeerConnectionStateUpdated:(id)a0;
- (void)handlePeerDisconnectionCompleted:(id)a0;
- (void)handlePeerDiscovered:(id)a0;
- (void)handleSDPRecordAdded:(id)a0;
- (void)handleServiceAddedToInquiryList:(id)a0;
- (void)handleServiceAddedToSDP:(id)a0;
- (char)isMsgAllowedAlways:(unsigned short)a0;
- (char)isMsgAllowedWhenOff:(unsigned short)a0;
- (void)orphanClassicPeers;
- (id)peerWithIdentifier:(id)a0;
- (id)peerWithInfo:(id)a0;
- (void)removeAACPClient:(unsigned short)a0;
- (void)removeAllServices;
- (void)removeAllServicesFromInquiryList;
- (void)removeService:(id)a0;
- (void)removeServiceFromInquiryList:(id)a0;

@end
