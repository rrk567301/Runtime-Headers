@interface CCToolKitToolTypedValuePrimitiveValueRecurrenceRuleRecurrenceRuleWeekday : CCItemMessage

@property (readonly, nonatomic) unsigned int RecurrenceRuleWeekdayWeekday;
@property (readonly, nonatomic) BOOL RecurrenceRuleWeekdayEvery;
@property (nonatomic) BOOL hasRecurrenceRuleWeekdayEvery;
@property (readonly, nonatomic) long long RecurrenceRuleWeekdayNth;
@property (nonatomic) BOOL hasRecurrenceRuleWeekdayNth;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithRecurrenceRuleWeekdayWeekday:(unsigned int)a0 RecurrenceRuleWeekdayEvery:(id)a1 RecurrenceRuleWeekdayNth:(id)a2 error:(id *)a3;

@end
