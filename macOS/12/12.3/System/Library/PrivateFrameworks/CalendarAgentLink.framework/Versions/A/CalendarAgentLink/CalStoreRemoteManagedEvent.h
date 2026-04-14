@class NSSet, NSString, CalStoreRemoteManagedRecurrenceException, NSDate;

@interface CalStoreRemoteManagedEvent : CalStoreRemoteManagedCalendarItem

@property (retain, nonatomic) NSSet *attendees;
@property (retain, nonatomic) NSDate *endDate;
@property (nonatomic) BOOL hasAttendee;
@property (retain, nonatomic) NSString *location;
@property (retain, nonatomic) CalStoreRemoteManagedRecurrenceException *masterException;
@property (retain, nonatomic) NSDate *occurrence;
@property (nonatomic) BOOL needsReply;

+ (BOOL)supportsSecureCoding;
+ (id)fetchObjectsWithPredicate:(id)a0 inCalendars:(id)a1;
+ (id)fetchObjectsWithSharedUID:(id)a0;
+ (id)fetchObjectsWithSharedUID:(id)a0 occurrence:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)saveWithError:(id *)a0;
- (long long)compareStartDate:(id)a0;
- (id)saveWithSpan:(int)a0 error:(id *)a1;
- (BOOL)removeWithSpan:(int)a0 error:(id *)a1;
- (BOOL)removeWithError:(id *)a0;

@end
