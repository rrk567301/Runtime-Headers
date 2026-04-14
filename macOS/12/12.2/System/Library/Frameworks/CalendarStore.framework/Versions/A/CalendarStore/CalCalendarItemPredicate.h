@class NSArray;

@interface CalCalendarItemPredicate : CalPredicate {
    NSArray *_calendars;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)calendars;
- (id)initWithPredicate:(id)a0 calendars:(id)a1;

@end
