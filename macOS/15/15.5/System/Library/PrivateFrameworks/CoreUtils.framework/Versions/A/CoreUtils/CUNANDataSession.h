@class WiFiAwareDataSession, NSString, WiFiAwarePublisherDataSessionHandle, WiFiAwarePublisher, NSObject, CUNANEndpoint;
@protocol OS_dispatch_queue, WiFiAwareDataSessionPairingDelegate;

@interface CUNANDataSession : NSObject <WiFiAwareDataSessionDelegate, WiFiAwareDataSessionPairingDelegate> {
    id /* block */ _activateCompletion;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    id /* block */ _pinCodeInputCompletionHandler;
}

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) unsigned int localInterfaceIndex;
@property (nonatomic) union { struct sockaddr { unsigned char sa_len; unsigned char sa_family; char sa_data[14]; } sa; struct sockaddr_in { unsigned char sin_len; unsigned char sin_family; unsigned short sin_port; struct in_addr { unsigned int s_addr; } sin_addr; char sin_zero[8]; } v4; struct sockaddr_in6 { unsigned char sin6_len; unsigned char sin6_family; unsigned short sin6_port; unsigned int sin6_flowinfo; struct in6_addr { union { unsigned char __u6_addr8[16]; unsigned short __u6_addr16[8]; unsigned int __u6_addr32[4]; } __u6_addr; } sin6_addr; unsigned int sin6_scope_id; } v6; } peerAddress;
@property (retain, nonatomic) WiFiAwarePublisher *publisher;
@property (retain, nonatomic) WiFiAwarePublisherDataSessionHandle *wfaDataSessionServer;
@property (nonatomic) unsigned int controlFlags;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) id /* block */ pairingPromptHandler;
@property (readonly, copy, nonatomic) NSString *peerAddressString;
@property (retain, nonatomic) CUNANEndpoint *peerEndpoint;
@property (readonly, copy, nonatomic) NSString *peerEndpointString;
@property (copy, nonatomic) id /* block */ terminationHandler;
@property (nonatomic) unsigned int trafficFlags;
@property (readonly, nonatomic) WiFiAwareDataSession *wfaDataSessionClient;
@property (nonatomic) BOOL wfaPairingCacheEnabled;
@property (weak, nonatomic) id<WiFiAwareDataSessionPairingDelegate> wfaPairingDelegate;
@property (nonatomic) long long wfaPairingMethod;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)_invalidate;
- (void)_invalidated;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)_activateWithCompletion:(id /* block */)a0;
- (BOOL)_dataSession:(id)a0 confirmedForPeerDataAddress:(id)a1 serviceSpecificInfo:(id)a2 error:(id *)a3;
- (void)_pairingRequestStartedForDataSession:(id)a0 pinCodeInputCompletionHandler:(id /* block */)a1;
- (void)_terminateServerDataSession;
- (void)dataSession:(id)a0 confirmedForPeerDataAddress:(id)a1 serviceSpecificInfo:(id)a2;
- (void)dataSession:(id)a0 failedToStartWithError:(long long)a1;
- (void)dataSession:(id)a0 terminatedWithReason:(long long)a1;
- (void)dataSessionRequestStarted:(id)a0;
- (id)descriptionWithLevel:(int)a0;
- (void)generateStatisticsReportWithCompletionHandler:(id /* block */)a0;
- (void)pairingRequestStartedForDataSession:(id)a0 pinCodeInputCompletionHandler:(id /* block */)a1;
- (void)reportIssue:(id)a0;
- (void)tryPairingPassword:(id)a0;
- (void)updateLinkStatus:(int)a0;

@end
