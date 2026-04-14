@class WiFiAwareSubscribeConfiguration, NSString, WiFiAwareSubscriber, WiFiAwareDataSession;
@protocol MIBUDataCollectorProtocol, MIBUNANSubscriberDelegate;

@interface MIBUNANSubscriber : NSObject <WiFiAwareSubscriberDelegate, WiFiAwareDataSessionDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _unfairLock;
    unsigned long long _subscriberState;
    id<MIBUNANSubscriberDelegate> _subscriberDelegate;
    WiFiAwareSubscribeConfiguration *_nanConfiguration;
    WiFiAwareSubscriber *_nanSubscriber;
    WiFiAwareDataSession *_dataSession;
    unsigned long long _retryCount;
    id<MIBUDataCollectorProtocol> _dataCollector;
}

@property (nonatomic) unsigned long long retryLimit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)start;
- (void)stop;
- (void).cxx_destruct;
- (void)dataSession:(id)a0 confirmedForPeerDataAddress:(id)a1 serviceSpecificInfo:(id)a2;
- (void)dataSession:(id)a0 failedToStartWithError:(long long)a1;
- (void)dataSession:(id)a0 receivedControlDataAddress:(id)a1 serviceSpecificInfo:(id)a2 onInterfaceIndex:(unsigned int)a3;
- (void)dataSession:(id)a0 terminatedWithReason:(long long)a1;
- (void)dataSessionRequestStarted:(id)a0;
- (void)subscriber:(id)a0 detectedMulticastError:(long long)a1 fromMulticastSender:(id)a2;
- (void)subscriber:(id)a0 failedToStartWithError:(long long)a1;
- (void)subscriber:(id)a0 lostDiscoveryResultForPublishID:(unsigned char)a1 address:(id)a2;
- (void)subscriber:(id)a0 receivedDataBlobForMulticastSession:(id)a1 fromPeer:(id)a2;
- (void)subscriber:(id)a0 receivedDiscoveryResult:(id)a1;
- (void)subscriber:(id)a0 terminatedWithReason:(long long)a1;
- (void)subscriberStarted:(id)a0;
- (void)sendData:(id)a0 withCompletion:(id /* block */)a1;
- (void)_createDataSessionWithDiscoveryResult:(id)a0;
- (void)_getRSSIofNAN:(id)a0;
- (void)_handleFailureDueToError:(id)a0;
- (void)_sendData:(id)a0 withCompletion:(id /* block */)a1;
- (void)_startSubscriber;
- (void)_stopSubscriberForReason:(id)a0;
- (id)initWithServiceName:(id)a0 groupAddress:(id)a1 groupPort:(id)a2 countryCode:(id)a3 channelName:(unsigned long long)a4 band:(unsigned long long)a5 bandwidth:(unsigned long long)a6 enableRateAdapter:(BOOL)a7 subscriberDelegate:(id)a8 dataCollector:(id)a9;

@end
