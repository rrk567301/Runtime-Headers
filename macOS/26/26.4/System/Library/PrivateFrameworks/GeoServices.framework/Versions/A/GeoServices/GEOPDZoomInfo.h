@class PBUnknownFields;

@interface GEOPDZoomInfo : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    double _maxZoom;
    double _minZoom;
    struct { unsigned char has_maxZoom : 1; unsigned char has_minZoom : 1; } _flags;
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
