@class NSString, NSData, PKProtobufNSDecimalNumber;

@interface PKProtobufPeerPaymentMessage : PBCodable <NSCopying> {
    struct { unsigned char amount : 1; unsigned char recurringPaymentStartDate : 1; unsigned char messagesContext : 1; unsigned char type : 1; } _has;
}

@property (nonatomic) unsigned int version;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) BOOL hasCurrency;
@property (retain, nonatomic) NSString *currency;
@property (nonatomic) BOOL hasAmount;
@property (nonatomic) long long amount;
@property (readonly, nonatomic) BOOL hasDecimalAmount;
@property (retain, nonatomic) PKProtobufNSDecimalNumber *decimalAmount;
@property (readonly, nonatomic) BOOL hasSenderAddress;
@property (retain, nonatomic) NSString *senderAddress;
@property (readonly, nonatomic) BOOL hasRecipientAddress;
@property (retain, nonatomic) NSString *recipientAddress;
@property (readonly, nonatomic) BOOL hasRequestToken;
@property (retain, nonatomic) NSString *requestToken;
@property (readonly, nonatomic) BOOL hasPaymentIdentifier;
@property (retain, nonatomic) NSString *paymentIdentifier;
@property (readonly, nonatomic) BOOL hasTransactionIdentifier;
@property (retain, nonatomic) NSString *transactionIdentifier;
@property (readonly, nonatomic) BOOL hasMemo;
@property (retain, nonatomic) NSString *memo;
@property (readonly, nonatomic) BOOL hasRequestDeviceScoreIdentifier;
@property (retain, nonatomic) NSString *requestDeviceScoreIdentifier;
@property (readonly, nonatomic) BOOL hasRecurringPaymentIdentifier;
@property (retain, nonatomic) NSString *recurringPaymentIdentifier;
@property (readonly, nonatomic) BOOL hasRecurringPaymentEmoji;
@property (retain, nonatomic) NSString *recurringPaymentEmoji;
@property (readonly, nonatomic) BOOL hasRecurringPaymentColor;
@property (retain, nonatomic) NSString *recurringPaymentColor;
@property (nonatomic) BOOL hasRecurringPaymentStartDate;
@property (nonatomic) double recurringPaymentStartDate;
@property (readonly, nonatomic) BOOL hasRecurringPaymentFrequency;
@property (retain, nonatomic) NSString *recurringPaymentFrequency;
@property (readonly, nonatomic) BOOL hasLocalData;
@property (retain, nonatomic) NSData *localData;
@property (nonatomic) BOOL hasMessagesContext;
@property (nonatomic) int messagesContext;
@property (readonly, nonatomic) BOOL hasPaymentSignature;
@property (retain, nonatomic) NSString *paymentSignature;
@property (readonly, nonatomic) BOOL hasMessagesGroupIdentifier;
@property (retain, nonatomic) NSString *messagesGroupIdentifier;

- (id)typeAsString:(int)a0;
- (void)copyTo:(id)a0;
- (int)StringAsType:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (int)StringAsMessagesContext:(id)a0;
- (id)messagesContextAsString:(int)a0;

@end
