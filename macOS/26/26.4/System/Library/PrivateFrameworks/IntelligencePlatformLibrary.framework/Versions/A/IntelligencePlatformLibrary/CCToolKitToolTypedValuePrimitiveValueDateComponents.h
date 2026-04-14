@class NSString, CCToolKitToolTypedValuePrimitiveValueDateComponentsCalendar;

@interface CCToolKitToolTypedValuePrimitiveValueDateComponents : CCItemMessage {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _decodeLock;
    BOOL _lazyDecoding;
    BOOL _isDecoded;
}

@property (readonly, nonatomic) CCToolKitToolTypedValuePrimitiveValueDateComponentsCalendar *calendar;
@property (readonly, nonatomic) NSString *timeZoneIdentifier;
@property (readonly, nonatomic) long long era;
@property (nonatomic) BOOL hasEra;
@property (readonly, nonatomic) long long year;
@property (nonatomic) BOOL hasYear;
@property (readonly, nonatomic) long long month;
@property (nonatomic) BOOL hasMonth;
@property (readonly, nonatomic) long long day;
@property (nonatomic) BOOL hasDay;
@property (readonly, nonatomic) long long hour;
@property (nonatomic) BOOL hasHour;
@property (readonly, nonatomic) long long minute;
@property (nonatomic) BOOL hasMinute;
@property (readonly, nonatomic) long long second;
@property (nonatomic) BOOL hasSecond;
@property (readonly, nonatomic) long long nanosecond;
@property (nonatomic) BOOL hasNanosecond;
@property (readonly, nonatomic) long long weekday;
@property (nonatomic) BOOL hasWeekday;
@property (readonly, nonatomic) long long weekdayOrdinal;
@property (nonatomic) BOOL hasWeekdayOrdinal;
@property (readonly, nonatomic) long long quarter;
@property (nonatomic) BOOL hasQuarter;
@property (readonly, nonatomic) long long weekOfMonth;
@property (nonatomic) BOOL hasWeekOfMonth;
@property (readonly, nonatomic) long long weekOfYear;
@property (nonatomic) BOOL hasWeekOfYear;
@property (readonly, nonatomic) long long yearForWeekOfYear;
@property (nonatomic) BOOL hasYearForWeekOfYear;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;
+ (unsigned short)typeIdentifierForDescription:(id)a0;

- (id)initWithData:(id)a0 error:(id *)a1;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)jsonDictionary;
- (void).cxx_destruct;
- (BOOL)decodeFieldValuesFromData:(id)a0 error:(id *)a1;
- (BOOL)ensureDecodedWithError:(id *)a0;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (id)initLazyDecodedWithTrustedItemMessageData:(id)a0 error:(id *)a1;
- (id)initWithItemMessageData:(id)a0 error:(id *)a1;
- (id)initWithCalendar:(id)a0 timeZoneIdentifier:(id)a1 era:(id)a2 year:(id)a3 month:(id)a4 day:(id)a5 hour:(id)a6 minute:(id)a7 second:(id)a8 nanosecond:(id)a9 weekday:(id)a10 weekdayOrdinal:(id)a11 quarter:(id)a12 weekOfMonth:(id)a13 weekOfYear:(id)a14 yearForWeekOfYear:(id)a15 error:(id *)a16;

@end
