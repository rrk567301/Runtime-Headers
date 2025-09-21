@interface AWDMETRICSKCellularPowerLogAggregatedDLTBSHistMBin : PBCodable <NSCopying> {
    struct { unsigned char binId : 1; unsigned char duration : 1; } _has;
}

@property (nonatomic) char hasBinId;
@property (nonatomic) int binId;
@property (nonatomic) char hasDuration;
@property (nonatomic) unsigned int duration;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsBinId:(id)a0;
- (id)binIdAsString:(int)a0;

@end
