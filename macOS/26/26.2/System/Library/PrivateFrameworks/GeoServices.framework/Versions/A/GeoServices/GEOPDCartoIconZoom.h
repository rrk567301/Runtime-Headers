@class PBUnknownFields;

@interface GEOPDCartoIconZoom : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    int _cartoSignificance;
    float _maxZoom;
    float _minZoom;
    float _popDefaultMinZoom;
    float _popHighestMinZoom;
    float _popLowestMinZoom;
    struct { unsigned char has_cartoSignificance : 1; unsigned char has_maxZoom : 1; unsigned char has_minZoom : 1; unsigned char has_popDefaultMinZoom : 1; unsigned char has_popHighestMinZoom : 1; unsigned char has_popLowestMinZoom : 1; } _flags;
}

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;

@end
