@class NSArray, NSString, CalRecurrenceRule, NSDate;

@interface CalEvent : CalCalendarItem

@property (copy) NSArray *attendees;
@property (copy, nonatomic) NSDate *occurrence;
@property BOOL isDetached;
@property BOOL isAllDay;
@property (copy) NSString *location;
@property (copy) CalRecurrenceRule *recurrenceRule;
@property (copy) NSDate *startDate;
@property (copy) NSDate *endDate;

+ (id)event;
+ (id)eventFromRemoteManagedObject:(id)a0;
+ (id)eventFromRemoteManagedObject:(id)a0 skipTimezoneTranslation:(BOOL)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)finalize;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)attachments;
- (void)setAttachments:(id)a0;
- (long long)compareStartDate:(id)a0;
- (id)remoteManagedEventFromEvent;
- (void)_createReservedDictionaryIfNeeded;
- (id)initWithTitle:(id)a0 UID:(id)a1;
- (id)initWithTitle:(id)a0 startDate:(id)a1 endDate:(id)a2 UID:(id)a3;
- (id)nextAlarmDate;
- (void)setIsInvitation:(BOOL)a0;
- (BOOL)isInvitation;

@end
