@class NSString, CCToolKitToolTypeDefinitionVersion1EntityProperty, CCToolKitToolComparisonPredicateComparison, CCToolKitToolContentItemClassDescriptor;

@interface CCToolKitToolComparisonPredicate : CCItemMessage

@property (readonly, nonatomic) CCToolKitToolTypeDefinitionVersion1EntityProperty *property;
@property (readonly, nonatomic) CCToolKitToolComparisonPredicateComparison *comparison;
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
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithProperty:(id)a0 comparison:(id)a1 rawGroupId:(id)a2 contentItemClass:(id)a3 error:(id *)a4;

@end
