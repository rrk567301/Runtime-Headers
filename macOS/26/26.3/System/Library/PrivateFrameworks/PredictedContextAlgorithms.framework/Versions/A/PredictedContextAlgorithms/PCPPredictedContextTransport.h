@interface PCPPredictedContextTransport : PBCodable <NSCopying> {
    struct { unsigned char probability : 1; unsigned char transportMode : 1; } _has;
}

@property (nonatomic) BOOL hasTransportMode;
@property (nonatomic) int transportMode;
@property (nonatomic) BOOL hasProbability;
@property (nonatomic) double probability;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (int)StringAsTransportMode:(id)a0;
- (id)transportModeAsString:(int)a0;

@end
