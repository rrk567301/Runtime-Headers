@interface XSDateFormatterFactory : NSObject

+ (id)newDateTimeFormatters;
+ (id)newDateTimeFormatterWithTimeZoneStyle:(long long)a0;
+ (id)newDateFormatter;
+ (id)newDateFormatters;
+ (id)newTimeFormatterWithTimeZoneStyle:(long long)a0;
+ (id)newTimeFormatters;

@end
