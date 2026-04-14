@interface ATXPBCGRectWrapper : PBCodable <NSCopying> {
    double _height;
    double _width;
    double _x;
    double _y;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
