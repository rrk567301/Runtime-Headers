@class CalManagedEvent, NSDate;

@interface CalManagedRecurrenceException : CalManagedObject

@property (retain) NSDate *date;
@property (retain) CalManagedEvent *detachedEvent;
@property (retain) CalManagedEvent *masterEvent;

+ (id)entityName;
+ (void)addExceptionPrefetchToCalendarItemFetch:(id)a0;

- (unsigned long long)occurrenceIndex;
- (id)committedExtraAttendees;
- (id)uniqueKeyForObject;
- (id)enclosingSource;

@end
