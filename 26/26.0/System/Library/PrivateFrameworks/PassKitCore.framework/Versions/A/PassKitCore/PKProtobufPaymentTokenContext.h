@class NSString, PKProtobufNSDecimalNumber, PKProtobufCustomPrecisionAmount;

@interface PKProtobufPaymentTokenContext : PBCodable <NSCopying> {
    struct { unsigned char amount : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasMerchantIdentifier;
@property (retain, nonatomic) NSString *merchantIdentifier;
@property (readonly, nonatomic) BOOL hasExternalIdentifier;
@property (retain, nonatomic) NSString *externalIdentifier;
@property (readonly, nonatomic) BOOL hasMerchantName;
@property (retain, nonatomic) NSString *merchantName;
@property (readonly, nonatomic) BOOL hasMerchantDomain;
@property (retain, nonatomic) NSString *merchantDomain;
@property (nonatomic) BOOL hasAmount;
@property (nonatomic) long long amount;
@property (readonly, nonatomic) BOOL hasCustomPrecisionAmount;
@property (retain, nonatomic) PKProtobufCustomPrecisionAmount *customPrecisionAmount;
@property (readonly, nonatomic) BOOL hasDecimalAmount;
@property (retain, nonatomic) PKProtobufNSDecimalNumber *decimalAmount;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
