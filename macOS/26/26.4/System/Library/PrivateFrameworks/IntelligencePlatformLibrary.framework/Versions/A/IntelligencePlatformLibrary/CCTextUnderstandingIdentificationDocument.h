@class CCTextUnderstandingContact, NSString, NSDate;

@interface CCTextUnderstandingIdentificationDocument : CCItemMessage {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _decodeLock;
    BOOL _lazyDecoding;
    BOOL _isDecoded;
    BOOL _hasRaw_issueDate;
    double _raw_issueDate;
    BOOL _hasRaw_expirationDate;
    double _raw_expirationDate;
}

@property (readonly, nonatomic) unsigned int kind;
@property (readonly, nonatomic) CCTextUnderstandingContact *subject;
@property (readonly, nonatomic) NSString *cardType;
@property (readonly, nonatomic) NSString *cardProvider;
@property (readonly, nonatomic) NSString *cardNumber;
@property (readonly, nonatomic) NSString *cardGroupNumber;
@property (readonly, nonatomic) NSDate *issueDate;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) NSString *issuedBy;
@property (readonly, nonatomic) NSString *region;
@property (readonly, nonatomic) NSString *country;
@property (readonly, nonatomic) NSString *cardCategory;
@property (readonly, nonatomic) NSString *cardRestrictions;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;
+ (unsigned short)typeIdentifierForDescription:(id)a0;

- (id)initWithData:(id)a0 error:(id *)a1;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)jsonDictionary;
- (void).cxx_destruct;
- (id)expirationDate;
- (id)issueDate;
- (id)initWithKind:(unsigned int)a0 subject:(id)a1 cardType:(id)a2 cardProvider:(id)a3 cardNumber:(id)a4 cardGroupNumber:(id)a5 issueDate:(id)a6 expirationDate:(id)a7 issuedBy:(id)a8 region:(id)a9 country:(id)a10 cardCategory:(id)a11 cardRestrictions:(id)a12 error:(id *)a13;
- (BOOL)decodeFieldValuesFromData:(id)a0 error:(id *)a1;
- (BOOL)ensureDecodedWithError:(id *)a0;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (id)initLazyDecodedWithTrustedItemMessageData:(id)a0 error:(id *)a1;
- (id)initWithItemMessageData:(id)a0 error:(id *)a1;

@end
