@interface AWDMETRICSBwpStats : PBCodable <NSCopying> {
    struct { unsigned char bandwidth : 1; unsigned char duration : 1; unsigned char scsSpacing : 1; } _has;
}

@property (nonatomic) BOOL hasScsSpacing;
@property (nonatomic) unsigned int scsSpacing;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) unsigned int duration;
@property (nonatomic) BOOL hasBandwidth;
@property (nonatomic) int bandwidth;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (int)StringAsBandwidth:(id)a0;
- (id)bandwidthAsString:(int)a0;

@end
