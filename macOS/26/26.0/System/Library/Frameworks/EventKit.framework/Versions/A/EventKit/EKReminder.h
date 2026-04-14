@class NSTimeZone, NSDateComponents, NSDate, EKObjectID;

@interface EKReminder : EKCalendarItem

@property (readonly, nonatomic) NSTimeZone *dueDateTimeZone;
@property (retain, nonatomic) EKObjectID *parentID;
@property (copy, nonatomic) NSDateComponents *startDateComponents;
@property (copy, nonatomic) NSDateComponents *dueDateComponents;
@property (nonatomic, getter=isCompleted) BOOL completed;
@property (copy, nonatomic) NSDate *completionDate;
@property (nonatomic) unsigned long long priority;

+ (id)knownSingleValueKeysForComparison;
+ (Class)frozenClass;
+ (id)reminderWithEventStore:(id)a0;
+ (void)_removeSnoozedAlarmsFromReminder:(id)a0 usingDueDate:(id)a1;
+ (id)generateUniqueIDWithReminder:(id)a0 calendar:(id)a1;

- (void)rollback;
- (id)constraints;
- (void)setTimeZone:(id)a0;
- (BOOL)_reset;
- (BOOL)refresh;
- (void)reset;
- (id)timeZone;
- (void)setDisplayOrder:(unsigned long long)a0;
- (BOOL)save:(id *)a0;
- (BOOL)isAllDay;
- (id)init;
- (BOOL)validate:(id *)a0;
- (unsigned long long)entityType;
- (id)description;
- (id)title;
- (void)setAllDay:(BOOL)a0;
- (unsigned long long)displayOrder;
- (void).cxx_destruct;
- (id)dueDate;
- (void)setDueDate:(id)a0;
- (void)setStartDateTimeZone:(id)a0;
- (id)startDateTimeZone;
- (id)externalURI;
- (void)setStartDateComponents:(id)a0;
- (id)startDateComponents;
- (id)dueDateComponents;
- (void)setStartTimeZone:(id)a0;
- (id)startTimeZone;
- (BOOL)startDateAllDay;
- (void)_adjustAfterMovingOrCopyingFromOldCalendar:(id)a0 toNewCalendar:(id)a1 cachedConstraintsForOldCalendar:(id)a2 savingItem:(id)a3;
- (void)_adjustPersistedStartDateComponentsForNewTimeZone:(id)a0;
- (id)_generateNewUniqueID;
- (id)bestDisplayAlarm;
- (void)clearParentID;
- (id)committedConstraints;
- (BOOL)dueDateAllDay;
- (id)firstAlertDate;
- (void)forceUpdateFrozenCalendar:(id)a0;
- (id)initWithPersistentObject:(id)a0;
- (id)reminderIdentifier;
- (void)setDueDateComponents:(id)a0;
- (void)setFirstAlertDate:(id)a0;
- (void)setStartDateAllDay:(BOOL)a0;
- (void)snoozeAlarm:(id)a0 withTimeIntervalFromNow:(double)a1 pinsTriggerToStartDate:(BOOL)a2;
- (id)startDateComponentsRaw;
- (id)startDateForRecurrence;

@end
