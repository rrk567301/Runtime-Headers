@class PBUnknownFields;

@interface GEOPDZoomInfo : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    double _maxZoom;
    double _minZoom;
    struct { unsigned char has_maxZoom : 1; unsigned char has_minZoom : 1; } _flags;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
