@class GEOPDSRawAttribute, PBUnknownFields;

@interface GEOPDSInferredValue : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOPDSRawAttribute *_attribute;
    int _priceRange;
    int _tradingHours;
    char _negateInferredValue;
    struct { unsigned char has_priceRange : 1; unsigned char has_tradingHours : 1; unsigned char has_negateInferredValue : 1; } _flags;
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
