@class NSString;

@interface CCToolKitToolToolInvocationOptions : CCItemMessage {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _decodeLock;
    BOOL _lazyDecoding;
    BOOL _isDecoded;
}

@property (readonly, nonatomic) unsigned int interactionMode;
@property (readonly, nonatomic) NSString *locale;
@property (readonly, nonatomic) NSString *requestIdentifier;
@property (readonly, nonatomic) unsigned int interfaceIdiom;
@property (readonly, nonatomic) BOOL shortcutOutput;
@property (nonatomic) BOOL hasShortcutOutput;

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
- (id)initWithInteractionMode:(unsigned int)a0 locale:(id)a1 requestIdentifier:(id)a2 interfaceIdiom:(unsigned int)a3 shortcutOutput:(id)a4 error:(id *)a5;

@end
