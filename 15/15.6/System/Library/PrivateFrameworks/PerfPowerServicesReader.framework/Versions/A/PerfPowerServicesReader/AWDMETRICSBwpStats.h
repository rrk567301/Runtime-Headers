@interface AWDMETRICSBwpStats : PBCodable <NSCopying> {
    struct { unsigned char bandwidth : 1; unsigned char duration : 1; unsigned char scsSpacing : 1; } _has;
}

@property (nonatomic) char hasScsSpacing;
@property (nonatomic) unsigned int scsSpacing;
@property (nonatomic) char hasDuration;
@property (nonatomic) unsigned int duration;
@property (nonatomic) char hasBandwidth;
@property (nonatomic) int bandwidth;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsBandwidth:(id)a0;
- (id)bandwidthAsString:(int)a0;

@end
