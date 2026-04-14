@class NSArray, CCToolKitToolTypedValuePrimitiveValueDateComponentsCalendar, CCRepeatedInt64, CCToolKitToolTypedValuePrimitiveValueRecurrenceRuleRecurrenceRuleEnd;

@interface CCToolKitToolTypedValuePrimitiveValueRecurrenceRule : CCItemMessage

@property (readonly, nonatomic) CCToolKitToolTypedValuePrimitiveValueDateComponentsCalendar *calendar;
@property (readonly, nonatomic) unsigned int frequency;
@property (readonly, nonatomic) long long interval;
@property (nonatomic) BOOL hasInterval;
@property (readonly, nonatomic) CCToolKitToolTypedValuePrimitiveValueRecurrenceRuleRecurrenceRuleEnd *end;
@property (readonly, nonatomic) unsigned int matchingPolicy;
@property (readonly, nonatomic) unsigned int repeatedTimePolicy;
@property (readonly, nonatomic) NSArray *months;
@property (readonly, nonatomic) CCRepeatedInt64 *daysOfTheYear;
@property (readonly, nonatomic) CCRepeatedInt64 *daysOfTheMonth;
@property (readonly, nonatomic) CCRepeatedInt64 *weeks;
@property (readonly, nonatomic) NSArray *weekdays;
@property (readonly, nonatomic) CCRepeatedInt64 *hours;
@property (readonly, nonatomic) CCRepeatedInt64 *minutes;
@property (readonly, nonatomic) CCRepeatedInt64 *seconds;
@property (readonly, nonatomic) CCRepeatedInt64 *setPositions;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithCalendar:(id)a0 frequency:(unsigned int)a1 interval:(id)a2 end:(id)a3 matchingPolicy:(unsigned int)a4 repeatedTimePolicy:(unsigned int)a5 months:(id)a6 daysOfTheYear:(id)a7 daysOfTheMonth:(id)a8 weeks:(id)a9 weekdays:(id)a10 hours:(id)a11 minutes:(id)a12 seconds:(id)a13 setPositions:(id)a14 error:(id *)a15;

@end
