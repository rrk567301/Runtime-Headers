@class NSString, NSDate;

@interface CalEventPredicate : CalCalendarItemPredicate {
    NSDate *_startDate;
    NSDate *_endDate;
    NSString *_uid;
}

+ (id)predicateWithPredicate:(id)a0 startDate:(id)a1 endDate:(id)a2 calendars:(id)a3;
+ (id)predicateWithPredicate:(id)a0 startDate:(id)a1 endDate:(id)a2 UID:(id)a3 calendars:(id)a4;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)evaluateWithObject:(id)a0;
- (id)initWithType:(unsigned long long)a0 subpredicates:(id)a1;
- (id)endDate;
- (id)startDate;
- (id)UID;
- (id)initWithPredicate:(id)a0 startDate:(id)a1 endDate:(id)a2 calendars:(id)a3;
- (id)initWithPredicate:(id)a0 startDate:(id)a1 endDate:(id)a2 UID:(id)a3 calendars:(id)a4;

@end
