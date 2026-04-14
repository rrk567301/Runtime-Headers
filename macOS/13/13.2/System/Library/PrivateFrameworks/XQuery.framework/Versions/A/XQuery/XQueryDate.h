@class NSString, NSTimeZone;

@interface XQueryDate : NSDate <XQueryAtomicType> {
    double _timeInterval;
    NSTimeZone *_timeZone;
    long long _type;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)currentTime;
+ (id)currentDateTime;
+ (id)currentDate;
+ (id)timeZoneGMT;
+ (id)xqueryDateWithGregorianDate:(struct { int x0; char x1; char x2; char x3; char x4; double x5; })a0 timeZone:(id)a1 forType:(long long)a2;
+ (id)xqueryDateWithTimeIntervalSinceReferenceDate:(double)a0 forType:(long long)a1;
+ (id)xqueryDateTimeFromString:(id)a0;
+ (id)xqueryDateFromString:(id)a0;
+ (id)xqueryTimeFromString:(id)a0;
+ (id)xqueryGMonthYearFromString:(id)a0;
+ (id)xqueryGYearFromString:(id)a0;
+ (id)xqueryGMonthDayFromString:(id)a0;
+ (id)xqueryGDayFromString:(id)a0;
+ (id)xqueryGMonthFromString:(id)a0;

- (void)dealloc;
- (id)init;
- (void)finalize;
- (double)timeIntervalSinceReferenceDate;
- (id)initWithTimeIntervalSinceReferenceDate:(double)a0;
- (id)initWithTimeIntervalSinceNow:(double)a0;
- (id)initWithTimeInterval:(double)a0 sinceDate:(id)a1;
- (id)timeZone;
- (void)setTimeZone:(id)a0;
- (id)XQueryCastAs:(long long)a0 forContext:(id)a1;
- (long long)XQueryTypeID;
- (id)XQueryStringValue;
- (id)initWithTimeIntervalSinceReferenceDate:(double)a0 forType:(long long)a1;
- (id)localizedStringForTimeZone:(id)a0;
- (struct { int x0; char x1; char x2; char x3; char x4; double x5; })gregorianDate;
- (struct { int x0; char x1; char x2; char x3; char x4; double x5; })gregorianDateGMT;

@end
