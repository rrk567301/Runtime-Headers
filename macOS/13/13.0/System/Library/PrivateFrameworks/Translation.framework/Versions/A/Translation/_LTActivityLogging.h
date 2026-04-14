@class NSCalendar;

@interface _LTActivityLogging : NSObject {
    NSCalendar *_calendar;
}

- (id)init;
- (void).cxx_destruct;
- (void)registerActivity:(long long)a0;
- (void)_logAllActivityFeature:(long long)a0 date:(id)a1;
- (void)_logDailyActivityFeature:(long long)a0 date:(id)a1;
- (void)_logWeeklyActivityFeature:(long long)a0 date:(id)a1;
- (void)_logMonthlyActivityFeature:(long long)a0 date:(id)a1;
- (id)_featureNameForTask:(long long)a0;

@end
