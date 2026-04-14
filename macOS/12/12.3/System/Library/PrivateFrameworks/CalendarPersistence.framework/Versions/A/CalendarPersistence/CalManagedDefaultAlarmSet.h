@class CalManagedCalendar, NSSet, CalManagedPrincipal;

@interface CalManagedDefaultAlarmSet : CalManagedObject

@property (retain) CalManagedPrincipal *principal;
@property (retain) CalManagedPrincipal *localPrincipal;
@property (retain) CalManagedCalendar *calendar;
@property (retain) CalManagedCalendar *localCalendar;
@property (readonly) NSSet *defaultEventAllDayAlarms;
@property (readonly) NSSet *defaultEventTimedAlarms;

+ (id)entityName;
+ (id)insertNewDefaultAlarmSetInContext:(id)a0;
+ (id)defaultAlarmICSDocumentForString:(id)a0;
+ (void)_enableForUnitTests;
+ (void)_disableForUnitTests;

- (void)updateDefaultEventAllDayAlarms:(id)a0 processChangesNow:(BOOL)a1;
- (id)defaultEventAllDayAlarms;
- (id)defaultEventTimedAlarms;
- (id)icsStringForDefaultAlarmsAllDay:(BOOL)a0;
- (id)enclosingSource;
- (id)affectedCalendarIDs;
- (void)updateDefaultEventTimedAlarms:(id)a0;
- (void)updateDefaultEventAllDayAlarms:(id)a0;
- (void)processForType:(int)a0 inManagedObjectContext:(id)a1;
- (void)processUpdatedInManagedObjectContext:(id)a0;
- (void)insertChangeCalendarHomeDefaultAlarmRequestAllDay:(BOOL)a0 forPrincipal:(id)a1 inManagedObjectContext:(id)a2;
- (void)insertChangeCalendarDefaultAlarmRequestAllDay:(BOOL)a0 forCalendar:(id)a1 inManagedObjectContext:(id)a2;
- (void)updateDefaultEventAllDayAlarmsFromICS:(id)a0;
- (void)updateDefaultEventTimedAlarmsFromICS:(id)a0;
- (void)updateDefaultEventTimedAlarms:(id)a0 processChangesNow:(BOOL)a1;
- (void)updateDefaultAlarmsHelperForSet:(id)a0 alarmSetKey:(id)a1 processChangesNow:(BOOL)a2;
- (id)updateDefaultAlarmsFromICSHelper:(id)a0;
- (BOOL)isDefaultAlarmPreferenceNone:(BOOL)a0;

@end
