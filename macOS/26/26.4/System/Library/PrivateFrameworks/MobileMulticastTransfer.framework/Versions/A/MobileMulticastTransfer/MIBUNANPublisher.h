@class NSString, WiFiAwarePublishConfiguration, WiFiAwarePublisher, NSMutableDictionary, NSMutableOrderedSet, NSTimer;
@protocol MIBUNANPublisherDelegate;

@interface MIBUNANPublisher : NSObject <WiFiAwarePublisherDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _unfairLock;
    unsigned long long _publisherState;
    id<MIBUNANPublisherDelegate> _publisherDelegate;
    WiFiAwarePublishConfiguration *_nanConfiguration;
    WiFiAwarePublisher *_nanPublisher;
    NSMutableDictionary *_dataSessionMapping;
    NSMutableDictionary *_dataSessionTimer;
    NSMutableDictionary *_peerLastContact;
    NSMutableOrderedSet *_multicastPeers;
    NSTimer *_peerCleanUpTimer;
    unsigned long long _retryCount;
}

@property (nonatomic) unsigned long long retryLimit;
@property (nonatomic) unsigned long long peerTimeout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stop;
- (void).cxx_destruct;
- (void)start;
- (void)publisher:(id)a0 terminatedWithReason:(long long)a1;
- (void)publisher:(id)a0 dataConfirmedForHandle:(id)a1 localInterfaceIndex:(unsigned int)a2 serviceSpecificInfo:(id)a3;
- (void)publisher:(id)a0 dataTerminatedForHandle:(id)a1 reason:(long long)a2;
- (void)publisher:(id)a0 detectedMulticastError:(long long)a1 fromMulticastReceiver:(id)a2;
- (void)publisher:(id)a0 failedToStartWithError:(long long)a1;
- (void)publisher:(id)a0 getKeysBlobForMulticastSession:(id)a1;
- (void)publisher:(id)a0 receivedDataBlobForMulticastSession:(id)a1 fromPeer:(id)a2;
- (void)publisher:(id)a0 receivedMessage:(id)a1 fromSubscriberID:(unsigned char)a2 subscriberAddress:(id)a3;
- (void)publisherStarted:(id)a0;
- (void)_startMulticastPeerCleanUpTimer;
- (void)_startPublisher;
- (void)_handleFailureDueToError:(id)a0;
- (void)_handleMulticastPeerCleanUpTimerFired;
- (void)_handleNANDataSessionExpiredForPeer:(id)a0;
- (void)_multicastData:(id)a0 withCompletion:(id /* block */)a1;
- (void)_stopMulticastPeerCleanUpTimer;
- (void)_stopPublisherForReason:(id)a0;
- (void)_terminateDataSessionWithPeer:(id)a0 withCompletion:(id /* block */)a1;
- (void)_terminateMulticastSessionWithPeer:(id)a0 withCompletion:(id /* block */)a1;
- (id)initWithServiceName:(id)a0 groupAddress:(id)a1 countryCode:(id)a2 channelName:(unsigned long long)a3 band:(unsigned long long)a4 bandwidth:(unsigned long long)a5 rateAdapter:(BOOL)a6 multicastSecurity:(BOOL)a7 publisherDelegate:(id)a8;
- (void)multicastData:(id)a0 withCompletion:(id /* block */)a1;
- (void)terminateDataSessionWithPeer:(id)a0 withCompletion:(id /* block */)a1;
- (void)terminateMulticastSessionWithPeer:(id)a0 withCompletion:(id /* block */)a1;

@end
