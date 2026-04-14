@class NSArray, CCToolKitToolStringSearchPredicateTemplate, CCToolKitToolAllPredicate, CCToolKitToolTypeDefinitionVersion1QueryPredicateTemplatesPredicateMetadata, CCToolKitToolIdSearchPredicateTemplate, CCToolKitToolSuggestedPredicate, CCToolKitToolSearchableItemPredicateTemplate, CCToolKitToolValidPredicate;

@interface CCToolKitToolTypeDefinitionVersion1QueryPredicateTemplates : CCItemMessage

@property (readonly, nonatomic) NSArray *comparison;
@property (readonly, nonatomic) CCToolKitToolStringSearchPredicateTemplate *stringSearch;
@property (readonly, nonatomic) CCToolKitToolIdSearchPredicateTemplate *idSearch;
@property (readonly, nonatomic) CCToolKitToolAllPredicate *all;
@property (readonly, nonatomic) CCToolKitToolSuggestedPredicate *suggested;
@property (readonly, nonatomic) NSArray *sampleInvocations;
@property (readonly, nonatomic) CCToolKitToolSearchableItemPredicateTemplate *searchableItem;
@property (readonly, nonatomic) CCToolKitToolValidPredicate *valid;
@property (readonly, nonatomic) CCToolKitToolTypeDefinitionVersion1QueryPredicateTemplatesPredicateMetadata *metadata;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithComparison:(id)a0 stringSearch:(id)a1 idSearch:(id)a2 all:(id)a3 suggested:(id)a4 sampleInvocations:(id)a5 searchableItem:(id)a6 valid:(id)a7 metadata:(id)a8 error:(id *)a9;

@end
