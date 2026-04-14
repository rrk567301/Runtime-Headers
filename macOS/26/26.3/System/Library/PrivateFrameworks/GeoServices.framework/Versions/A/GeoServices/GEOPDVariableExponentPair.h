@class GEOPDClientRankingFeatureUnit, PBUnknownFields;

@interface GEOPDVariableExponentPair : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOPDClientRankingFeatureUnit *_variable;
    unsigned int _exponent;
    struct { unsigned char has_exponent : 1; } _flags;
}

- (id)dictionaryRepresentation;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
