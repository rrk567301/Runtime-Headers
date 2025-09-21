@class NSString, NSMutableSet, NSObject;
@protocol ULLogicAdapterDiagnosticsHandlingInterface, ULLogicAdapterLegacyServiceHandlingInterface, OS_dispatch_queue, ULLogicAdapterServiceHandlingInterface;

@interface ULServer : NSObject <ULLogicAdapterDelegate, ULClientProcessConnectionDelegate, NSXPCListenerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) id<ULLogicAdapterServiceHandlingInterface> serviceHandling;
@property (retain, nonatomic) id<ULLogicAdapterLegacyServiceHandlingInterface> legacyServiceHandling;
@property (retain, nonatomic) id<ULLogicAdapterDiagnosticsHandlingInterface> diagnosticsHandling;
@property (retain, nonatomic) NSMutableSet *clientConnections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (id)_remoteProxyForToken:(id)a0;
- (void)clientConnectionSeveredConnection:(id)a0;
- (void)didCompleteObservationWithMetaInformation:(id)a0 toConnection:(id)a1;
- (void)didCompletePredictionWithMetaInformation:(id)a0 toConnection:(id)a1;
- (void)didCompleteRequest:(id)a0 withError:(id)a1 toConnection:(id)a2;
- (void)didCreateCustomLoiAtCurrentLocationWithError:(id)a0 forConnection:(id)a1;
- (void)didFailWithError:(id)a0 toConnection:(id)a1;
- (void)didRemoveCustomLoiWithIdentifier:(id)a0 forConnection:(id)a1 withError:(id)a2;
- (void)didSendGenericEvent:(unsigned long long)a0 withDescription:(id)a1 toConnection:(id)a2;
- (void)didSendPredictionContextResults:(id)a0 toConnection:(id)a1;
- (void)didUpdateMap:(id)a0 toConnection:(id)a1;
- (id)initWithQueue:(id)a0 serviceHandling:(id)a1 legacyServiceHandling:(id)a2 diagnosticsHandling:(id)a3;

@end
