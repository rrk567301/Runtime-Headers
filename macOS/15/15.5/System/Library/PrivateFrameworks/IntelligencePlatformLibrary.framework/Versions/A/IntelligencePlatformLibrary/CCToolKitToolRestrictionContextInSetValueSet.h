@class CCToolKitToolRestrictionContextInSetValueSetLinkQuery, NSString, CCToolKitToolRestrictionContextInSetValueSetDynamicEnumeration, CCToolKitToolRestrictionContextInSetValueSetContentPropertyPossibleValues;

@interface CCToolKitToolRestrictionContextInSetValueSet : CCItemMessage

@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) CCToolKitToolRestrictionContextInSetValueSetDynamicEnumeration *dynamicEnumeration;
@property (readonly, nonatomic) CCToolKitToolRestrictionContextInSetValueSetContentPropertyPossibleValues *contentPropertyPossibleValues;
@property (readonly, nonatomic) CCToolKitToolRestrictionContextInSetValueSetLinkQuery *linkQuery;
@property (readonly, nonatomic) NSString *standaloneLinkQuery;
@property (readonly, nonatomic) CCToolKitToolRestrictionContextInSetValueSetLinkQuery *linkQueryOnParameter;
@property (readonly, nonatomic) unsigned int kindType;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithBundleIdentifier:(id)a0 kind:(id)a1 kindType:(unsigned int)a2 error:(id *)a3;

@end
