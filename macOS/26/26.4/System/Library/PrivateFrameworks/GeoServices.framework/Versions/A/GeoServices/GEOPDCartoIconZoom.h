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

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;

@end
