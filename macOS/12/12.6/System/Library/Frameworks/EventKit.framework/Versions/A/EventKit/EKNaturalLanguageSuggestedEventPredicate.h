@class NSString, NSDate;

@interface EKNaturalLanguageSuggestedEventPredicate : EKGeneralLookupPredicate

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, copy, nonatomic) NSString *searchString;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)evaluateWithObject:(id)a0;
- (id)predicateFormat;
- (id)predicateForCoreData;
- (id)initWithStartDate:(id)a0 searchString:(id)a1 calendars:(id)a2;

@end
