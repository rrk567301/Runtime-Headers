@class PBUnknownFields;

@interface GEOPDAmenitiesFilter : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    char _includeAmenityV2;
    struct { unsigned char has_includeAmenityV2 : 1; } _flags;
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
