@class CCToolKitToolComparisonPredicateComparisonPair, CCToolKitToolTypedValue;

@interface CCToolKitToolComparisonPredicateComparison : CCItemMessage

@property (readonly, nonatomic) CCToolKitToolTypedValue *notEqualTo;
@property (readonly, nonatomic) CCToolKitToolTypedValue *equalTo;
@property (readonly, nonatomic) unsigned int hasValue;
@property (readonly, nonatomic) unsigned int hasNoValue;
@property (readonly, nonatomic) CCToolKitToolTypedValue *greaterThan;
@property (readonly, nonatomic) CCToolKitToolTypedValue *greaterThanOrEqualTo;
@property (readonly, nonatomic) CCToolKitToolTypedValue *lessThan;
@property (readonly, nonatomic) CCToolKitToolTypedValue *lessThanOrEqualTo;
@property (readonly, nonatomic) CCToolKitToolTypedValue *contains;
@property (readonly, nonatomic) CCToolKitToolTypedValue *notContains;
@property (readonly, nonatomic) CCToolKitToolTypedValue *beginsWith;
@property (readonly, nonatomic) CCToolKitToolTypedValue *endsWith;
@property (readonly, nonatomic) CCToolKitToolTypedValue *inTheNext;
@property (readonly, nonatomic) CCToolKitToolTypedValue *inTheLast;
@property (readonly, nonatomic) unsigned int isToday;
@property (readonly, nonatomic) CCToolKitToolComparisonPredicateComparisonPair *isBetween;
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
