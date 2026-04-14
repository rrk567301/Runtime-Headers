@class CCToolKitToolSearchableItemPredicate, CCToolKitToolCompoundPredicate, CCToolKitToolAllPredicate, CCToolKitToolStringSearchPredicate, CCToolKitToolComparisonPredicate, CCToolKitToolSuggestedPredicate, CCToolKitToolIdSearchPredicate, CCToolKitToolValidPredicate;

@interface CCToolKitToolQueryAnyPredicate : CCItemMessage

@property (readonly, nonatomic) CCToolKitToolComparisonPredicate *comparison;
@property (readonly, nonatomic) CCToolKitToolCompoundPredicate *compound;
@property (readonly, nonatomic) CCToolKitToolStringSearchPredicate *stringSearch;
@property (readonly, nonatomic) CCToolKitToolIdSearchPredicate *idSearch;
@property (readonly, nonatomic) CCToolKitToolAllPredicate *all;
@property (readonly, nonatomic) CCToolKitToolSuggestedPredicate *suggested;
@property (readonly, nonatomic) CCToolKitToolSearchableItemPredicate *searchableItem;
@property (readonly, nonatomic) CCToolKitToolValidPredicate *valid;
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
- (id)initWithKind:(id)a0 kindType:(unsigned int)a1 error:(id *)a2;

@end
