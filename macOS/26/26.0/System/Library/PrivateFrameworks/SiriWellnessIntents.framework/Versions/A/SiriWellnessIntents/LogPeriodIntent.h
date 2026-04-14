@class NSDate;

@interface LogPeriodIntent : INIntent

@property (nonatomic, copy) NSDate *date;
@property (nonatomic) long long flow;

- (id)init;
- (id)initWithDomain:(id)a0 verb:(id)a1 parametersByName:(id)a2;
- (id)initWithIdentifier:(id)a0 backingStore:(id)a1;
- (id)initWithCoder:(id)a0;

@end
