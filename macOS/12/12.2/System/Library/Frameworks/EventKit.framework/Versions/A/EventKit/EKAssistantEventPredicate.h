@class NSString, NSArray;

@interface EKAssistantEventPredicate : EKEventRangePredicate

@property (nonatomic) unsigned long long countSoFar;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *location;
@property (readonly, copy, nonatomic) NSString *notes;
@property (readonly, nonatomic) NSArray *participants;
@property (readonly, nonatomic) long long limit;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)evaluateWithObject:(id)a0;
- (id)predicateFormat;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 timeZone:(id)a2 title:(id)a3 location:(id)a4 notes:(id)a5 limit:(long long)a6 calendars:(id)a7 participants:(id)a8;
- (id)_sortedParticipants;

@end
