@interface CalMailMonitor : CalPersistenceMonitor

+ (void)registerForContextNotifications;

- (void)managedObjectContextWillSave:(id)a0;
- (BOOL)isInterestedInContext:(id)a0;
- (void)processCalendarItem:(id)a0 forType:(int)a1 inManagedObjectContext:(id)a2;

@end
