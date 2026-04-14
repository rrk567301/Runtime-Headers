@class MIBUNWServerDevice, NSString, MIBUNANSubscriber, MIBUMulticastSocket, NSDate, NSNumber, NSObject;
@protocol MIBUNWClientControllerDelegate, MIBUDataCollectorProtocol, MIBUPacketConsumable, OS_dispatch_source, OS_dispatch_queue, OS_dispatch_semaphore;

@interface MIBUNWClientController : NSObject <MIBUMulticastSocketDelegate, MIBUNWServerDeviceDelegate, MIBUNANSubscriberDelegate> {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSObject<OS_dispatch_queue> *_timerQueue;
    NSObject<OS_dispatch_source> *_receiveTimer;
    id<MIBUPacketConsumable> _packetConsumer;
    MIBUNWServerDevice *_nanUnicastDevice;
    MIBUNWServerDevice *_tcpUnicastDevice;
    MIBUMulticastSocket *_multicastSocket;
    NSObject<OS_dispatch_semaphore> *_multicastSocketSem;
    NSObject<OS_dispatch_semaphore> *_checkoutSem;
    MIBUNANSubscriber *_nanSubscriber;
    NSDate *_startTime;
    unsigned long long _packetExpected;
    unsigned long long _packetReceived;
    NSString *_hostAddress;
    NSString *_hostPort;
    NSString *_groupAddress;
    NSString *_groupPort;
    NSNumber *_tcpPingInterval;
    id<MIBUNWClientControllerDelegate> _delegate;
    id<MIBUDataCollectorProtocol> _dataCollector;
}

@property (readonly, nonatomic) NSNumber *progress;
@property (readonly, nonatomic) unsigned long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_stop;
- (void)_start;
- (void)start;
- (void)stop;
- (void).cxx_destruct;
- (void)_handlePacketConsumerCompletion;
- (void)_resetReceiveTimerWithInterval:(unsigned long long)a0;
- (void)_stopMulticast:(BOOL)a0;
- (void)_activateReceiveTimer;
- (void)_calculateEffectiveBandwidth;
- (void)_checkOutWithError:(id)a0;
- (void)_createNANTCPConnectionUsingInterface:(id)a0;
- (void)_createTCPConnectionWithAddr:(id)a0 andPort:(id)a1;
- (void)_disableFirewall;
- (void)_handleInboundPackets:(id)a0 arrivalTime:(id)a1;
- (void)_handleReceiveTimerTick;
- (void)_invalidateNANTCPConnection;
- (void)_receivedVeryFirstPacketArray;
- (void)_startMulticastReceiverUsingInterface:(id)a0;
- (void)_stopMulticastReceiver;
- (void)_updateControllerProgress;
- (void)checkOutWithError:(id)a0;
- (id)initWithPacketConsumer:(id)a0 hostPort:(id)a1 tcpAddress:(id)a2 tcpPort:(id)a3 groupAddress:(id)a4 groupPort:(id)a5 interfaceName:(id)a6 serviceName:(id)a7 countryCode:(id)a8 channelName:(unsigned long long)a9 band:(unsigned long long)a10 bandwidth:(unsigned long long)a11 enableRateAdapter:(BOOL)a12 controllerDelegate:(id)a13 dataCollector:(id)a14;
- (void)multicastSocket:(id)a0 didReceivePackets:(id)a1 atTime:(id)a2;
- (void)multicastSocketDidStart:(id)a0;
- (void)multicastSocketDidStop:(id)a0 withError:(id)a1;
- (void)nanSubscriber:(id)a0 didReceiveData:(id)a1;
- (void)nanSubscriberDetectedMulticastError:(id)a0;
- (void)nanSubscriberDidStart:(id)a0 withPeerIPAddress:(id)a1 usingInterface:(id)a2 forRetry:(BOOL)a3;
- (void)nanSubscriberDidStop:(id)a0 withError:(id)a1 willRetry:(BOOL)a2;
- (void)nanSubscriberDidTerminateDataSession:(id)a0;
- (void)pingThroughMulticast:(id)a0;
- (void)serverDeviceDidCheckIn:(id)a0;
- (void)serverDeviceDidCheckOut:(id)a0;
- (void)serverDeviceDidConnect:(id)a0;
- (void)serverDeviceDidDisconnect:(id)a0;
- (void)setPingInterval:(id)a0;
- (void)stopMulticast;

@end
