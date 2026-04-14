@class CCToolKitToolTypeInstance;

@interface CCToolKitToolComparisonPredicateComparisonTemplate : CCItemMessage

@property (readonly, nonatomic) CCToolKitToolTypeInstance *equalTo;
@property (readonly, nonatomic) CCToolKitToolTypeInstance *notEqualTo;
@property (readonly, nonatomic) unsigned int hasValue;
@property (readonly, nonatomic) unsigned int hasNoValue;
@property (readonly, nonatomic) CCToolKitToolTypeInstance *greaterThan;
@property (readonly, nonatomic) CCToolKitToolTypeInstance *greaterThanOrEqualTo;
@property (readonly, nonatomic) CCToolKitToolTypeInstance *lessThan;
@property (readonly, nonatomic) CCToolKitToolTypeInstance *lessThanOrEqualTo;
@property (readonly, nonatomic) CCToolKitToolTypeInstance *contains;
@property (readonly, nonatomic) CCToolKitToolTypeInstance *notContains;
@property (readonly, nonatomic) CCToolKitToolTypeInstance *beginsWith;
@property (readonly, nonatomic) CCToolKitToolTypeInstance *endsWith;
@property (readonly, nonatomic) CCToolKitToolTypeInstance *inTheNext;
@property (readonly, nonatomic) CCToolKitToolTypeInstance *inTheLast;
@property (readonly, nonatomic) unsigned int isToday;
@property (readonly, nonatomic) CCToolKitToolTypeInstance *isBetween;
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
