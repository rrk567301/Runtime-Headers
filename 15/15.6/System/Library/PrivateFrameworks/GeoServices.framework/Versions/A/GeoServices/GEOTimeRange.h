@class PBUnknownFields;

@interface GEOTimeRange : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned int _from;
    unsigned int _to;
    struct { unsigned char has_from : 1; unsigned char has_to : 1; } _flags;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithPlaceDataTimeRange:(struct GEOPDLocalTimeRange { unsigned int x0; unsigned int x1; struct { unsigned char x0 : 1; unsigned char x1 : 1; } x2; } *)a0;
- (id)jsonRepresentation;

@end
