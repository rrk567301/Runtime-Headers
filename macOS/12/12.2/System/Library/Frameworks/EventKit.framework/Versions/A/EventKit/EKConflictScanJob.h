@class EKEvent, NSArray, CalDateRange, NSSet;

@interface EKConflictScanJob : NSObject

@property (retain) EKEvent *event;
@property (retain) NSArray *calendarIdentifiers;
@property (retain) CalDateRange *scanRange;
@property (retain) NSArray *occurrences;
@property (retain) NSSet *eventsConflictedWith;
@property (retain) NSSet *nonAcceptedEvents;
@property (retain) NSSet *conflictDates;

- (void).cxx_destruct;

@end
