@class CCToolKitToolTypedValueEnumerationValue, CCToolKitToolTypedValueQueryValue, CCToolKitToolTypedValueEntityValue, CCToolKitToolTypedValueDeferredValue, CCToolKitToolTypedValueCollectionValue, CCToolKitToolTypedValueCodableValue, CCToolKitToolTypedValuePrimitiveValue, CCToolKitToolTypedValueEntityIdentifierValue;

@interface CCToolKitToolTypedValue : CCItemMessage {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _decodeLock;
    BOOL _lazyDecoding;
    BOOL _isDecoded;
}

@property (readonly, nonatomic) CCToolKitToolTypedValuePrimitiveValue *primitive;
@property (readonly, nonatomic) CCToolKitToolTypedValueEnumerationValue *enumeration;
@property (readonly, nonatomic) CCToolKitToolTypedValueEntityValue *entity;
@property (readonly, nonatomic) CCToolKitToolTypedValueCollectionValue *collection;
@property (readonly, nonatomic) CCToolKitToolTypedValueQueryValue *query;
@property (readonly, nonatomic) CCToolKitToolTypedValueEntityIdentifierValue *entityIdentifier;
@property (readonly, nonatomic) CCToolKitToolTypedValueDeferredValue *deferred;
@property (readonly, nonatomic) CCToolKitToolTypedValueCodableValue *codable;
@property (readonly, nonatomic) unsigned int kindType;

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
- (id)initWithKind:(id)a0 kindType:(unsigned int)a1 error:(id *)a2;

@end
