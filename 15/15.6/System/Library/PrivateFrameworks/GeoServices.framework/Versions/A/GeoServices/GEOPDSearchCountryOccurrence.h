@class NSString;

@interface GEOPDSearchCountryOccurrence : PBCodable <NSCopying> {
    NSString *_alpha3CountryCode;
    unsigned long long _occurrence;
    struct { unsigned char has_occurrence : 1; } _flags;
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
