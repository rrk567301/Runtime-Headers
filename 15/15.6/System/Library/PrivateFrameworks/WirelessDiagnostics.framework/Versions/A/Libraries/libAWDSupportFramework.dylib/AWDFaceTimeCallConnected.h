@class NSString;

@interface AWDFaceTimeCallConnected : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char connectDuration : 1; unsigned char connectionType : 1; unsigned char currentNatType : 1; unsigned char isVideo : 1; unsigned char localNetworkConnection : 1; unsigned char onLockScreen : 1; unsigned char relayConnectDuration : 1; unsigned char remoteNatType : 1; unsigned char remoteNetworkConnection : 1; unsigned char usesRelay : 1; } _has;
}

@property (readonly, nonatomic) char hasGuid;
@property (retain, nonatomic) NSString *guid;
@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
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
@property (nonatomic) char hasIsVideo;
@property (nonatomic) unsigned int isVideo;
@property (nonatomic) char hasOnLockScreen;
@property (nonatomic) unsigned int onLockScreen;

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
