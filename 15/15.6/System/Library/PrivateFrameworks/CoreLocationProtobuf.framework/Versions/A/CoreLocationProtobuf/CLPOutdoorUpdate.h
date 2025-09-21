@interface CLPOutdoorUpdate : PBCodable <NSCopying> {
    struct { unsigned char estimatedStateProbabilityOutdoor : 1; unsigned char mctTimestamp : 1; unsigned char timestamp : 1; unsigned char confidence : 1; unsigned char type : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) char hasMctTimestamp;
@property (nonatomic) double mctTimestamp;
@property (nonatomic) char hasType;
@property (nonatomic) int type;
@property (nonatomic) char hasConfidence;
@property (nonatomic) int confidence;
@property (nonatomic) char hasEstimatedStateProbabilityOutdoor;
@property (nonatomic) double estimatedStateProbabilityOutdoor;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsType:(id)a0;
- (id)typeAsString:(int)a0;
- (int)StringAsConfidence:(id)a0;
- (id)confidenceAsString:(int)a0;

@end
