@class CCToolKitToolContentItemClassDescriptor, NSString;

@interface CCToolKitToolRestrictionContextInSetValueSetContentPropertyPossibleValues : CCItemMessage

@property (readonly, nonatomic) CCToolKitToolContentItemClassDescriptor *contentItemClass;
@property (readonly, nonatomic) NSString *propertyName;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (char)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithContentItemClass:(id)a0 propertyName:(id)a1 error:(id *)a2;

@end
