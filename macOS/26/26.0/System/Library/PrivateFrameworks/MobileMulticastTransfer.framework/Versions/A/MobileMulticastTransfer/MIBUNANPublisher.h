@class NSString, WiFiAwarePublishConfiguration, WiFiAwarePublisher, NSMutableDictionary;
@protocol MIBUNANPublisherDelegate;

@interface MIBUNANPublisher : NSObject <WiFiAwarePublisherDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _unfairLock;
    unsigned long long _publisherState;
    id<MIBUNANPublisherDelegate> _publisherDelegate;
    WiFiAwarePublishConfiguration *_nanConfiguration;
    WiFiAwarePublisher *_nanPublisher;
    NSMutableDictionary *_dataSessionMapping;
    NSMutableDictionary *_dataSessionTimer;
    unsigned long long _retryCount;
}

@property (nonatomic) unsigned long long retryLimit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)start;
- (void)stop;
- (void).cxx_destruct;
- (void)publisher:(id)a0 terminatedWithReason:(long long)a1;
- (void)publisher:(id)a0 dataConfirmedForHandle:(id)a1 localInterfaceIndex:(unsigned int)a2 serviceSpecificInfo:(id)a3;
- (void)publisher:(id)a0 dataTerminatedForHandle:(id)a1 reason:(long long)a2;
- (void)publisher:(id)a0 detectedMulticastError:(long long)a1 fromMulticastReceiver:(id)a2;
- (void)publisher:(id)a0 failedToStartWithError:(long long)a1;
- (void)publisher:(id)a0 receivedDataBlobForMulticastSession:(id)a1 fromPeer:(id)a2;
- (void)publisher:(id)a0 receivedMessage:(id)a1 fromSubscriberID:(unsigned char)a2 subscriberAddress:(id)a3;
- (void)publisherStarted:(id)a0;
- (void)_startPublisher;
- (void)_handleFailureDueToError:(id)a0;
- (void)_handleNANDataSessionExpiredForPeer:(id)a0;
- (void)_multicastData:(id)a0 withCompletion:(id /* block */)a1;
- (void)_stopPublisherForReason:(id)a0;
- (void)_terminateDataSessionWithPeer:(id)a0 withCompletion:(id /* block */)a1;
- (id)initWithServiceName:(id)a0 groupAddress:(id)a1 groupPort:(id)a2 countryCode:(id)a3 channelName:(unsigned long long)a4 band:(unsigned long long)a5 bandwidth:(unsigned long long)a6 enableRateAdapter:(BOOL)a7 publisherDelegate:(id)a8;
- (void)multicastData:(id)a0 withCompletion:(id /* block */)a1;
- (void)terminateDataSessionWithPeer:(id)a0 withCompletion:(id /* block */)a1;

@end
