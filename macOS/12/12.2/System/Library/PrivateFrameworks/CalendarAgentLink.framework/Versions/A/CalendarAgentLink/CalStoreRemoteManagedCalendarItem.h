@class NSTimeZone, NSSet, NSString, NSURL, CalStoreRemoteManagedCalendar, NSDate;

@interface CalStoreRemoteManagedCalendarItem : CalStoreRemoteManagedObject

@property (retain, nonatomic) NSSet *attachments;
@property (retain, nonatomic) CalStoreRemoteManagedCalendar *calendar;
@property (retain, nonatomic) NSDate *dateStamp;
@property (retain, nonatomic) NSSet *derivedAlarms;
@property (readonly, nonatomic) BOOL hasAlarm;
@property (nonatomic) BOOL isAllDay;
@property (retain, nonatomic) NSString *notes;
@property (retain, nonatomic) NSString *occurrenceID;
@property (retain, nonatomic) NSString *recurrenceRule;
@property (retain, nonatomic) NSString *sharedUID;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSTimeZone *timeZone;

+ (BOOL)supportsSecureCoding;
+ (id)fetchObjectsWithPredicate:(id)a0;
+ (id)fetchObjectsWithPredicate:(id)a0 inCalendars:(id)a1;
+ (id)fetchObjectsWithSharedUID:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
