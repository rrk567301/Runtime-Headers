@class NSString, CXChannelProviderConfiguration, CXAbstractProvider, NSXPCConnection, NSArray;
@protocol CXChannelProviderDelegate;

@interface CXChannelProvider : NSObject <CXActionDelegateInternal, CXChannelPushClientProtocol, CXAbstractProvider>

@property (readonly, nonatomic) CXAbstractProvider *abstractProvider;
@property (weak, nonatomic) id<CXChannelProviderDelegate> delegate;
@property (retain, nonatomic) NSXPCConnection *voipApplicationControllerConnection;
@property (copy, nonatomic) CXChannelProviderConfiguration *configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *pendingTransactions;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)delegate;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (void)performAction:(id)a0;
- (void)setDelegate:(id)a0 queue:(id)a1;
- (oneway void)commitTransaction:(id)a0;
- (oneway void)handleActionTimeout:(id)a0;
- (oneway void)handleAudioSessionActivationStateChangedTo:(id)a0;
- (id)hostProtocolDelegate;
- (BOOL)requiresProxyingAVAudioSessionState;
- (void)handleMediaServicesWereResetNotification:(id)a0;
- (void)registerCurrentConfiguration;
- (void)reportChannelWithUUID:(id)a0 updated:(id)a1 completionHandler:(id /* block */)a2;
- (void)reportIncomingTransmissionEndedForChannelWithUUID:(id)a0 reason:(long long)a1 completionHandler:(id /* block */)a2;
- (void)reportIncomingTransmissionStartedForChannelWithUUID:(id)a0 update:(id)a1 shouldReplaceOutgoingTransmission:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)_didReceivePushToken:(id)a0;
- (void)_didReceivePushPayload:(id)a0 channelUUID:(id)a1 reply:(id /* block */)a2;
- (id)channelProviderHostDelegate;
- (void)reportChannelWithUUID:(id)a0 connectedAtDate:(id)a1;
- (void)reportChannelWithUUID:(id)a0 disconnectedAtDate:(id)a1 disconnectedReason:(long long)a2;
- (void)reportChannelWithUUID:(id)a0 updated:(id)a1;
- (void)_ensureApplicationControllerConnection;
- (void)requestChannelPushToken;
- (void)unregisterChannelPushToken;
- (void)_didReceivePushPayload:(id)a0;

@end
