@class NSArray, CCToolKitToolToolDefinitionVersion1;

@interface CCToolKitToolContent : CCItemMessage <CCItemContent, CCItemFieldEnumerable, CCJSONDescribing> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _decodeLock;
    BOOL _lazyDecoding;
    BOOL _isDecoded;
}

@property (readonly, nonatomic) CCToolKitToolToolDefinitionVersion1 *toolDefinition;
@property (readonly, nonatomic) NSArray *typeDefinitions;
@property (readonly, nonatomic) NSArray *localizedStringsByLocale;

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
- (id)initWithToolDefinition:(id)a0 typeDefinitions:(id)a1 localizedStringsByLocale:(id)a2 error:(id *)a3;

@end
