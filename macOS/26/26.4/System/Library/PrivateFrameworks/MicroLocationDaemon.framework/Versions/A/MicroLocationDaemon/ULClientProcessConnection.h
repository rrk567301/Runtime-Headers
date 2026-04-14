@class NSString, NSUUID, NSXPCConnection, NSObject;
@protocol ULClientProcessConnectionDelegate, ULLogicAdapterLegacyServiceHandlingInterface, OS_dispatch_queue, ULXPCResponseProtocol, ULLogicAdapterTemporaryMapHandlingInterface, ULLogicAdapterServiceHandlingInterface, ULLogicAdapterDiagnosticsHandlingInterface;

@interface ULClientProcessConnection : NSObject <ULXPCRequestProtocol>

@property (retain, nonatomic) id<ULXPCResponseProtocol> remoteObjectProxy;
@property (retain, nonatomic) id<ULLogicAdapterServiceHandlingInterface> serviceHandling;
@property (retain, nonatomic) id<ULLogicAdapterLegacyServiceHandlingInterface> legacyServiceHandling;
@property (retain, nonatomic) id<ULLogicAdapterDiagnosticsHandlingInterface> diagnosticsHandling;
@property (retain, nonatomic) id<ULLogicAdapterTemporaryMapHandlingInterface> temporaryMapHandling;
@property (weak, nonatomic) id<ULClientProcessConnectionDelegate> delegate;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (retain, nonatomic) NSString *signingIdentity;
@property (retain, nonatomic) NSUUID *connectionToken;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSUUID *serviceIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)removeCustomLocationOfInterestWithIdentifier:(id)a0;
- (void)addLabel:(id)a0;
- (void)deleteServiceWithIdentifier:(id)a0 reply:(id /* block */)a1;
- (void)updateHomeKitUserInteractionLabel:(id)a0;
- (void)addLabel:(id)a0 betweenStartDate:(id)a1 andEndDate:(id)a2;
- (void)createCustomLocationOfInterestAtCurrentLocationWithConfiguration:(id)a0;
- (void)createServiceWithServiceType:(unsigned long long)a0 locationTypes:(id)a1 reply:(id /* block */)a2;
- (void)deleteDatabaseDirectoryWithReply:(id /* block */)a0;
- (void)disconnectWithRequestIdentifier:(id)a0;
- (void)donateMicroLocationTruthTagWithTagUUID:(id)a0 correspondingToTriggerUUID:(id)a1 handler:(id /* block */)a2;
- (void)donateMicroLocationTruthTagWithTagUUID:(id)a0 forRecordingEventsBetweenDate:(id)a1 andDate:(id)a2 handler:(id /* block */)a3;
- (void)exportDatabaseWithReply:(id /* block */)a0;
- (void)exportVisualLoggerDataWithReply:(id /* block */)a0;
- (void)getMicroLocationInternalVersionWithReply:(id /* block */)a0;
- (void)getRecordingTriggerUUIDAndRequestMicroLocationRecordingScanWithAdditionalInformation:(id)a0 shouldForceRecording:(BOOL)a1 handler:(id /* block */)a2;
- (void)imageFeaturesDebugWithTask:(unsigned long long)a0 additionalInformation:(id)a1 reply:(id /* block */)a2;
- (void)peripheralDebugTask:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)purgeDatabaseWithReply:(id /* block */)a0;
- (void)queryServicesWithReply:(id /* block */)a0;
- (void)requestAllModelsLearningWithRequestIdentifier:(id)a0;
- (void)requestCurrentMicroLocationWithAdditionalInformation:(id)a0 reply:(id /* block */)a1;
- (void)requestMapReconstructionWithRequestIdentifier:(id)a0;
- (void)requestMicroLocationRecordingScanWithAdditionalInformation:(id)a0 reply:(id /* block */)a1;
- (void)requestObservationWithRequestIdentifier:(id)a0;
- (void)requestPredictionWithRequestIdentifier:(id)a0;
- (void)runWithConfiguration:(id)a0 serviceIdentifier:(id)a1 legacyServiceIdentifier:(id)a2 andRequestIdentifier:(id)a3;
- (void)terminateDaemonWithReply:(id /* block */)a0;
- (void)visualLoggerAddDestinationWithHost:(id)a0;
- (id)initWithXPCConnection:(id)a0 delegate:(id)a1 serviceHandling:(id)a2 legacyServiceHandling:(id)a3 diagnosticsHandling:(id)a4 temporaryMapHandling:(id)a5 queue:(id)a6;

@end
