@class GEOPDSRawAttribute, PBUnknownFields;

@interface GEOPDSInferredValue : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOPDSRawAttribute *_attribute;
    int _priceRange;
    int _tradingHours;
    BOOL _negateInferredValue;
    struct { unsigned char has_priceRange : 1; unsigned char has_tradingHours : 1; unsigned char has_negateInferredValue : 1; } _flags;
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
