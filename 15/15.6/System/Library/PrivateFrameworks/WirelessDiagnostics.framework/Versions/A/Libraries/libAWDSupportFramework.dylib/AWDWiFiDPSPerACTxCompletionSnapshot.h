@interface AWDWiFiDPSPerACTxCompletionSnapshot : PBCodable <NSCopying> {
    struct { unsigned char chipModeError : 1; unsigned char dropped : 1; unsigned char expired : 1; unsigned char firmwareFreePacket : 1; unsigned char forceLifetimeExp : 1; unsigned char maxRetries : 1; unsigned char noAck : 1; unsigned char noBuf : 1; unsigned char noResources : 1; unsigned char success : 1; unsigned char txFailure : 1; } _has;
}

@property (nonatomic) char hasSuccess;
@property (nonatomic) unsigned int success;
@property (nonatomic) char hasDropped;
@property (nonatomic) unsigned int dropped;
@property (nonatomic) char hasNoBuf;
@property (nonatomic) unsigned int noBuf;
@property (nonatomic) char hasNoResources;
@property (nonatomic) unsigned int noResources;
@property (nonatomic) char hasNoAck;
@property (nonatomic) unsigned int noAck;
@property (nonatomic) char hasChipModeError;
@property (nonatomic) unsigned int chipModeError;
@property (nonatomic) char hasExpired;
@property (nonatomic) unsigned int expired;
@property (nonatomic) char hasTxFailure;
@property (nonatomic) unsigned int txFailure;
@property (nonatomic) char hasFirmwareFreePacket;
@property (nonatomic) unsigned int firmwareFreePacket;
@property (nonatomic) char hasMaxRetries;
@property (nonatomic) unsigned int maxRetries;
@property (nonatomic) char hasForceLifetimeExp;
@property (nonatomic) unsigned int forceLifetimeExp;

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
