@class NSArray, NSDate;

@interface CalStoreRemoteCoreRecurrenceRule : CalStoreRemoteObject

@property (retain, nonatomic) NSArray *byDay;
@property (retain, nonatomic) NSArray *byMonth;
@property (retain, nonatomic) NSArray *byMonthDay;
@property (nonatomic) long long count;
@property (nonatomic) int interval;
@property (nonatomic) BOOL isInfinite;
@property (retain, nonatomic) NSDate *untilDate;

+ (BOOL)supportsSecureCoding;
+ (id)recurrenceRuleFromICSString:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
