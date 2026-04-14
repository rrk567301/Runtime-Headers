@class NSString;

@interface ICSTimeZone : ICSComponent {
    id _systemTimeZone;
}

@property (retain, nonatomic) NSString *tzid;

+ (id)name;
+ (id)timeZoneWithSystemTimeZoneName:(id)a0;
+ (BOOL)_isTimeZone:(id)a0 pseudoDSTForDate:(id)a1;
+ (id)blocksAfterDate:(id)a0 untilDate:(id)a1 forTimeZone:(id)a2;
+ (long long)matchTypeForSubarray:(id)a0 inTZChangeArray:(id)a1;
+ (BOOL)perfectMatchForSubarray:(id)a0 inTZChangeArray:(id)a1;
+ (id)quickTimeZoneNames;
+ (id)slowTimeZoneNames;

- (void).cxx_destruct;
- (id)computeTimeZoneChangeListFromDate:(id)a0 toDate:(id)a1;
- (id)getNSTimeZone:(id)a0;
- (id)getNSTimeZoneFromDate:(id)a0 toDate:(id)a1;
- (id)initWithSystemTimeZone:(id)a0;
- (id)initWithSystemTimeZone:(id)a0 fromDate:(id)a1 options:(int)a2;
- (id)initWithTimeZone:(id)a0 fromDate:(id)a1 options:(int)a2;
- (BOOL)isEqualToNSTimeZone:(id)a0 forDate:(id)a1;
- (id)lastTransitionDatesInBlocks:(id)a0;
- (id)mostRecentTransitionDateFromRDateOf:(id)a0 onOrBeforeDate:(id)a1;
- (id)mostRecentTransitionDateFromRRuleOf:(id)a0 onOrBeforeDate:(id)a1;
- (id)mostRecentTransitionDateInBlock:(id)a0 lastTransitionDate:(id)a1 onOrBeforeDate:(id)a2;
- (id)mostRecentTransitionDatesInBlocks:(id)a0 lastTransitionDates:(id)a1 onOrBeforeDate:(id)a2;
- (id)propertiesToExcludeForChecksum;
- (id)relevantTimeZoneBlocks:(id)a0 fromDate:(id)a1 options:(int)a2;
- (id)systemTimeZoneForDate:(id)a0;

@end
