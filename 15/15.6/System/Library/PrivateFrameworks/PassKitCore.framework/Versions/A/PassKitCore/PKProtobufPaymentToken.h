@class PKProtobufPaymentMethod, NSString, NSData;

@interface PKProtobufPaymentToken : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasPaymentMethod;
@property (retain, nonatomic) PKProtobufPaymentMethod *paymentMethod;
@property (readonly, nonatomic) char hasInstrumentName;
@property (retain, nonatomic) NSString *instrumentName;
@property (readonly, nonatomic) char hasNetwork;
@property (retain, nonatomic) NSString *network;
@property (readonly, nonatomic) char hasTransactionIdentifier;
@property (retain, nonatomic) NSString *transactionIdentifier;
@property (readonly, nonatomic) char hasPaymentData;
@property (retain, nonatomic) NSData *paymentData;
@property (readonly, nonatomic) char hasRedeemURL;
@property (retain, nonatomic) NSString *redeemURL;
@property (readonly, nonatomic) char hasRetryNonce;
@property (retain, nonatomic) NSString *retryNonce;

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
