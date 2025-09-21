@class NSString, NSDictionary;

@interface PGGraphHolidayMetricEvent : PGAbstractMetricEvent {
    NSDictionary *_payload;
}

@property (retain, nonatomic) NSString *holidayName;
@property (nonatomic) unsigned long long numberOfCelebrations;

+ (id)celebratedHolidayMetricEventsWithGraphManager:(id)a0;

- (id)identifier;
- (id)payload;
- (void).cxx_destruct;
- (BOOL)shouldReportMetrics;
- (id)initWithHolidayName:(id)a0 numberOfCelebrations:(unsigned long long)a1;

@end
