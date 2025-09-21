@class PKProtobufPaymentMethod, NSString, NSData, PKProtobufShippingMethod;

@interface PKProtobufPaymentHostUpdate : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasRemotePaymentRequestIdentifier;
@property (retain, nonatomic) NSString *remotePaymentRequestIdentifier;
@property (readonly, nonatomic) char hasShippingContact;
@property (retain, nonatomic) NSData *shippingContact;
@property (readonly, nonatomic) char hasShippingMethod;
@property (retain, nonatomic) PKProtobufShippingMethod *shippingMethod;
@property (readonly, nonatomic) char hasPaymentMethod;
@property (retain, nonatomic) PKProtobufPaymentMethod *paymentMethod;

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
