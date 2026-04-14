@class NSTimeZone, NSDateComponents, NSDate, EKObjectID;

@interface EKReminder : EKCalendarItem

@property (readonly, nonatomic) NSTimeZone *dueDateTimeZone;
@property (retain, nonatomic) EKObjectID *parentID;
@property (copy, nonatomic) NSDateComponents *startDateComponents;
@property (copy, nonatomic) NSDateComponents *dueDateComponents;
@property (nonatomic, getter=isCompleted) BOOL completed;
@property (copy, nonatomic) NSDate *completionDate;
@property (nonatomic) unsigned long long priority;

+ (Class)frozenClass;
+ (id)knownSingleValueKeysForComparison;
+ (id)reminderWithEventStore:(id)a0;
+ (void)_removeSnoozedAlarmsFromReminder:(id)a0 usingDueDate:(id)a1;
+ (id)generateUniqueIDWithReminder:(id)a0 calendar:(id)a1;

- (void)setAllDay:(BOOL)a0;
- (BOOL)refresh;
- (id)constraints;
- (BOOL)isAllDay;
- (BOOL)save:(id *)a0;
- (void)rollback;
- (void)setDisplayOrder:(unsigned long long)a0;
- (void)setTimeZone:(id)a0;
- (BOOL)_reset;
- (id)description;
- (id)init;
- (id)timeZone;
- (id)title;
- (void).cxx_destruct;
- (unsigned long long)displayOrder;
- (void)reset;
- (BOOL)validate:(id *)a0;
- (unsigned long long)entityType;
- (id)dueDate;
- (void)setDueDate:(id)a0;
- (void)setStartDateTimeZone:(id)a0;
- (id)startDateTimeZone;
- (id)externalURI;
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
- (void)setFirstAlertDate:(id)a0;
- (void)setStartDateAllDay:(BOOL)a0;
- (void)snoozeAlarm:(id)a0 withTimeIntervalFromNow:(double)a1 pinsTriggerToStartDate:(BOOL)a2;
- (id)startDateComponentsRaw;
- (id)startDateForRecurrence;

@end
