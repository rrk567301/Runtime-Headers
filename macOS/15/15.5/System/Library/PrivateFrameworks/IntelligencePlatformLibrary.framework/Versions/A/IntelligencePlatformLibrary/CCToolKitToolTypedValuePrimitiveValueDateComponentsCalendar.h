@class NSString;

@interface CCToolKitToolTypedValuePrimitiveValueDateComponentsCalendar : CCItemMessage

@property (readonly, nonatomic) unsigned int identifier;
@property (readonly, nonatomic) NSString *timeZoneIdentifier;
@property (readonly, nonatomic) NSString *localeIdentifier;
@property (readonly, nonatomic) long long firstWeekday;
@property (nonatomic) BOOL hasFirstWeekday;
@property (readonly, nonatomic) long long minimumDaysInFirstWeek;
@property (nonatomic) BOOL hasMinimumDaysInFirstWeek;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithIdentifier:(unsigned int)a0 timeZoneIdentifier:(id)a1 localeIdentifier:(id)a2 firstWeekday:(id)a3 minimumDaysInFirstWeek:(id)a4 error:(id *)a5;

@end
