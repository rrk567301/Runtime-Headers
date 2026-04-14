@class NSString, CCWalletPaymentsCommerceTrackedOrderTransactionPaymentMethod;

@interface CCWalletPaymentsCommerceTrackedOrderTransaction : CCItemMessage {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _decodeLock;
    BOOL _lazyDecoding;
    BOOL _isDecoded;
}

@property (readonly, nonatomic) NSString *amount;
@property (readonly, nonatomic) NSString *isoCurrencyCode;
@property (readonly, nonatomic) CCWalletPaymentsCommerceTrackedOrderTransactionPaymentMethod *paymentMethod;
@property (readonly, nonatomic) NSString *transactionIdenifier;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;
+ (unsigned short)typeIdentifierForDescription:(id)a0;

- (id)initWithData:(id)a0 error:(id *)a1;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)jsonDictionary;
- (void).cxx_destruct;
- (BOOL)decodeFieldValuesFromData:(id)a0 error:(id *)a1;
- (BOOL)ensureDecodedWithError:(id *)a0;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (id)initLazyDecodedWithTrustedItemMessageData:(id)a0 error:(id *)a1;
- (id)initWithItemMessageData:(id)a0 error:(id *)a1;
- (id)initWithAmount:(id)a0 isoCurrencyCode:(id)a1 paymentMethod:(id)a2 transactionIdenifier:(id)a3 error:(id *)a4;

@end
