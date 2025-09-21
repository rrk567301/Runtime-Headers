@interface SIRINLUEXTERNALRepetitionResult : PBCodable <NSCopying> {
    struct { unsigned char asrHypothesisIndex : 1; unsigned char repetitionType : 1; } _has;
}

@property (nonatomic) BOOL hasAsrHypothesisIndex;
@property (nonatomic) unsigned int asrHypothesisIndex;
@property (nonatomic) BOOL hasRepetitionType;
@property (nonatomic) int repetitionType;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (int)StringAsRepetitionType:(id)a0;
- (id)repetitionTypeAsString:(int)a0;

@end
