@class CCToolKitToolRestrictionContextInSetValueSetLinkQuery, NSString, CCToolKitToolRestrictionContextInSetValueSetDynamicEnumeration, CCToolKitToolRestrictionContextInSetValueSetContentPropertyPossibleValues, CCToolKitToolRestrictionContextInSetValueSetDynamicTriggerEnumeration;

@interface CCToolKitToolRestrictionContextInSetValueSet : CCItemMessage {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _decodeLock;
    BOOL _lazyDecoding;
    BOOL _isDecoded;
}

@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) CCToolKitToolRestrictionContextInSetValueSetDynamicEnumeration *dynamicEnumeration;
@property (readonly, nonatomic) CCToolKitToolRestrictionContextInSetValueSetContentPropertyPossibleValues *contentPropertyPossibleValues;
@property (readonly, nonatomic) CCToolKitToolRestrictionContextInSetValueSetLinkQuery *linkQuery;
@property (readonly, nonatomic) NSString *standaloneLinkQuery;
@property (readonly, nonatomic) CCToolKitToolRestrictionContextInSetValueSetLinkQuery *linkQueryOnParameter;
@property (readonly, nonatomic) CCToolKitToolRestrictionContextInSetValueSetDynamicTriggerEnumeration *dynamicEnumerationOnTrigger;
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
- (id)initWithBundleIdentifier:(id)a0 kind:(id)a1 kindType:(unsigned int)a2 error:(id *)a3;

@end
