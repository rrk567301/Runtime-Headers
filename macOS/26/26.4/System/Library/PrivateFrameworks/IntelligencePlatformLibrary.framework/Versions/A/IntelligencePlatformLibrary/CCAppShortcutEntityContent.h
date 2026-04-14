@class NSString, NSArray;

@interface CCAppShortcutEntityContent : CCItemMessage <CCItemContent, CCItemFieldEnumerable, CCJSONDescribing> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _decodeLock;
    BOOL _lazyDecoding;
    BOOL _isDecoded;
}

@property (readonly, nonatomic) NSString *entityTitle;
@property (readonly, nonatomic) NSString *entityInstanceIdentifier;
@property (readonly, nonatomic) NSString *entityTypeIdentifier;
@property (readonly, nonatomic) NSString *providerClass;
@property (readonly, nonatomic) NSArray *entitySynonyms;

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
- (id)initWithEntityTitle:(id)a0 entityInstanceIdentifier:(id)a1 entityTypeIdentifier:(id)a2 providerClass:(id)a3 entitySynonyms:(id)a4 error:(id *)a5;
- (id)initWithEntityTitle:(id)a0 entityInstanceIdentifier:(id)a1 entityTypeIdentifier:(id)a2 providerClass:(id)a3 error:(id *)a4;

@end
