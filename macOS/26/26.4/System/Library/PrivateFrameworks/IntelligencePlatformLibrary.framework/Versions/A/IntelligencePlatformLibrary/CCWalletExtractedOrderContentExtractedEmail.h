@class NSString, CCWalletExtractedOrderContentExtractedEmailOrderDetails, CCWalletPaymentsCommerceOrderEmailEmailMetadata;

@interface CCWalletExtractedOrderContentExtractedEmail : CCItemMessage {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _decodeLock;
    BOOL _lazyDecoding;
    BOOL _isDecoded;
}

@property (readonly, nonatomic) CCWalletPaymentsCommerceOrderEmailEmailMetadata *emailMetadata;
@property (readonly, nonatomic) unsigned int emailType;
@property (readonly, nonatomic) NSString *spotlightUniqueIdentifier;
@property (readonly, nonatomic) NSString *spotlightDomainIdentifier;
@property (readonly, nonatomic) CCWalletExtractedOrderContentExtractedEmailOrderDetails *orderDetails;

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
- (id)initWithEmailMetadata:(id)a0 emailType:(unsigned int)a1 error:(id *)a2;
- (id)initWithEmailMetadata:(id)a0 emailType:(unsigned int)a1 spotlightUniqueIdentifier:(id)a2 spotlightDomainIdentifier:(id)a3 error:(id *)a4;
- (id)initWithEmailMetadata:(id)a0 emailType:(unsigned int)a1 spotlightUniqueIdentifier:(id)a2 spotlightDomainIdentifier:(id)a3 orderDetails:(id)a4 error:(id *)a5;

@end
