@class NSString, NSDate;

@interface CCWalletPaymentsCommerceTrackedOrderMerchant : CCItemMessage {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _decodeLock;
    BOOL _lazyDecoding;
    BOOL _isDecoded;
    BOOL _hasRaw_displayNameUpdateDate;
    double _raw_displayNameUpdateDate;
}

@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *domainName;
@property (readonly, nonatomic) NSDate *displayNameUpdateDate;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;
+ (unsigned short)typeIdentifierForDescription:(id)a0;

- (id)initWithData:(id)a0 error:(id *)a1;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)jsonDictionary;
- (void).cxx_destruct;
- (id)displayNameUpdateDate;
- (BOOL)decodeFieldValuesFromData:(id)a0 error:(id *)a1;
- (BOOL)ensureDecodedWithError:(id *)a0;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (id)initLazyDecodedWithTrustedItemMessageData:(id)a0 error:(id *)a1;
- (id)initWithItemMessageData:(id)a0 error:(id *)a1;
- (id)initWithDisplayName:(id)a0 domainName:(id)a1 displayNameUpdateDate:(id)a2 error:(id *)a3;
- (id)initWithDisplayName:(id)a0 domainName:(id)a1 error:(id *)a2;

@end
