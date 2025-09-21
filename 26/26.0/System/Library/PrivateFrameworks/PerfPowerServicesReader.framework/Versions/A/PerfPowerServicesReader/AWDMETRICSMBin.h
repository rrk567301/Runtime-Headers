@interface AWDMETRICSMBin : PBCodable <NSCopying> {
    struct { unsigned char binId : 1; unsigned char duration : 1; } _has;
}

@property (nonatomic) BOOL hasBinId;
@property (nonatomic) unsigned int binId;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) unsigned int duration;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
