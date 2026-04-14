@class NSString;

@interface GEOPDSearchCountryOccurrence : PBCodable <NSCopying> {
    NSString *_alpha3CountryCode;
    unsigned long long _occurrence;
    struct { unsigned char has_occurrence : 1; } _flags;
}

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)jsonRepresentation;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
