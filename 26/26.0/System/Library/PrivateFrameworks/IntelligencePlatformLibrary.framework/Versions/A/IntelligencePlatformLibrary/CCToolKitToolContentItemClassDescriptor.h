@class CCToolKitToolContentItemClassDescriptorLinkEnumContentItemClass, NSString, CCToolKitToolContentItemClassDescriptorLinkCodableContentItemClass, CCToolKitToolContentItemClassDescriptorLinkEntityContentItemClass;

@interface CCToolKitToolContentItemClassDescriptor : CCItemMessage

@property (readonly, nonatomic) NSString *regularContentItemClass;
@property (readonly, nonatomic) CCToolKitToolContentItemClassDescriptorLinkEntityContentItemClass *linkEntityContentItemClass;
@property (readonly, nonatomic) CCToolKitToolContentItemClassDescriptorLinkEnumContentItemClass *linkEnumContentItemClass;
@property (readonly, nonatomic) CCToolKitToolContentItemClassDescriptorLinkCodableContentItemClass *linkCodableContentItemClass;
@property (readonly, nonatomic) unsigned int kindType;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithKind:(id)a0 kindType:(unsigned int)a1 error:(id *)a2;

@end
