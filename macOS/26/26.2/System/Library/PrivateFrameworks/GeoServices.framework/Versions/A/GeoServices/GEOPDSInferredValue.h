@class GEOPDSRawAttribute, PBUnknownFields;

@interface GEOPDSInferredValue : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOPDSRawAttribute *_attribute;
    int _priceRange;
    int _tradingHours;
    BOOL _negateInferredValue;
    struct { unsigned char has_priceRange : 1; unsigned char has_tradingHours : 1; unsigned char has_negateInferredValue : 1; } _flags;
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
