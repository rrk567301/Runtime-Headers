@interface ATXPBCGRectWrapper : PBCodable <NSCopying> {
    double _height;
    double _width;
    double _x;
    double _y;
}

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
