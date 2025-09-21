@interface AWDMETRICSKCellularPowerLogLteNrRxTxActivityStatsRxTxActivity : PBCodable <NSCopying> {
    struct { unsigned char actState : 1; unsigned char caState : 1; unsigned char count : 1; unsigned char ratDpl : 1; } _has;
}

@property (nonatomic) char hasRatDpl;
@property (nonatomic) int ratDpl;
@property (nonatomic) char hasCaState;
@property (nonatomic) int caState;
@property (nonatomic) char hasActState;
@property (nonatomic) int actState;
@property (nonatomic) char hasCount;
@property (nonatomic) unsigned int count;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsActState:(id)a0;
- (int)StringAsRatDpl:(id)a0;
- (int)StringAsCaState:(id)a0;
- (id)ratDplAsString:(int)a0;
- (id)actStateAsString:(int)a0;
- (id)caStateAsString:(int)a0;

@end
