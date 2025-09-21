@interface CLPLOGENTRYVISIONCGSize : PBCodable <NSCopying> {
    struct { unsigned char height : 1; unsigned char width : 1; } _has;
}

@property (nonatomic) char hasWidth;
@property (nonatomic) double width;
@property (nonatomic) char hasHeight;
@property (nonatomic) double height;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
