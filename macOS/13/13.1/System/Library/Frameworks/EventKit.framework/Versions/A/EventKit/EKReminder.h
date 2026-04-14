@class NSTimeZone, NSDateComponents, NSDate, EKObjectID;

@interface EKReminder : EKCalendarItem

@property (readonly, nonatomic) NSTimeZone *dueDateTimeZone;
@property (retain, nonatomic) EKObjectID *parentID;
@property (copy, nonatomic) NSDateComponents *startDateComponents;
@property (copy, nonatomic) NSDateComponents *dueDateComponents;
@property (nonatomic, getter=isCompleted) BOOL completed;
@property (copy, nonatomic) NSDate *completionDate;
@property (nonatomic) unsigned long long priority;

+ (id)reminderWithEventStore:(id)a0;
+ (id)knownSingleValueKeysForComparison;
+ (Class)frozenClass;
+ (void)_removeSnoozedAlarmsFromReminder:(id)a0 usingDueDate:(id)a1;
+ (id)generateUniqueIDWithReminder:(id)a0 calendar:(id)a1;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)timeZone;
- (void)setTimeZone:(id)a0;
- (void)reset;
- (BOOL)_reset;
- (id)title;
- (void)rollback;
- (BOOL)save:(id *)a0;
- (BOOL)validate:(id *)a0;
- (BOOL)refresh;
- (void)setDueDate:(id)a0;
- (id)dueDate;
- (void)setAllDay:(BOOL)a0;
- (BOOL)isAllDay;
- (id)externalURI;
- (unsigned long long)entityType;
- (id)startDateComponents;
- (void)setStartDateComponents:(id)a0;
- (unsigned long long)displayOrder;
- (void)setDisplayOrder:(unsigned long long)a0;
- (void)setStartTimeZone:(id)a0;
- (id)dueDateComponents;
- (id)startTimeZone;
- (void)forceUpdateFrozenCalendar:(id)a0;
- (id)initWithPersistentObject:(id)a0;
- (void)snoozeAlarm:(id)a0 withTimeIntervalFromNow:(double)a1;
- (id)startDateForRecurrence;
- (void)_adjustAfterMovingOrCopyingFromOldCalendar:(id)a0 toNewCalendar:(id)a1 savingItem:(id)a2;
- (id)_generateNewUniqueID;
- (id)reminderIdentifier;
- (id)firstAlertDate;
- (void)setFirstAlertDate:(id)a0;
- (void)clearParentID;
- (id)bestDisplayAlarm;
- (void)setDueDateComponents:(id)a0;
- (id)startDateTimeZone;
- (void)setStartDateTimeZone:(id)a0;
- (BOOL)startDateAllDay;
- (void)setStartDateAllDay:(BOOL)a0;
- (id)startDateComponentsRaw;
- (BOOL)dueDateAllDay;
- (void)_adjustPersistedStartDateComponentsForNewTimeZone:(id)a0;

@end
