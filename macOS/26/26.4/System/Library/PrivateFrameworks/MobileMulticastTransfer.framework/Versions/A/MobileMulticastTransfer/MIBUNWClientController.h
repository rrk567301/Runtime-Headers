@class MIBUNWServerDevice, NSString, MIBUNANSubscriber, MIBUMulticastSocket, NSDate, NSNumber, NSObject;
@protocol MIBUNWClientControllerDelegate, MIBUDataCollectorProtocol, MIBUPacketConsumable, OS_dispatch_source, OS_dispatch_queue, OS_dispatch_semaphore;

@interface MIBUNWClientController : NSObject <MIBUMulticastSocketDelegate, MIBUNWServerDeviceDelegate, MIBUNANSubscriberDelegate> {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSObject<OS_dispatch_source> *_progressTimer;
    id<MIBUPacketConsumable> _packetConsumer;
    MIBUNWServerDevice *_nanUnicastDevice;
    MIBUMulticastSocket *_multicastSocket;
    NSObject<OS_dispatch_semaphore> *_multicastSocketSem;
    MIBUNANSubscriber *_nanSubscriber;
    NSDate *_startTime;
    unsigned long long _packetExpected;
    unsigned long long _packetReceived;
    NSString *_hostAddress;
    NSString *_hostPort;
    NSString *_groupAddress;
    NSString *_groupPort;
    id<MIBUNWClientControllerDelegate> _delegate;
    id<MIBUDataCollectorProtocol> _dataCollector;
}

@property (readonly, copy, nonatomic) NSNumber *progress;
@property (readonly, nonatomic) unsigned long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stop;
- (void).cxx_destruct;
- (void)start;
- (void)_stop;
- (void)_start;
- (void)_handlePacketConsumerCompletion;
- (void)_activateProgressTimer;
- (void)_calculateEffectiveBandwidth;
- (void)_createNANTCPConnectionUsingInterface:(id)a0;
- (void)_deactivateProgressTimer;
- (void)_disableFirewall;
- (void)_handleInboundPackets:(id)a0 arrivalTime:(id)a1;
- (void)_handleProgressTimerTick;
- (void)_invalidateNANTCPConnection;
- (void)_pingThroughMulticast:(id)a0;
- (void)_receivedVeryFirstPacketArray;
- (void)_startMulticastReceiverUsingInterface:(id)a0;
- (void)_stopMulticast;
- (void)_stopMulticastReceiver;
- (void)_updateControllerProgress;
- (id)initWithPacketConsumer:(id)a0 hostPort:(id)a1 groupAddress:(id)a2 groupPort:(id)a3 serviceName:(id)a4 countryCode:(id)a5 channelName:(unsigned long long)a6 band:(unsigned long long)a7 bandwidth:(unsigned long long)a8 rateAdapter:(BOOL)a9 multicastKeysBlob:(id)a10 controllerDelegate:(id)a11 dataCollector:(id)a12;
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
- (void)stopMulticast;

@end
