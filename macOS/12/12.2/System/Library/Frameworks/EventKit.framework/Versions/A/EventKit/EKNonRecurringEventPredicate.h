@class NSArray, NSDate;

@interface EKNonRecurringEventPredicate : EKGeneralLookupPredicate {
    NSDate *_startDate;
    NSDate *_endDate;
    NSArray *_calendarManagedObjectIDs;
}

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)predicateFormat;
- (BOOL)evaluateWithObject:(id)a0 substitutionVariables:(id)a1;
- (id)predicateForCoreData;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 calendars:(id)a2;

@end
