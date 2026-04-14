@class PBUnknownFields;

@interface GEOPDSBrandFilter : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned long long _brandMuid;
    struct { unsigned char has_brandMuid : 1; } _flags;
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
