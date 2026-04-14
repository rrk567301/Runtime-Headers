@interface AWDMETRICSKCellularPowerLogNRSub6SINRHistMBin : PBCodable <NSCopying> {
    struct { unsigned char binId : 1; unsigned char duration : 1; } _has;
}

@property (nonatomic) BOOL hasBinId;
@property (nonatomic) int binId;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) unsigned int duration;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (int)StringAsBinId:(id)a0;
- (id)binIdAsString:(int)a0;

@end
