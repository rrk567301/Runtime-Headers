@class NSString, PBUnknownFields;

@interface GEOPrice : PBCodable <GEOServerFormatTokenPriceValue, NSCopying> {
    PBUnknownFields *_unknownFields;
    NSString *_currencyCode;
    float _amount;
    struct { unsigned char has_amount : 1; } _flags;
}

@property (readonly, nonatomic) double value;
@property (readonly, nonatomic) NSString *currencyCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) char hasAmount;
@property (nonatomic) float amount;
@property (readonly, nonatomic) char hasCurrencyCode;
@property (retain, nonatomic) NSString *currencyCode;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
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
