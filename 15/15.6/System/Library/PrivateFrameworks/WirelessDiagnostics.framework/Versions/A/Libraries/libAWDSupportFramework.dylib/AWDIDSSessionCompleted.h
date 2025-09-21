@class NSString;

@interface AWDIDSSessionCompleted : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char clientType : 1; unsigned char destinationType : 1; unsigned char durationOfSession : 1; unsigned char durationToConnect : 1; unsigned char endedReason : 1; unsigned char isCellularInterfaceDisallowed : 1; unsigned char isInitiator : 1; unsigned char isLegacySessionType : 1; unsigned char isNetworkActive : 1; unsigned char isNetworkEnabled : 1; unsigned char isNetworkReachable : 1; unsigned char isQREnabled : 1; unsigned char isUsingQRDirectly : 1; unsigned char isWifiInterfaceDisallowed : 1; unsigned char isWithDefaultPairedDevice : 1; unsigned char linkProtocol : 1; unsigned char linkType : 1; unsigned char sessionProtocolVersionNumber : 1; unsigned char transportType : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) char hasGuid;
@property (retain, nonatomic) NSString *guid;
@property (nonatomic) char hasSessionProtocolVersionNumber;
@property (nonatomic) unsigned int sessionProtocolVersionNumber;
@property (readonly, nonatomic) char hasServiceName;
@property (retain, nonatomic) NSString *serviceName;
@property (nonatomic) char hasClientType;
@property (nonatomic) int clientType;
@property (nonatomic) char hasIsQREnabled;
@property (nonatomic) unsigned int isQREnabled;
@property (nonatomic) char hasIsUsingQRDirectly;
@property (nonatomic) unsigned int isUsingQRDirectly;
@property (nonatomic) char hasIsInitiator;
@property (nonatomic) unsigned int isInitiator;
@property (nonatomic) char hasIsLegacySessionType;
@property (nonatomic) unsigned int isLegacySessionType;
@property (nonatomic) char hasIsWithDefaultPairedDevice;
@property (nonatomic) unsigned int isWithDefaultPairedDevice;
@property (nonatomic) char hasTransportType;
@property (nonatomic) unsigned int transportType;
@property (nonatomic) char hasLinkProtocol;
@property (nonatomic) unsigned int linkProtocol;
@property (nonatomic) char hasEndedReason;
@property (nonatomic) unsigned int endedReason;
@property (nonatomic) char hasDurationOfSession;
@property (nonatomic) unsigned int durationOfSession;
@property (nonatomic) char hasDurationToConnect;
@property (nonatomic) unsigned int durationToConnect;
@property (nonatomic) char hasIsNetworkEnabled;
@property (nonatomic) unsigned int isNetworkEnabled;
@property (nonatomic) char hasIsNetworkActive;
@property (nonatomic) unsigned int isNetworkActive;
@property (nonatomic) char hasIsNetworkReachable;
@property (nonatomic) unsigned int isNetworkReachable;
@property (nonatomic) char hasIsWifiInterfaceDisallowed;
@property (nonatomic) unsigned int isWifiInterfaceDisallowed;
@property (nonatomic) char hasIsCellularInterfaceDisallowed;
@property (nonatomic) unsigned int isCellularInterfaceDisallowed;
@property (nonatomic) char hasLinkType;
@property (nonatomic) unsigned int linkType;
@property (nonatomic) char hasDestinationType;
@property (nonatomic) unsigned int destinationType;

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
