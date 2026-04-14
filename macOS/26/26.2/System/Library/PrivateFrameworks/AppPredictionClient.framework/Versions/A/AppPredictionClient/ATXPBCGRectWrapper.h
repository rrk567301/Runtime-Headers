@interface ATXPBCGRectWrapper : PBCodable <NSCopying> {
    double _height;
    double _width;
    double _x;
    double _y;
}

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;

@end
