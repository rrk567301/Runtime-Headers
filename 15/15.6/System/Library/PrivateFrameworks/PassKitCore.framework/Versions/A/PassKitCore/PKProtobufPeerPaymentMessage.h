@class NSString, NSData, PKProtobufNSDecimalNumber;

@interface PKProtobufPeerPaymentMessage : PBCodable <NSCopying> {
    struct { unsigned char amount : 1; unsigned char recurringPaymentStartDate : 1; unsigned char type : 1; } _has;
}

@property (nonatomic) unsigned int version;
@property (readonly, nonatomic) char hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) char hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) char hasCurrency;
@property (retain, nonatomic) NSString *currency;
@property (nonatomic) char hasAmount;
@property (nonatomic) long long amount;
@property (readonly, nonatomic) char hasDecimalAmount;
@property (retain, nonatomic) PKProtobufNSDecimalNumber *decimalAmount;
@property (readonly, nonatomic) char hasSenderAddress;
@property (retain, nonatomic) NSString *senderAddress;
@property (readonly, nonatomic) char hasRecipientAddress;
@property (retain, nonatomic) NSString *recipientAddress;
@property (readonly, nonatomic) char hasRequestToken;
@property (retain, nonatomic) NSString *requestToken;
@property (readonly, nonatomic) char hasPaymentIdentifier;
@property (retain, nonatomic) NSString *paymentIdentifier;
@property (readonly, nonatomic) char hasTransactionIdentifier;
@property (retain, nonatomic) NSString *transactionIdentifier;
@property (readonly, nonatomic) char hasMemo;
@property (retain, nonatomic) NSString *memo;
@property (readonly, nonatomic) char hasRequestDeviceScoreIdentifier;
@property (retain, nonatomic) NSString *requestDeviceScoreIdentifier;
@property (readonly, nonatomic) char hasRecurringPaymentIdentifier;
@property (retain, nonatomic) NSString *recurringPaymentIdentifier;
@property (readonly, nonatomic) char hasRecurringPaymentEmoji;
@property (retain, nonatomic) NSString *recurringPaymentEmoji;
@property (readonly, nonatomic) char hasRecurringPaymentColor;
@property (retain, nonatomic) NSString *recurringPaymentColor;
@property (nonatomic) char hasRecurringPaymentStartDate;
@property (nonatomic) double recurringPaymentStartDate;
@property (readonly, nonatomic) char hasRecurringPaymentFrequency;
@property (retain, nonatomic) NSString *recurringPaymentFrequency;
@property (readonly, nonatomic) char hasLocalData;
@property (retain, nonatomic) NSData *localData;

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
- (int)StringAsType:(id)a0;
- (id)typeAsString:(int)a0;

@end
