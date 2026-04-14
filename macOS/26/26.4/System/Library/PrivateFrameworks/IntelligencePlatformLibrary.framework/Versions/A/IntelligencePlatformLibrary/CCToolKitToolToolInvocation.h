@class NSString, NSArray, CCToolKitToolToolInvocationOptions, CCToolKitToolContainerDefinitionDevice;

@interface CCToolKitToolToolInvocation : CCItemMessage {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _decodeLock;
    BOOL _lazyDecoding;
    BOOL _isDecoded;
}

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *toolIdentifier;
@property (readonly, nonatomic) CCToolKitToolContainerDefinitionDevice *target;
@property (readonly, nonatomic) NSArray *parameterValues;
@property (readonly, nonatomic) CCToolKitToolToolInvocationOptions *options;

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
- (id)initWithIdentifier:(id)a0 toolIdentifier:(id)a1 target:(id)a2 parameterValues:(id)a3 options:(id)a4 error:(id *)a5;

@end
