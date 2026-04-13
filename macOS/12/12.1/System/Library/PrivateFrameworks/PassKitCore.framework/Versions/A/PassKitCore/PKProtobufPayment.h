@class PKProtobufPaymentToken, NSData, PKProtobufShippingMethod;

@interface PKProtobufPayment : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasToken;
@property (retain, nonatomic) PKProtobufPaymentToken *token;
@property (readonly, nonatomic) BOOL hasBillingContact;
@property (retain, nonatomic) NSData *billingContact;
@property (readonly, nonatomic) BOOL hasShippingContact;
@property (retain, nonatomic) NSData *shippingContact;
@property (readonly, nonatomic) BOOL hasShippingMethod;
@property (retain, nonatomic) PKProtobufShippingMethod *shippingMethod;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;

@end
