@class CCToolKitToolComparisonPredicateComparisonTemplate, NSString, CCToolKitToolTypeDefinitionVersion1EntityProperty, CCToolKitToolContentItemClassDescriptor;

@interface CCToolKitToolComparisonPredicateTemplate : CCItemMessage

@property (readonly, nonatomic) CCToolKitToolTypeDefinitionVersion1EntityProperty *property;
@property (readonly, nonatomic) CCToolKitToolComparisonPredicateComparisonTemplate *comparisonTemplate;
@property (readonly, nonatomic) NSString *rawGroupId;
@property (readonly, nonatomic) CCToolKitToolContentItemClassDescriptor *contentItemClass;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (char)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithProperty:(id)a0 comparisonTemplate:(id)a1 rawGroupId:(id)a2 contentItemClass:(id)a3 error:(id *)a4;

@end
