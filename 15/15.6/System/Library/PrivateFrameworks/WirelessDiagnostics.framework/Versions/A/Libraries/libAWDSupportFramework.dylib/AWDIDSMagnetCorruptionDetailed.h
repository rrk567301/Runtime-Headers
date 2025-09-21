@interface AWDIDSMagnetCorruptionDetailed : PBCodable <NSCopying> {
    struct { unsigned char correctFramesSinceLastCorruption : 1; unsigned char correctRawBytesSinceLastCorruption : 1; unsigned char discardedRawBytes : 1; unsigned char linkType : 1; unsigned char recoveryTimeInMs : 1; unsigned char timestamp : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasLinkType;
@property (nonatomic) unsigned long long linkType;
@property (nonatomic) char hasDiscardedRawBytes;
@property (nonatomic) unsigned long long discardedRawBytes;
@property (nonatomic) char hasCorrectRawBytesSinceLastCorruption;
@property (nonatomic) unsigned long long correctRawBytesSinceLastCorruption;
@property (nonatomic) char hasCorrectFramesSinceLastCorruption;
@property (nonatomic) unsigned long long correctFramesSinceLastCorruption;
@property (nonatomic) char hasRecoveryTimeInMs;
@property (nonatomic) unsigned long long recoveryTimeInMs;

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
