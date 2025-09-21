@class NSString;

@interface GEOPDSearchCountryOccurrence : PBCodable <NSCopying> {
    NSString *_alpha3CountryCode;
    unsigned long long _occurrence;
    struct { unsigned char has_occurrence : 1; } _flags;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
