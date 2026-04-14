@class NSMutableArray;

@interface DateDOMProvider : DOMProvider

@property (retain) NSMutableArray *preciseFragments;
@property (retain) NSMutableArray *longFragments;
@property (retain) NSMutableArray *dateFragments;
@property (retain) NSMutableArray *timeFragments;
@property (retain) NSMutableArray *timeOrDateFragments;

- (void).cxx_destruct;
- (id)initWithController:(id)a0;
- (void)clearCache;
- (id)dateStringForDate:(id)a0;
- (void)dateFormatDidChange;
- (id)parseTime:(id)a0 changeToDateStampTomorrow:(BOOL)a1;
- (id)parsePreciseDate:(id)a0;
- (id)parseLongDate:(id)a0;
- (id)preciseStringForDate:(id)a0;
- (id)_formatDate:(id)a0 withFormatter:(long long)a1;
- (BOOL)_adjustElement:(id)a0 usingFormatter:(long long)a1;
- (void)_adjustElementsInArray:(id)a0 withFormat:(long long)a1;
- (void)adjustDateFragmentsForTimeChange;
- (id)_baseDateElementWithString:(id)a0 timestamp:(double)a1;
- (id)formatDate:(id)a0 roundInterval:(int)a1 showDate:(BOOL)a2 showTime:(BOOL)a3 showSeconds:(BOOL)a4;
- (id)_genericDateFragmentForDate:(id)a0 formatter:(long long)a1 cache:(id)a2;
- (id)longStringForDate:(id)a0;
- (id)parseDate:(id)a0;
- (id)timeStringForDate:(id)a0;

@end
