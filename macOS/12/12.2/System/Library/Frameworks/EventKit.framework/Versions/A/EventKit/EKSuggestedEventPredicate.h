@class NSString, NSDate;

@interface EKSuggestedEventPredicate : EKGeneralLookupPredicate

@property (retain, nonatomic) NSDate *endDate;
@property (copy, nonatomic) NSString *opaqueKey;
@property (retain, nonatomic) NSDate *startDate;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)predicateFormat;
- (BOOL)evaluateWithObject:(id)a0 substitutionVariables:(id)a1;
- (id)predicateForCoreData;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 opaqueKey:(id)a2 calendars:(id)a3;

@end
