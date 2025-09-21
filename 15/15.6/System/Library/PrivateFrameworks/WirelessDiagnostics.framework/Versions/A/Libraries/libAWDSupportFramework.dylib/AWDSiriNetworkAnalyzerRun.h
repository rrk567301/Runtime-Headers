@interface AWDSiriNetworkAnalyzerRun : PBCodable <NSCopying> {
    struct { unsigned char gatewayPingDuration : 1; unsigned char knownURLLoadDuration : 1; unsigned char siriSaltURLLoadDuration : 1; unsigned char siriURLLoadDuration : 1; unsigned char timestamp : 1; unsigned char gatewayPingsDropped : 1; unsigned char gatewayPingsSent : 1; unsigned char gatewayStatus : 1; unsigned char interface : 1; unsigned char sendBufferBytesRemaining : 1; unsigned char analyzingSuccessfulRetry : 1; unsigned char isUserRequest : 1; unsigned char wwanPreferred : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasInterface;
@property (nonatomic) int interface;
@property (nonatomic) char hasIsUserRequest;
@property (nonatomic) char isUserRequest;
@property (nonatomic) char hasAnalyzingSuccessfulRetry;
@property (nonatomic) char analyzingSuccessfulRetry;
@property (nonatomic) char hasWwanPreferred;
@property (nonatomic) char wwanPreferred;
@property (nonatomic) char hasSendBufferBytesRemaining;
@property (nonatomic) int sendBufferBytesRemaining;
@property (nonatomic) char hasKnownURLLoadDuration;
@property (nonatomic) unsigned long long knownURLLoadDuration;
@property (nonatomic) char hasSiriURLLoadDuration;
@property (nonatomic) unsigned long long siriURLLoadDuration;
@property (nonatomic) char hasSiriSaltURLLoadDuration;
@property (nonatomic) unsigned long long siriSaltURLLoadDuration;
@property (nonatomic) char hasGatewayStatus;
@property (nonatomic) int gatewayStatus;
@property (nonatomic) char hasGatewayPingDuration;
@property (nonatomic) unsigned long long gatewayPingDuration;
@property (nonatomic) char hasGatewayPingsSent;
@property (nonatomic) unsigned int gatewayPingsSent;
@property (nonatomic) char hasGatewayPingsDropped;
@property (nonatomic) unsigned int gatewayPingsDropped;

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
