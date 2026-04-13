@class NSDate;

@interface FBKMetricEvent : NSObject

@property (nonatomic) unsigned long long eventType;
@property (retain, nonatomic) NSDate *date;

- (id)description;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0 startDate:(id)a1;

@end
