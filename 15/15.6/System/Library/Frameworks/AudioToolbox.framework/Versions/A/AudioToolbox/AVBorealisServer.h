@class NSXPCListener, NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface AVBorealisServer : NSObject <NSXPCListenerDelegate, VoiceTriggerInterface> {
    struct BorealisServerImpl { void /* function */ **x0; id x1; id x2; } *serverImpl;
}

@property (retain, nonatomic) NSXPCListener *serverListener;
@property (retain, nonatomic) NSMutableArray *clientConnections;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (char)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)initializeWithReply:(id /* block */)a0;
- (void)activateSecureSession:(char)a0 reply:(id /* block */)a1;
- (void)enableBargeInMode:(char)a0 reply:(id /* block */)a1;
- (void)enableListeningOnPorts:(id)a0 reply:(id /* block */)a1;
- (void)enableSpeakerStateListening:(char)a0 reply:(id /* block */)a1;
- (void)enableVoiceTriggerListening:(char)a0 reply:(id /* block */)a1;
- (void)getInputChannelInfoCompletion:(id /* block */)a0;
- (char)hardwareSupportsVoiceTrigger;
- (char)isAssistantVoiceTriggerEnabled;
- (void)listeningEnabledReply:(id /* block */)a0;
- (void)portsActiveReply:(id /* block */)a0;
- (void)sendActiveStateChangedNotificationForPort:(unsigned long long)a0 isActive:(char)a1;
- (void)sendSpeakerMuteStateChangedNotification:(char)a0;
- (void)sendVoiceTriggerOccuredNotification:(id)a0 triggerTime:(unsigned long long)a1;
- (void)setAggressiveECMode:(char)a0 reply:(id /* block */)a1;
- (void)setListeningProperty:(char)a0 reply:(id /* block */)a1;
- (void)siriClientRecordStateChanged:(char)a0;
- (void)siriClientsRecordingReply:(id /* block */)a0;
- (void)speakerStateActiveReply:(id /* block */)a0;
- (void)speakerStateMutedReply:(id /* block */)a0;
- (void)speechDetectionVADCreated;
- (void)updateVoiceTriggerConfiguration:(id)a0 reply:(id /* block */)a1;
- (void)voiceTriggerPastDataFramesAvailable:(id /* block */)a0;

@end
