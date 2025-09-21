@class NSString, PBUnknownFields;

@interface GEOTransitPrice : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSString *_currencyCode;
    int _amountInCents;
    unsigned int _subunit;
    struct { unsigned char has_amountInCents : 1; unsigned char has_subunit : 1; } _flags;
}

@property (nonatomic) char hasAmountInCents;
@property (nonatomic) int amountInCents;
@property (readonly, nonatomic) char hasCurrencyCode;
@property (retain, nonatomic) NSString *currencyCode;
@property (nonatomic) char hasSubunit;
@property (nonatomic) unsigned int subunit;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
