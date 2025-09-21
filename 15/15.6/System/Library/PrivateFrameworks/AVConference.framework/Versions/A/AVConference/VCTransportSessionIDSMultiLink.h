@class NSString, VCIDSSessionInfoSynchronizer;

@interface VCTransportSessionIDSMultiLink : VCTransportSessionIDS <VCConnectionManagerDelegate, VCIDSSessionInfoSynchronizerDelegate> {
    char _isWiFiAssistActive;
    char _oneToOneModeEnabled;
}

@property (readonly, nonatomic) VCIDSSessionInfoSynchronizer *sessionInfoSynchronizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)flushLinkProbingStatusWithOptions:(id)a0;
- (void)requestStatsWithOptions:(id)a0;
- (void)setWiFiAssist:(char)a0;
- (void)startActiveProbingWithOptions:(id)a0;
- (void)stopActiveProbingWithOptions:(id)a0;
- (void)handleLinkDisconnectedWithInfo:(id)a0;
- (int)onStart;
- (void)queryProbingResultsWithOptions:(id)a0;
- (void)setDefaultLink:(id)a0;
- (void)primaryConnectionChanged:(id)a0 oldPrimaryConnection:(id)a1 activeConnection:(id)a2;
- (void)VCIDSSessionInfoSynchronizer:(void *)a0 sendVCIDSSessionInfoRequest:(id)a1;
- (void)connectionCallback:(id)a0 isInitialConnection:(char)a1;
- (void)didEnableDuplication:(char)a0 activeConnection:(id)a1;
- (void)didLocalNetworkQualityChange:(char)a0 isLocalNetworkQualityBad:(char)a1 isRemoteNetworkQualityBad:(char)a2;
- (void)didMediaQualityDegrade:(char)a0;
- (void)didUpdatePreferredInterfaceForDuplication:(unsigned char)a0 notifyPeer:(char)a1 enableDuplication:(char)a2 isMediaUnrecoverableSignal:(char)a3;
- (void)discardConnection:(id)a0;
- (void)handleLinkConnectedWithInfo:(id)a0;
- (void)handleProbingResponse:(id)a0;
- (void)handleSessionInfoResponse:(id)a0;
- (id)initWithCallID:(unsigned int)a0 reportingAgent:(id)a1;
- (id)initWithCallID:(unsigned int)a0 requireEncryptionInfo:(char)a1 reportingAgent:(id)a2 notificationQueue:(id)a3 isMultiwaySession:(char)a4;
- (id)initWithCallID:(unsigned int)a0 requireEncryptionInfo:(char)a1 reportingAgent:(id)a2 notificationQueue:(id)a3 isMultiwaySession:(char)a4 dataPath:(int)a5;
- (void)logSignalStrength;
- (void)onStop;
- (void)optIntoExistingSubscribedStreamsForConnection:(id)a0;
- (void)optOutAllStreamsForConnection:(id)a0;
- (void)resetActiveConnection;
- (void)resetParticipantGenerationCounter;
- (void)setOneToOneModeEnabled:(char)a0 isInitiator:(char)a1;
- (void)setQuickRelayServerProvider:(int)a0;
- (void)setRemoteDeviceVersionIDS;
- (void)updateParticipantGenerationCounter:(unsigned char)a0;

@end
