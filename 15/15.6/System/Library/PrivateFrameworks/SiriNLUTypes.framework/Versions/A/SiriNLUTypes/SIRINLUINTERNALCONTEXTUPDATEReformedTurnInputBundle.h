@class SIRINLUEXTERNALTurnInput, NSMutableArray;

@interface SIRINLUINTERNALCONTEXTUPDATEReformedTurnInputBundle : PBCodable <NSCopying> {
    struct { unsigned char type : 1; } _has;
}

@property (nonatomic) char hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) char hasCurrentTurn;
@property (retain, nonatomic) SIRINLUEXTERNALTurnInput *currentTurn;
@property (retain, nonatomic) NSMutableArray *previousTurns;

+ (Class)previousTurnsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsType:(id)a0;
- (id)typeAsString:(int)a0;
- (void)addPreviousTurns:(id)a0;
- (void)clearPreviousTurns;
- (id)previousTurnsAtIndex:(unsigned long long)a0;
- (unsigned long long)previousTurnsCount;

@end
