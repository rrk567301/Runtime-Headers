@class GEOPDSTransportHint, PBUnknownFields;

@interface GEOPDSSearchLocationParameters : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOPDSTransportHint *_searchTransportHint;
    int _searchLocationParametersType;
    struct { unsigned char has_searchLocationParametersType : 1; } _flags;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;

@end
