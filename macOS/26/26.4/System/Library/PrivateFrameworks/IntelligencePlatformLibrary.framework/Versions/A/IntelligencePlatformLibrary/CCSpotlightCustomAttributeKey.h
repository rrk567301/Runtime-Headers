@class NSString;

@interface CCSpotlightCustomAttributeKey : CCItemMessage {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _decodeLock;
    BOOL _lazyDecoding;
    BOOL _isDecoded;
}

@property (readonly, nonatomic) NSString *keyName;
@property (readonly, nonatomic) BOOL multiValued;
@property (nonatomic) BOOL hasMultiValued;
@property (readonly, nonatomic) BOOL searchable;
@property (nonatomic) BOOL hasSearchable;
@property (readonly, nonatomic) BOOL searchableByDefault;
@property (nonatomic) BOOL hasSearchableByDefault;
@property (readonly, nonatomic) BOOL unique;
@property (nonatomic) BOOL hasUnique;

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
- (id)initWithKeyName:(id)a0 multiValued:(id)a1 searchable:(id)a2 searchableByDefault:(id)a3 unique:(id)a4 error:(id *)a5;

@end
