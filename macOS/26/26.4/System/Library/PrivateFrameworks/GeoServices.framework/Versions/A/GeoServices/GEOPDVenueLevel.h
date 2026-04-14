@class GEOPDVenueLabel, PBUnknownFields;

@interface GEOPDVenueLevel : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOPDVenueLabel *_label;
    unsigned long long _levelId;
    int _ordinal;
    struct { unsigned char has_levelId : 1; unsigned char has_ordinal : 1; } _flags;
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
