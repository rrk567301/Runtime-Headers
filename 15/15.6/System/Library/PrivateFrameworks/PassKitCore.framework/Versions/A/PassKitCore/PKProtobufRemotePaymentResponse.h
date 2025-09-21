@class PKProtobufPayment, NSString;

@interface PKProtobufRemotePaymentResponse : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasPayment;
@property (retain, nonatomic) PKProtobufPayment *payment;
@property (readonly, nonatomic) char hasRemotePaymentRequestIdentifier;
@property (retain, nonatomic) NSString *remotePaymentRequestIdentifier;

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
