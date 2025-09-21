@class NSMutableArray, PBUnknownFields;

@interface GEOTransitSurcharge : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_surchargeUnits;
    unsigned int _numberOfLegs;
    int _paymentType;
    struct { unsigned char has_numberOfLegs : 1; unsigned char has_paymentType : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *surchargeUnits;
@property (nonatomic) char hasPaymentType;
@property (nonatomic) int paymentType;
@property (nonatomic) char hasNumberOfLegs;
@property (nonatomic) unsigned int numberOfLegs;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;
+ (Class)surchargeUnitType;

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
- (void)addSurchargeUnit:(id)a0;
- (void)clearSurchargeUnits;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)paymentTypeAsString:(int)a0;
- (void)readAll:(char)a0;
- (id)surchargeUnitAtIndex:(unsigned long long)a0;
- (unsigned long long)surchargeUnitsCount;

@end
