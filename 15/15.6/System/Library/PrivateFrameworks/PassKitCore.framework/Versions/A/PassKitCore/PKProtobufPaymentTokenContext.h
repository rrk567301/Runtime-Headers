@class NSString, PKProtobufNSDecimalNumber, PKProtobufCustomPrecisionAmount;

@interface PKProtobufPaymentTokenContext : PBCodable <NSCopying> {
    struct { unsigned char amount : 1; } _has;
}

@property (readonly, nonatomic) char hasMerchantIdentifier;
@property (retain, nonatomic) NSString *merchantIdentifier;
@property (readonly, nonatomic) char hasExternalIdentifier;
@property (retain, nonatomic) NSString *externalIdentifier;
@property (readonly, nonatomic) char hasMerchantName;
@property (retain, nonatomic) NSString *merchantName;
@property (readonly, nonatomic) char hasMerchantDomain;
@property (retain, nonatomic) NSString *merchantDomain;
@property (nonatomic) char hasAmount;
@property (nonatomic) long long amount;
@property (readonly, nonatomic) char hasCustomPrecisionAmount;
@property (retain, nonatomic) PKProtobufCustomPrecisionAmount *customPrecisionAmount;
@property (readonly, nonatomic) char hasDecimalAmount;
@property (retain, nonatomic) PKProtobufNSDecimalNumber *decimalAmount;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
