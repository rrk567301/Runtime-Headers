@interface BMPBBacklightEvent : PBCodable <NSCopying> {
    struct { unsigned char absoluteTimestamp : 1; unsigned char backlightLevel : 1; } _has;
}

@property (nonatomic) BOOL hasAbsoluteTimestamp;
@property (nonatomic) double absoluteTimestamp;
@property (nonatomic) BOOL hasBacklightLevel;
@property (nonatomic) unsigned long long backlightLevel;

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
