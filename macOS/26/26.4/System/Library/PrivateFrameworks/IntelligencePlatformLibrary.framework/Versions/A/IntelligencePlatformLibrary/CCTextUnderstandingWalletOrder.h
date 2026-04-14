@class CCTextUnderstandingShippingInformation, NSString, NSDate, CCTextUnderstandingPaymentInformation;

@interface CCTextUnderstandingWalletOrder : CCItemMessage {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _decodeLock;
    BOOL _lazyDecoding;
    BOOL _isDecoded;
    BOOL _hasRaw_orderDate;
    double _raw_orderDate;
}

@property (readonly, nonatomic) unsigned int status;
@property (readonly, nonatomic) NSString *orderNumber;
@property (readonly, nonatomic) NSDate *orderDate;
@property (readonly, nonatomic) NSString *merchantName;
@property (readonly, nonatomic) CCTextUnderstandingPaymentInformation *paymentInformation;
@property (readonly, nonatomic) CCTextUnderstandingShippingInformation *shippingInformation;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;
+ (unsigned short)typeIdentifierForDescription:(id)a0;

- (id)initWithData:(id)a0 error:(id *)a1;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)jsonDictionary;
- (void).cxx_destruct;
- (id)orderDate;
- (BOOL)decodeFieldValuesFromData:(id)a0 error:(id *)a1;
- (BOOL)ensureDecodedWithError:(id *)a0;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (id)initLazyDecodedWithTrustedItemMessageData:(id)a0 error:(id *)a1;
- (id)initWithItemMessageData:(id)a0 error:(id *)a1;
- (id)initWithStatus:(unsigned int)a0 orderNumber:(id)a1 orderDate:(id)a2 merchantName:(id)a3 paymentInformation:(id)a4 shippingInformation:(id)a5 error:(id *)a6;

@end
