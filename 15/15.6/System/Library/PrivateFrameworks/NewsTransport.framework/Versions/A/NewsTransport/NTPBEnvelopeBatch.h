@class NSMutableArray;

@interface NTPBEnvelopeBatch : PBCodable <NSCopying> {
    struct { unsigned char envelopeDroppedCountDueToSizeLimit : 1; unsigned char majorVersion : 1; unsigned char minorVersion : 1; unsigned char patchVersion : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *envelopes;
@property (nonatomic) char hasMajorVersion;
@property (nonatomic) int majorVersion;
@property (nonatomic) char hasMinorVersion;
@property (nonatomic) int minorVersion;
@property (nonatomic) char hasPatchVersion;
@property (nonatomic) int patchVersion;
@property (nonatomic) char hasEnvelopeDroppedCountDueToSizeLimit;
@property (nonatomic) int envelopeDroppedCountDueToSizeLimit;

+ (Class)envelopeType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addEnvelope:(id)a0;
- (void)clearEnvelopes;
- (id)envelopeAtIndex:(unsigned long long)a0;
- (unsigned long long)envelopesCount;

@end
