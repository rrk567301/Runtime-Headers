@class NSData, NSString, NSArray, CUNANEndpoint, NSMutableDictionary, NSDictionary, NSObject, WiFiAwarePublisher;
@protocol OS_dispatch_queue;

@interface CUNANPublisher : NSObject <WiFiAwarePublisherDelegate, WiFiAwarePublisherPairingDelegate> {
    id /* block */ _activateCompletion;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSMutableDictionary *_sessions;
    WiFiAwarePublisher *_wfaPublisher;
}

@property (nonatomic) unsigned int controlFlags;
@property (copy, nonatomic) NSData *customData;
@property (nonatomic) BOOL dataPathEnabled;
@property (readonly, copy) NSArray *dataSessions;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) CUNANEndpoint *mockEndpoint;
@property (copy, nonatomic) NSString *mockID;
@property (copy, nonatomic) NSString *mockPeerEndpointString;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) int port;
@property (copy, nonatomic) NSString *serviceType;
@property (copy, nonatomic) NSDictionary *textInfo;
@property (nonatomic) unsigned int trafficFlags;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) id /* block */ dataSessionStartedHandler;
@property (copy, nonatomic) id /* block */ dataSessionEndedHandler;
@property (copy, nonatomic) id /* block */ pairingShowHandler;
@property (copy, nonatomic) id /* block */ receiveHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)_invalidate;
- (void)_invalidated;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)publisher:(id)a0 terminatedWithReason:(long long)a1;
- (void)_activateWithCompletion:(id /* block */)a0;
- (void)_publisher:(id)a0 dataConfirmedForHandle:(id)a1 localInterfaceIndex:(unsigned int)a2 serviceSpecificInfo:(id)a3;
- (void)_updateServiceSpecificInfo;
- (void)generateStatisticsReportWithCompletionHandler:(id /* block */)a0;
- (void)pairingRequestIndicatedForPublisher:(id)a0 bySubscriber:(id)a1 usingPINCode:(id)a2;
- (void)publisher:(id)a0 dataConfirmedForHandle:(id)a1 localInterfaceIndex:(unsigned int)a2 serviceSpecificInfo:(id)a3;
- (void)publisher:(id)a0 dataIndicatedForHandle:(id)a1 serviceSpecificInfo:(id)a2;
- (void)publisher:(id)a0 dataTerminatedForHandle:(id)a1 reason:(long long)a2;
- (void)publisher:(id)a0 failedToStartWithError:(long long)a1;
- (void)publisher:(id)a0 receivedMessage:(id)a1 fromSubscriberID:(unsigned char)a2 subscriberAddress:(id)a3;
- (void)publisherStarted:(id)a0;
- (void)reportIssue:(id)a0;
- (void)sendMessageData:(id)a0 endpoint:(id)a1 completionHandler:(id /* block */)a2;
- (void)updateLinkStatus:(int)a0;

@end
