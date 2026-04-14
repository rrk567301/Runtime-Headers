@class CALDate, NSMutableArray;

@interface CALvCALRecurrence : NSObject {
    int _type;
    long long _interval;
    BOOL _has_duration;
    long long _duration;
    NSMutableArray *_occurrencelist;
    NSMutableArray *_daynumberlist;
    BOOL _has_monthlist;
    NSMutableArray *_monthlist;
    NSMutableArray *_daylist;
    NSMutableArray *_weekday_list;
    CALDate *_end_date;
}

- (id)init;
- (void).cxx_destruct;
- (int)type;
- (BOOL)decode_daily:(const char **)a0;
- (BOOL)decode_weekly:(const char **)a0;
- (BOOL)decode_monthly_by_pos:(const char **)a0;
- (BOOL)decode_monthly_by_day:(const char **)a0;
- (BOOL)decode_yearly_by_month:(const char **)a0;
- (BOOL)decode_yearly_by_day:(const char **)a0;
- (BOOL)decode_interval:(const char **)a0;
- (BOOL)decode_duration:(const char **)a0;
- (BOOL)decode_weekday_list:(const char **)a0;
- (BOOL)decode_occurrencelist:(const char **)a0;
- (BOOL)decode_daynumberlist:(const char **)a0;
- (BOOL)decode_monthlist:(const char **)a0;
- (BOOL)decode_daylist:(const char **)a0;
- (BOOL)decode_digits:(const char **)a0 withResult:(long long *)a1;
- (id)initWithStr:(const char *)a0 withGlobalTz:(id)a1;

@end
