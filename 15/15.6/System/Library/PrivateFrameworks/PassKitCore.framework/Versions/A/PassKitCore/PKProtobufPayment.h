@class PKProtobufPaymentToken, NSData, PKProtobufShippingMethod;

@interface PKProtobufPayment : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasToken;
@property (retain, nonatomic) PKProtobufPaymentToken *token;
@property (readonly, nonatomic) char hasBillingContact;
@property (retain, nonatomic) NSData *billingContact;
@property (readonly, nonatomic) char hasShippingContact;
@property (retain, nonatomic) NSData *shippingContact;
@property (readonly, nonatomic) char hasShippingMethod;
@property (retain, nonatomic) PKProtobufShippingMethod *shippingMethod;

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
