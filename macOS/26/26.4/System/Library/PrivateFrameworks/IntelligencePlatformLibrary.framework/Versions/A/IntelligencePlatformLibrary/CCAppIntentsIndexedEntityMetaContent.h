@class NSString, NSDate;

@interface CCAppIntentsIndexedEntityMetaContent : CCItemMessage <CCItemMetaContent, CCItemFieldEnumerable, CCJSONDescribing, CCExpirable> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _decodeLock;
    BOOL _lazyDecoding;
    BOOL _isDecoded;
    BOOL _hasRaw_expirationDate;
    double _raw_expirationDate;
}

@property (readonly, nonatomic) float saliency;
@property (nonatomic) BOOL hasSaliency;
@property (readonly, nonatomic) NSString *domainIdentifier;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) NSString *instanceIdentifier;
@property (readonly, nonatomic) NSString *sourceItemIdentifier;

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
- (BOOL)decodeFieldValuesFromData:(id)a0 error:(id *)a1;
- (BOOL)ensureDecodedWithError:(id *)a0;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (id)initLazyDecodedWithTrustedItemMessageData:(id)a0 error:(id *)a1;
- (id)initWithItemMessageData:(id)a0 error:(id *)a1;
- (id)initWithSourceItemIdentifier:(id)a0 saliency:(id)a1 domainIdentifier:(id)a2 expirationDate:(id)a3 error:(id *)a4;
- (id)initWithSourceItemIdentifier:(id)a0 saliency:(id)a1 domainIdentifier:(id)a2 expirationDate:(id)a3 instanceIdentifier:(id)a4 error:(id *)a5;
- (id)initWithSourceItemIdentifier:(id)a0 saliency:(id)a1 error:(id *)a2;

@end
