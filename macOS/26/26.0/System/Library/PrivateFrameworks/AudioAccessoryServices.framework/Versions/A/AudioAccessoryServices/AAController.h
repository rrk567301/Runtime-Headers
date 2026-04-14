@class NSObject;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface AAController : NSObject {
    BOOL _activateCalled;
    id /* block */ _activateCompletion;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSObject<OS_xpc_object> *_xpcCnx;
}

@property (nonatomic) unsigned int clientID;
@property (nonatomic) unsigned int coreBluetoothInternalFlag;
@property (copy, nonatomic) id /* block */ batteryInfoMessageHandler;
@property (copy, nonatomic) id /* block */ conversationDetectMessageHandler;
@property (copy, nonatomic) id /* block */ rawGestureMessageHandler;
@property (copy, nonatomic) id /* block */ sleepDetectionMessageHandler;
@property (copy, nonatomic) id /* block */ deviceInfoChangeHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) id /* block */ multimodalContextMessageHandler;
@property (copy, nonatomic) id /* block */ personalTranslationMessageHandler;
@property (copy, nonatomic) id /* block */ pmeConfigMessageHandler;
@property (copy, nonatomic) id /* block */ accessoryUsageSummaryMessageHandler;

- (id)_ensureXPCStarted;
- (void)_xpcReceivedMessage:(id)a0;
- (void)xpcReceivedMessage:(id)a0;
- (void)_interrupted;
- (void)_activateXPCCompleted:(id)a0;
- (void)invalidate;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)_invalidated;
- (id)init;
- (void)_activate;
- (id)description;
- (void).cxx_destruct;
- (void)_activateXPC:(BOOL)a0;
- (void)_accessoryUsageSummaryMessageReceived:(id)a0 fromDevice:(id)a1;
- (void)_batteryInfoMessageReceived:(id)a0 fromDevice:(id)a1;
- (void)_conversationDetectMessageReceived:(id)a0 fromDevice:(id)a1;
- (void)_multimodalContextMessageReceived:(id)a0 fromDevice:(id)a1;
- (void)_personalTranslationMessageReceived:(id)a0 fromDevice:(id)a1;
- (void)_pmeConfigDataReceived:(id)a0 fromDevice:(id)a1;
- (void)_rawGestureMessageReceived:(id)a0 fromDevice:(id)a1;
- (void)_sendAccessoryEventMessage:(id)a0 eventType:(unsigned char)a1 destinationIdentifier:(id)a2 completionHandler:(id /* block */)a3;
- (void)_sendDeviceConfig:(id)a0 destinationIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)_sleepDetectionMessageReceived:(id)a0 fromDevice:(id)a1;
- (void)_xpcReceivedAccessoryEvent:(id)a0;
- (void)_xpcReceivedAudioAccessoryDeviceInfoChange:(id)a0;
- (void)sendConversationDetectMessage:(id)a0 destinationIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)sendDEOCTempDisableIntervalMessage:(id)a0 destinationIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)sendDeviceConfig:(id)a0 destinationIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)sendGetTipiTableMessageToDestinationIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)sendMultimodalContextMessage:(id)a0 destinationIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)sendPMEConfigData:(id)a0 destinationIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)sendSleepDetectionMessage:(id)a0 destinationIdentifier:(id)a1 completionHandler:(id /* block */)a2;

@end
