@interface AWDMETRICSKCellularPowerLogSubsysSleepStatesMBin : PBCodable <NSCopying> {
    struct { unsigned char duration : 1; unsigned char binId : 1; } _has;
}

@property (nonatomic) BOOL hasBinId;
@property (nonatomic) int binId;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) unsigned long long duration;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (int)StringAsBinId:(id)a0;
- (id)binIdAsString:(int)a0;

@end
