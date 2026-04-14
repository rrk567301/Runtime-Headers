@class NSTimeZone, NSString, NSDate;

@interface EKEventRangePredicate : EKPredicate <CalDateRangeProtocol> {
    NSDate *_startDate;
    NSDate *_endDate;
    NSTimeZone *_timeZone;
    long long _prefetchHint;
    long long _exclusionOptions;
    long long _faultingOption;
}

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSTimeZone *timeZone;
@property (readonly, nonatomic) long long prefetchHint;
@property (readonly, nonatomic) long long exclusionOptions;
@property (readonly, nonatomic) long long faultingOption;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)predicateWithStartDate:(id)a0 endDate:(id)a1 timeZone:(id)a2 calendars:(id)a3 prefetchHint:(long long)a4;
+ (id)predicateWithStartDate:(id)a0 endDate:(id)a1 timeZone:(id)a2 calendars:(id)a3 prefetchHint:(long long)a4 exclusionOptions:(long long)a5;
+ (id)predicateWithStartDate:(id)a0 endDate:(id)a1 timeZone:(id)a2 calendarIdentifiers:(id)a3 prefetchHint:(long long)a4 exclusionOptions:(long long)a5;
+ (id)predicateWithStartDate:(id)a0 endDate:(id)a1 timeZone:(id)a2 calendars:(id)a3 prefetchHint:(long long)a4 exclusionOptions:(long long)a5 faultingOption:(long long)a6;
+ (id)predicateWithStartDate:(id)a0 endDate:(id)a1 timeZone:(id)a2 calendars:(id)a3;
+ (id)predicateWithStartDate:(id)a0 endDate:(id)a1 timeZone:(id)a2 calendarIdentifiers:(id)a3 prefetchHint:(long long)a4;
+ (id)predicateWithStartDate:(id)a0 endDate:(id)a1 timeZone:(id)a2 calendarIdentifiers:(id)a3 prefetchHint:(long long)a4 exclusionOptions:(long long)a5 faultingOption:(long long)a6;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)evaluateWithObject:(id)a0;
- (id)predicateFormat;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 timeZone:(id)a2 calendars:(id)a3 prefetchHint:(long long)a4 exclusionOptions:(long long)a5;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 timeZone:(id)a2 calendars:(id)a3 prefetchHint:(long long)a4 exclusionOptions:(long long)a5 faultingOption:(long long)a6;

@end
