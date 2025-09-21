@interface ATXPBCGRectWrapper : PBCodable <NSCopying> {
    double _height;
    double _width;
    double _x;
    double _y;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
