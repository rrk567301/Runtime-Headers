@class NSDateIntervalFormatter;

@interface PKDateComponentsRangeFormatter : NSObject

@property (retain, nonatomic) NSDateIntervalFormatter *dateIntervalFormatter;

- (void).cxx_destruct;
- (long long)_resolvedEraFromEra:(long long)a0 currentEra:(long long)a1;
- (char)_areHoursDefinedInDateComponentsRange:(id)a0;
- (id)_currentDateComponents;
- (id)_formatForDateComponentsRange:(id)a0;
- (char)_isSameDayInDateComponentsRange:(id)a0;
- (char)_isSameEraInDateComponentsRange:(id)a0 currentDateComponents:(id)a1;
- (char)_isSameYearInDateComponentsRange:(id)a0 currentDateComponents:(id)a1;
- (id)stringFromDateComponentsRange:(id)a0;

@end
