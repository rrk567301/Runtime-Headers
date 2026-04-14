@class NSString;

@interface CCAppShortcutPhraseContent : CCItemMessage <CCItemContent, CCItemFieldEnumerable, CCJSONDescribing> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _decodeLock;
    BOOL _lazyDecoding;
    BOOL _isDecoded;
}

@property (readonly, nonatomic) NSString *actingSourceItemIdentifier;
@property (readonly, nonatomic) NSString *phrase;
@property (readonly, nonatomic) NSString *baseTemplate;
@property (readonly, nonatomic) NSString *templateParameterValue;
@property (readonly, nonatomic) NSString *actionIdentifier;

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
- (id)actingSourceItemIdentifier;
- (id)initWithPhrase:(id)a0 baseTemplate:(id)a1 templateParameterValue:(id)a2 actionIdentifier:(id)a3 error:(id *)a4;
- (id)initWithPhrase:(id)a0 baseTemplate:(id)a1 templateParameterValue:(id)a2 error:(id *)a3;

@end
