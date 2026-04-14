@class NSString, NSArray;

@interface EKQueryEventPredicate : EKQueryPredicate

@property (retain, nonatomic) NSString *location;
@property (retain, nonatomic) NSString *notes;
@property (retain, nonatomic) NSArray *participantNames;

+ (id)predicateWithCalendars:(id)a0;
+ (id)predicateWithTitle:(id)a0 location:(id)a1 notes:(id)a2 participantNames:(id)a3 calendars:(id)a4;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)evaluateWithObject:(id)a0;
- (unsigned long long)entityType;
- (id)initWithCalendars:(id)a0;
- (id)mdQueryString;
- (id)initWithTitle:(id)a0 location:(id)a1 notes:(id)a2 participantNames:(id)a3 calendars:(id)a4;
- (BOOL)_includeCalendarTitleInSearchTerm;

@end
