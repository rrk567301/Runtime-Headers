@class NSString, NSMutableArray, PKProtobufPaymentTokenConfiguration;

@interface PKProtobufPaymentClientUpdate : PBCodable <NSCopying> {
    struct { unsigned char selectedPaymentType : 1; unsigned char status : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasRemotePaymentRequestIdentifier;
@property (retain, nonatomic) NSString *remotePaymentRequestIdentifier;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) unsigned int status;
@property (retain, nonatomic) NSMutableArray *paymentSummaryItems;
@property (retain, nonatomic) NSMutableArray *shippingMethods;
@property (readonly, nonatomic) BOOL hasSelectedAID;
@property (retain, nonatomic) NSString *selectedAID;
@property (readonly, nonatomic) BOOL hasTokenConfiguration;
@property (retain, nonatomic) PKProtobufPaymentTokenConfiguration *tokenConfiguration;
@property (nonatomic) BOOL hasSelectedPaymentType;
@property (nonatomic) unsigned int selectedPaymentType;

+ (Class)paymentSummaryItemsType;
+ (Class)shippingMethodsType;

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
- (void)addShippingMethods:(id)a0;
- (void)addPaymentSummaryItems:(id)a0;
- (unsigned long long)paymentSummaryItemsCount;
- (void)clearPaymentSummaryItems;
- (id)paymentSummaryItemsAtIndex:(unsigned long long)a0;
- (unsigned long long)shippingMethodsCount;
- (void)clearShippingMethods;
- (id)shippingMethodsAtIndex:(unsigned long long)a0;

@end
