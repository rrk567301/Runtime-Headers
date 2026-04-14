@class NSDate;

@interface CUIKUserActivityCalendarDate : CUIKUserActivity

@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) unsigned long long view;
@property (readonly, nonatomic) BOOL isTomorrow;

- (id)initWithDictionary:(id)a0;
- (id)dictionary;
- (void).cxx_destruct;
- (void)updateActivity:(id)a0;
- (id)initWithDate:(id)a0 view:(unsigned long long)a1;
- (id)initWithDate:(id)a0 view:(unsigned long long)a1 calendar:(id)a2;

@end
