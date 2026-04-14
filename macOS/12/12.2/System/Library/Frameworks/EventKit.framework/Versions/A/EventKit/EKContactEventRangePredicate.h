@class NSArray, EKParticipantToContactMatcher;

@interface EKContactEventRangePredicate : EKEventRangePredicate

@property (retain, nonatomic) NSArray *contacts;
@property (retain, nonatomic) EKParticipantToContactMatcher *matcher;

+ (id)predicateWithStartDate:(id)a0 endDate:(id)a1 calendars:(id)a2 contacts:(id)a3;

- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)evaluateWithObject:(id)a0;
- (id)predicateFormat;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 calendars:(id)a2 contacts:(id)a3;

@end
