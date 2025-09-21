@class NSString;

@interface AWDIDSSessionEnded : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char callDuration : 1; unsigned char conferenceMiscError : 1; unsigned char connectDuration : 1; unsigned char connectionType : 1; unsigned char currentNatType : 1; unsigned char dataRate : 1; unsigned char endedReason : 1; unsigned char gameKitError : 1; unsigned char genericError : 1; unsigned char gksError : 1; unsigned char gksReturnCode : 1; unsigned char isInitiator : 1; unsigned char isNetworkActive : 1; unsigned char isNetworkEnabled : 1; unsigned char isNetworkReachable : 1; unsigned char linkQuality : 1; unsigned char localNetworkConnection : 1; unsigned char networkCheckResult : 1; unsigned char relayConnectDuration : 1; unsigned char remoteNatType : 1; unsigned char remoteNetworkConnection : 1; unsigned char usesRelay : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) char hasGuid;
@property (retain, nonatomic) NSString *guid;
@property (nonatomic) char hasEndedReason;
@property (nonatomic) unsigned int endedReason;
@property (nonatomic) char hasGenericError;
@property (nonatomic) int genericError;
@property (nonatomic) char hasGameKitError;
@property (nonatomic) unsigned int gameKitError;
@property (nonatomic) char hasConferenceMiscError;
@property (nonatomic) unsigned int conferenceMiscError;
@property (nonatomic) char hasCallDuration;
@property (nonatomic) unsigned int callDuration;
@property (nonatomic) char hasIsNetworkEnabled;
@property (nonatomic) unsigned int isNetworkEnabled;
@property (nonatomic) char hasIsNetworkActive;
@property (nonatomic) unsigned int isNetworkActive;
@property (nonatomic) char hasIsNetworkReachable;
@property (nonatomic) unsigned int isNetworkReachable;
@property (nonatomic) char hasNetworkCheckResult;
@property (nonatomic) unsigned int networkCheckResult;
@property (nonatomic) char hasDataRate;
@property (nonatomic) unsigned int dataRate;
@property (nonatomic) char hasGksError;
@property (nonatomic) int gksError;
@property (nonatomic) char hasConnectDuration;
@property (nonatomic) unsigned int connectDuration;
@property (nonatomic) char hasRemoteNetworkConnection;
@property (nonatomic) unsigned int remoteNetworkConnection;
@property (nonatomic) char hasLocalNetworkConnection;
@property (nonatomic) unsigned int localNetworkConnection;
@property (nonatomic) char hasConnectionType;
@property (nonatomic) unsigned int connectionType;
@property (nonatomic) char hasUsesRelay;
@property (nonatomic) unsigned int usesRelay;
@property (nonatomic) char hasCurrentNatType;
@property (nonatomic) unsigned int currentNatType;
@property (nonatomic) char hasRemoteNatType;
@property (nonatomic) unsigned int remoteNatType;
@property (nonatomic) char hasRelayConnectDuration;
@property (nonatomic) unsigned int relayConnectDuration;
@property (nonatomic) char hasIsInitiator;
@property (nonatomic) unsigned int isInitiator;
@property (nonatomic) char hasLinkQuality;
@property (nonatomic) int linkQuality;
@property (nonatomic) char hasGksReturnCode;
@property (nonatomic) int gksReturnCode;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
