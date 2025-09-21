@class NSString, NSArray, NSData, NSDictionary, NSUUID;
@protocol IDSGroupQUICMaterialExchangeProvider;

@interface IDSQuickRelaySessionInfo : NSObject {
    struct sockaddr_storage { unsigned char ss_len; unsigned char ss_family; char __ss_pad1[6]; long long __ss_align; char __ss_pad2[112]; } _serverAddress;
    struct sockaddr_storage { unsigned char ss_len; unsigned char ss_family; char __ss_pad1[6]; long long __ss_align; char __ss_pad2[112]; } _serverAddressIPv6;
    struct sockaddr_storage { unsigned char ss_len; unsigned char ss_family; char __ss_pad1[6]; long long __ss_align; char __ss_pad2[112]; } _highPriorityServerAddress;
    struct sockaddr_storage { unsigned char ss_len; unsigned char ss_family; char __ss_pad1[6]; long long __ss_align; char __ss_pad2[112]; } _highPriorityServerAddressIPv6;
    BOOL _sessionIsNonUserParticipantInitiated;
}

@property (readonly) long long allocateType;
@property (readonly) double allocateTime;
@property (readonly) NSString *allocateRequestID;
@property (readonly) NSString *idsSessionID;
@property (readonly) NSString *relaySessionID;
@property (readonly) NSData *relaySessionToken;
@property (readonly) NSData *relaySessionKey;
@property (readonly) NSData *softwareData;
@property (readonly) unsigned char protocolVersion;
@property (readonly) long long relayServerProviderType;
@property (readonly) NSString *reportingDataBlob;
@property (readonly) unsigned long long participantID;
@property (readonly) NSArray *allParticipantIDs;
@property (readonly) BOOL isInitiator;
@property (readonly) long long linkProtocol;
@property (readonly) unsigned char linkSuggestion;
@property (readonly) unsigned char linkScore;
@property (readonly) BOOL uplinkNackDisabled;
@property (readonly) BOOL isPseudoParticipant;
@property (readonly) BOOL h2FallbackDisabled;
@property (readonly) BOOL handOffOverQREnabled;
@property (readonly) BOOL transportLayerEncryptionDisabled;
@property (readonly) BOOL ipDiscoveryDisabled;
@property (readonly) BOOL ftPowerOptimizationEnabled;
@property (readonly) NSDictionary *qrSessionExperiments;
@property (readonly) BOOL sessionIsUserParticipantInitiated;
@property (readonly) NSString *pskTransportParameters;
@property (readonly) NSString *pskH3Settings;
@property (readonly) BOOL isInternal;
@property (readonly) unsigned long long callType;
@property (readonly) NSArray *allocatedPushTokens;
@property (readonly) const struct sockaddr_storage { unsigned char x0; unsigned char x1; char x2[6]; long long x3; char x4[112]; } *serverAddress;
@property (readonly) const struct sockaddr_storage { unsigned char x0; unsigned char x1; char x2[6]; long long x3; char x4[112]; } *serverAddressIPv6;
@property (readonly) NSUUID *defaultDeviceLocalCBUUID;
@property (readonly) NSUUID *defaultDeviceRemoteCBUUID;
@property (readonly) NSString *groupID;
@property (readonly) NSString *stableGroupID;
@property (readonly) NSArray *publishedStreams;
@property (readonly) NSArray *subscribedStreams;
@property (readonly) unsigned int generationCounter;
@property (readonly) unsigned char maxConcurrentStreams;
@property (readonly) NSData *avcDataBlob;
@property (readonly) unsigned char ipPreference;
@property (readonly) id<IDSGroupQUICMaterialExchangeProvider> quicMaterialExchangeProvider;

- (void).cxx_destruct;
- (const struct sockaddr_storage { unsigned char x0; unsigned char x1; char x2[6]; long long x3; char x4[112]; } *)highPriorityServerAddress;
- (const struct sockaddr_storage { unsigned char x0; unsigned char x1; char x2[6]; long long x3; char x4[112]; } *)highPriorityServerAddressIPv6;
- (long long)parseSessionInfo:(id)a0;

@end
