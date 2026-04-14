@class CCTextUnderstandingContact, NSString;

@interface CCTextUnderstandingPaymentInformation : CCItemMessage {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _decodeLock;
    BOOL _lazyDecoding;
    BOOL _isDecoded;
}

@property (readonly, nonatomic) CCTextUnderstandingContact *billingContact;
@property (readonly, nonatomic) NSString *paymentMethod;
@property (readonly, nonatomic) NSString *lastFourDigits;
@property (readonly, nonatomic) NSString *totalCost;
@property (readonly, nonatomic) NSString *currencyUnit;

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
- (id)initWithBillingContact:(id)a0 paymentMethod:(id)a1 lastFourDigits:(id)a2 totalCost:(id)a3 currencyUnit:(id)a4 error:(id *)a5;

@end
