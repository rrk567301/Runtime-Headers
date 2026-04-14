@class CCToolKitToolTimestamp;

@interface CCToolKitToolTypedValuePrimitiveValueRecurrenceRuleRecurrenceRuleEnd : CCItemMessage

@property (readonly, nonatomic) long long occurences;
@property (nonatomic) BOOL hasOccurences;
@property (readonly, nonatomic) CCToolKitToolTimestamp *date;
@property (readonly, nonatomic) BOOL never;
@property (nonatomic) BOOL hasNever;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithOccurences:(id)a0 date:(id)a1 never:(id)a2 error:(id *)a3;

@end
