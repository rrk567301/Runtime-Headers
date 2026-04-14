@class NSString, PrimaryInterfaceUtils, NSObject;
@protocol OS_dispatch_queue, DiagnosticLiaisonDelegate;

@interface DiagnosticLiaison : NSObject <IDSCrossDeviceTransportEndpoint> {
    PrimaryInterfaceUtils *_interfaceUtils;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<DiagnosticLiaisonDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startRemotelyTriggeredSessionForSignature:(id)a0 groupIdentifier:(id)a1 events:(id)a2;
- (id)idsTransport;
- (id)remoteCasePayloadForIDSTransport:(id)a0 groupID:(id)a1;
- (id)caseSignatureForRemoteSignature:(id)a0 groupIdentifier:(id)a1;
- (void)remotelyEnableAutoBugCapture:(id /* block */)a0;
- (void)messageReceivedFromIDS:(id)a0;
- (void)messageWithIdentifierHasBeenDelivered:(id)a0;
- (void)registerAdministrativeTransports;
- (void)messageWithIdentifier:(id)a0 didSendWithSuccess:(BOOL)a1 error:(id)a2;
- (void)unregisterAllTransports:(id /* block */)a0;
- (void)registerAutoBugCaptureTransports:(id /* block */)a0;
- (void)sendPayloadToHomeKitRelays:(id)a0 additionalPredicate:(id)a1 toEndpoint:(id)a2 reply:(id /* block */)a3;
- (void)checkForUIImpactScenarioForCase:(id)a0;
- (id)basicSignatureFrom:(id)a0;
- (void)processPayloadFromIDSTransport:(id)a0 incomingTime:(id)a1;
- (void)remotelyDisableAutoBugCapture:(id /* block */)a0;
- (void).cxx_destruct;
- (void)unregisterAllTransportsSync;
- (void)processPayloadVersionOneFromIDSTransport:(id)a0 incomingTime:(id)a1;
- (void)residentDevicesIDSIdentifiersWithReply:(id /* block */)a0;
- (void)remotelyTriggerSessionWithSignature:(id)a0 forDestinations:(id)a1 groupIdentifier:(id)a2 validFor:(double)a3 queue:(id)a4 reply:(id /* block */)a5;
- (id)abcPayloadForIDSTransport:(BOOL)a0;
- (void)processPayloadVersionTwoFromIDSTransport:(id)a0 incomingTime:(id)a1;
- (id)init;
- (void)remotelyTriggerSessionForSignature:(id)a0 groupIdentifier:(id)a1 event:(id)a2 queue:(id)a3 reply:(id /* block */)a4;
- (void)dealloc;

@end
