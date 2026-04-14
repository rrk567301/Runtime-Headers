@interface AWDMETRICSKCellularPowerLogLteNrRxDiversityHistRxdBin : PBCodable <NSCopying> {
    struct { unsigned char bandGroup : 1; unsigned char caIndex : 1; unsigned char durationMs : 1; unsigned char mcgCcNum : 1; unsigned char mcgState : 1; unsigned char rat : 1; unsigned char rxDivState : 1; unsigned char isEndc : 1; } _has;
}

@property (nonatomic) BOOL hasIsEndc;
@property (nonatomic) BOOL isEndc;
@property (nonatomic) BOOL hasMcgState;
@property (nonatomic) int mcgState;
@property (nonatomic) BOOL hasRat;
@property (nonatomic) int rat;
@property (nonatomic) BOOL hasMcgCcNum;
@property (nonatomic) unsigned int mcgCcNum;
@property (nonatomic) BOOL hasCaIndex;
@property (nonatomic) int caIndex;
@property (nonatomic) BOOL hasRxDivState;
@property (nonatomic) int rxDivState;
@property (nonatomic) BOOL hasBandGroup;
@property (nonatomic) int bandGroup;
@property (nonatomic) BOOL hasDurationMs;
@property (nonatomic) unsigned int durationMs;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (int)StringAsRxDivState:(id)a0;
- (int)StringAsBandGroup:(id)a0;
- (int)StringAsCaIndex:(id)a0;
- (int)StringAsMcgState:(id)a0;
- (int)StringAsRat:(id)a0;
- (id)bandGroupAsString:(int)a0;
- (id)caIndexAsString:(int)a0;
- (id)mcgStateAsString:(int)a0;
- (id)ratAsString:(int)a0;
- (id)rxDivStateAsString:(int)a0;

@end
