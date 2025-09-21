@class WiFiAwareSubscriber, NSArray, NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CUNANSubscriber : NSObject <WiFiAwareSubscriberDelegate> {
    id /* block */ _activateCompletion;
    char _invalidateCalled;
    char _invalidateDone;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutex;
    char _startedCalled;
    NSMutableDictionary *_wfaEndpoints;
    WiFiAwareSubscriber *_wfaSubscriber;
}

@property (nonatomic) unsigned int changeFlags;
@property (nonatomic) unsigned int controlFlags;
@property (readonly, copy) NSArray *discoveredEndpoints;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) NSString *mockID;
@property (copy, nonatomic) NSString *serviceType;
@property (nonatomic) long long wfaDiscoveryMode;
@property (copy, nonatomic) id /* block */ endpointFoundHandler;
@property (copy, nonatomic) id /* block */ endpointLostHandler;
@property (copy, nonatomic) id /* block */ endpointChangedHandler;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
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
- (void)_activateWithCompletion:(id /* block */)a0;
- (void)_lostAllEndpoints;
- (void)_subscriber:(id)a0 lostDiscoveryResultForPublishID:(unsigned char)a1 address:(id)a2;
- (void)_subscriber:(id)a0 receivedDiscoveryResult:(id)a1;
- (id)descriptionWithLevel:(int)a0;
- (void)reportMockEndpointFound:(id)a0;
- (void)reportMockEndpointLost:(id)a0;
- (void)sendMessageData:(id)a0 endpoint:(id)a1 completionHandler:(id /* block */)a2;
- (void)subscriber:(id)a0 failedToStartWithError:(long long)a1;
- (void)subscriber:(id)a0 lostDiscoveryResultForPublishID:(unsigned char)a1 address:(id)a2;
- (void)subscriber:(id)a0 receivedDiscoveryResult:(id)a1;
- (void)subscriber:(id)a0 receivedMessage:(id)a1 fromPublishID:(unsigned char)a2 address:(id)a3;
- (void)subscriber:(id)a0 terminatedWithReason:(long long)a1;
- (void)subscriberStarted:(id)a0;

@end
