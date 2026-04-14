@interface CalAlertChangeMonitor : CalPersistenceMonitor

+ (id)defaultMonitor;
+ (id)ignoredProperties;
+ (void)completelyDisableAlertsInThisProcess;

- (void)managedObjectContextDidSave:(id)a0;
- (void)managedObjectContextWillSave:(id)a0;
- (BOOL)isInterestedInContext:(id)a0;
- (void)_messageTraceReminderModified:(id)a0;
- (void)_messageTraceReminderTypeCreated:(id)a0 inContext:(id)a1 changedValues:(id)a2;
- (BOOL)_managedTask:(id)a0 matchesWidgetPredicateForDate:(id)a1;
- (void)performFindAndScheduleAlarms:(id)a0;
- (void)performScheduleAlarms:(id)a0;
- (void)performBookmarkResolution:(id)a0;
- (void)performDeleteAlarms:(id)a0;
- (void)performDeleteMessages:(id)a0;
- (void)performStartRemindersNotificationCenterWidget;
- (BOOL)_areChangedValuesTrackedForReminderCreation:(id)a0;

@end
