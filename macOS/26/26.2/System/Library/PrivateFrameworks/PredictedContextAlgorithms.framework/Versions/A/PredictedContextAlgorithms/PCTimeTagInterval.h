@class NSDateInterval;

@interface PCTimeTagInterval : NSObject

@property (nonatomic) unsigned long long timetag;
@property (retain, nonatomic) NSDateInterval *dateInterval;

- (void).cxx_destruct;
- (id)description;
- (id)initWithTimeTag:(unsigned long long)a0 dateInterval:(id)a1;
- (double)overlapsScoreForStartDate:(id)a0 endDate:(id)a1;

@end
