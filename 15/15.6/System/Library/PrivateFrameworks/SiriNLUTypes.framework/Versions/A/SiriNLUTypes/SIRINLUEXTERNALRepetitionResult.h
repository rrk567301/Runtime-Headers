@interface SIRINLUEXTERNALRepetitionResult : PBCodable <NSCopying> {
    struct { unsigned char asrHypothesisIndex : 1; unsigned char repetitionType : 1; } _has;
}

@property (nonatomic) char hasAsrHypothesisIndex;
@property (nonatomic) unsigned int asrHypothesisIndex;
@property (nonatomic) char hasRepetitionType;
@property (nonatomic) int repetitionType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsRepetitionType:(id)a0;
- (id)repetitionTypeAsString:(int)a0;

@end
