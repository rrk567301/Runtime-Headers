@class PBUnknownFields;

@interface GEOFareOptions : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    int _paymentType;
    int _preferredSurchargeType;
    struct { unsigned char has_paymentType : 1; unsigned char has_preferredSurchargeType : 1; } _flags;
}

@property (nonatomic) char hasPreferredSurchargeType;
@property (nonatomic) int preferredSurchargeType;
@property (nonatomic) char hasPaymentType;
@property (nonatomic) int paymentType;
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
- (int)StringAsPaymentType:(id)a0;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)paymentTypeAsString:(int)a0;
- (void)readAll:(char)a0;

@end
