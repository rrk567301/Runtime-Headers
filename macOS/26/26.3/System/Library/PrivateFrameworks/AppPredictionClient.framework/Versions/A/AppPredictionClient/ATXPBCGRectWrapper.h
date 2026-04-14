@interface ATXPBCGRectWrapper : PBCodable <NSCopying> {
    double _height;
    double _width;
    double _x;
    double _y;
}

- (id)dictionaryRepresentation;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
