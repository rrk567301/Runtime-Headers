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
+ (id)xqueryDateWithTimeIntervalSinceReferenceDate:(double)a0 forType:(long long)a1;
+ (id)timeZoneGMT;
+ (id)xqueryDateWithGregorianDate:(struct { int x0; char x1; char x2; char x3; char x4; double x5; })a0 timeZone:(id)a1 forType:(long long)a2;
+ (id)xqueryDateTimeFromString:(id)a0;
+ (id)xqueryDateFromString:(id)a0;
+ (id)xqueryTimeFromString:(id)a0;
+ (id)xqueryGMonthYearFromString:(id)a0;
+ (id)xqueryGYearFromString:(id)a0;
+ (id)xqueryGMonthDayFromString:(id)a0;
+ (id)xqueryGDayFromString:(id)a0;
+ (id)xqueryGMonthFromString:(id)a0;

- (void)finalize;
- (void)dealloc;
- (id)init;
- (double)timeIntervalSinceReferenceDate;
- (id)initWithTimeIntervalSinceReferenceDate:(double)a0;
- (void)setTimeZone:(id)a0;
- (id)initWithTimeIntervalSinceNow:(double)a0;
- (id)initWithTimeInterval:(double)a0 sinceDate:(id)a1;
- (id)timeZone;
- (struct { int x0; char x1; char x2; char x3; char x4; double x5; })gregorianDate;
- (id)XQueryStringValue;
- (id)XQueryCastAs:(long long)a0 forContext:(id)a1;
- (long long)XQueryTypeID;
- (struct { int x0; char x1; char x2; char x3; char x4; double x5; })gregorianDateGMT;
- (id)localizedStringForTimeZone:(id)a0;
- (id)initWithTimeIntervalSinceReferenceDate:(double)a0 forType:(long long)a1;

@end
