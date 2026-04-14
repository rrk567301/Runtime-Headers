@class NSString, VCDatagramChannelIDS;

@interface VCTransportSessionIDS : VCTransportSession {
    VCDatagramChannelIDS *_datagramChannel;
    BOOL _requireEncryptionInfo;
    unsigned int _linkPreferSuggestionFromDefaults;
}

@property (nonatomic) int socket;
@property (copy, nonatomic) NSString *destination;

- (void)dealloc;
- (void)start;
- (void)stop;
- (void)startMKMRecoveryForParticipantIDs:(id)a0;
- (id)initWithCallID:(unsigned int)a0 reportingAgent:(id)a1;
- (id)initWithCallID:(unsigned int)a0 requireEncryptionInfo:(BOOL)a1 reportingAgent:(id)a2 notificationQueue:(id)a3;
- (void)dispatchedProcessDatagramChannelEventInfo:(id)a0;
- (void)handleLinkPreferSuggestion:(id)a0;
- (void)handleLinkConnectedWithInfo:(id)a0;
- (void)handleLinkDisconnectedWithInfo:(id)a0;
- (void)handleDefaultLinkUpdatedWithInfo:(id)a0;
- (void)handlePreConnectionDataReceived:(id)a0;
- (void)handleRATChanged:(id)a0;
- (void)handleCellularMTUChanged:(id)a0;
- (void)handleChannelInfoReport:(id)a0;
- (void)handleIDSEncryptionInfoEvent:(id)a0;
- (void)handleIDSMembershipChangeInfoEvent:(id)a0;
- (void)handleSessionInfoResponse:(id)a0;
- (void)handleProbingResponse:(id)a0;
- (void)handleCellularSoMaskChanged:(id)a0;
- (void)handleLinkConstrainsChanged:(id)a0;
- (void)handleReportingBlob:(id)a0;
- (void)processDatagramChannelEventInfo:(id)a0;
- (unsigned int)remoteDeviceVersionIDS;
- (void)cleanupDatagramChannel;
- (void)setPiggybackBlobPreference;
- (int)onStart;
- (void)onStop;
- (void)setConnectionSetupTime;
- (void)setQuickRelayServerProvider:(int)a0;
- (id)datagramChannel;
- (BOOL)getConnectionSetupData:(id *)a0 withOptions:(id)a1 error:(id *)a2;
- (void)setConnectionSetupPiggybackBlob:(id)a0;
- (id)connectionSetupPiggybackBlob;

@end
