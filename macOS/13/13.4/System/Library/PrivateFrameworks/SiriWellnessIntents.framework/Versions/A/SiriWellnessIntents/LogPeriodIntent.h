@class NSDate;

@interface LogPeriodIntent : INIntent

@property (nonatomic, copy) NSDate *date;
@property (nonatomic) long long flow;

- (id)init;
- (id)initWithCoder:(id)a0;

@end
