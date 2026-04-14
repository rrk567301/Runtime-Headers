@class NSUUID, ULConfiguration, NSXPCConnection, ULDarwinNotificationHelper, NSObject, ULMap;
@protocol OS_dispatch_queue, ULConnectionDelegate;

@interface ULConnection : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;
@property (weak, nonatomic) id<ULConnectionDelegate> delegate;
@property (retain, nonatomic) NSUUID *serviceIdentifier;
@property (retain, nonatomic) NSUUID *legacyServiceIdentifier;
@property (copy, nonatomic) ULConfiguration *configuration;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (nonatomic) BOOL interrupted;
@property (retain, nonatomic) ULDarwinNotificationHelper *darwinNotificationHelper;
@property (retain, nonatomic) ULMap *internalMap;
@property (readonly, copy, nonatomic) ULMap *currentMap;

+ (id)createServiceIdentifierForToken:(id)a0;
+ (void)deleteServiceWithIdentifier:(id)a0 reply:(id /* block */)a1;
+ (id)getMicroLocationInternalVersion;
+ (id)_createNSXPCConnectionWithWeakProxy:(id)a0;
+ (void)createServiceWithServiceType:(unsigned long long)a0 locationTypes:(id)a1 reply:(id /* block */)a2;
+ (void)donateMicroLocationTruthTagWithTagUUID:(id)a0 correspondingToTriggerUUID:(id)a1 handler:(id /* block */)a2;
+ (void)donateMicroLocationTruthTagWithTagUUID:(id)a0 forRecordingEventsBetweenDate:(id)a1 andDate:(id)a2 handler:(id /* block */)a3;
+ (void)exportDatabaseWithReply:(id /* block */)a0;
+ (id)getRecordingTriggerUUIDAndRequestMicroLocationRecordingScanWithAdditionalInformation:(id)a0 shouldForceRecording:(BOOL)a1 handler:(id /* block */)a2;
+ (void)imageFeaturesDebugWithTask:(unsigned long long)a0 additionalInformation:(id)a1 reply:(id /* block */)a2;
+ (id)metadataForHomekitAccessoryControlEventWithUUID:(id)a0 stateString:(id)a1 serviceUUID:(id)a2 serviceType:(id)a3 characteristicType:(id)a4 serviceGroupUUID:(id)a5 source:(id)a6 roomUUID:(id)a7;
+ (id)metadataForHomekitActionSetEventWithUUID:(id)a0 name:(id)a1 type:(id)a2 clientName:(id)a3 source:(id)a4 homeName:(id)a5;
+ (void)polarisDebugWithTask:(unsigned long long)a0 reply:(id /* block */)a1;
+ (void)purgeDatabaseWithReply:(id /* block */)a0;
+ (void)queryServicesWithReply:(id /* block */)a0;
+ (void)requestCurrentMicroLocationWithAdditionalInformation:(id)a0;
+ (void)requestMicroLocationRecordingScanWithAdditionalInformation:(id)a0 shouldForceRecording:(BOOL)a1;

- (id)disconnect;
- (id)runWithConfiguration:(id)a0;
- (void)dealloc;
- (void)_invalidate;
- (void)didFailWithError:(id)a0;
- (id)connect;
- (void).cxx_destruct;
- (void)addLabel:(id)a0;
- (id)stopUpdating;
- (void)_checkAndRecoverIfNeeded;
- (id)startUpdatingWithConfiguration:(id)a0;
- (void)enableMicrolocationAtCurrentLocation;
- (id)initWithDelegate:(id)a0 serviceIdentifier:(id)a1;
- (id)requestPrediction;
- (void)_manageConnectionAvailableNotificationObservation:(BOOL)a0;
- (void)_performAsyncOnDelegateQueueIfRespondsToSelector:(SEL)a0 block:(id /* block */)a1;
- (void)_xpcInterruptionHandler;
- (void)_xpcInvalidationHandler;
- (void)addLabel:(id)a0 betweenStartDate:(id)a1 andEndDate:(id)a2;
- (void)didCompleteObservationWithMetaInformation:(id)a0;
- (void)didCompletePredictionWithMetaInformation:(id)a0;
- (void)didCompleteRequest:(id)a0 withError:(id)a1;
- (void)didCreateCustomLocationOfInterestWithError:(id)a0;
- (void)didRemoveCustomLocationOfInterestWithIdentifier:(id)a0 withError:(id)a1;
- (void)didSendGenericEvent:(unsigned long long)a0 withDescription:(id)a1;
- (void)didUpdateMap:(id)a0;
- (void)didUpdatePredictionContext:(id)a0;
- (void)disableMicrolocationAtlocationWithIdentifier:(id)a0;
- (void)enableMicrolocationAtCurrentLocationWithConfiguration:(id)a0;
- (id)requestAllModelsLearning;
- (id)requestObservation;
- (void)updateLegacyServiceIdentifier:(id)a0;

@end
