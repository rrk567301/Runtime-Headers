@interface CalAccountMonitor : CalPersistenceMonitor

+ (id)defaultMonitor;
+ (BOOL)thisIsFirstNetworkAccountToBeAdded;
+ (BOOL)noSubscriptionCalendarsInContext:(id)a0;
+ (void)findAndRemoveEmptyLocalCalendarsInContext:(id)a0;
+ (void)_updateSessionForObjectID:(id)a0 isDelete:(BOOL)a1;
+ (void)_updatePushForObjectID:(id)a0 isDelete:(BOOL)a1;
+ (void)_createLocalCalendarsIfNeededWithLogTag:(id)a0;
+ (void)_updateRefreshForObjectID:(id)a0;
+ (void)_updateAlarms;
+ (void)processAddition:(id)a0;
+ (void)processRemoval:(id)a0;
+ (void)processChange:(id)a0 changes:(id)a1;
+ (void)completelyDisableAccountMonitorInThisProcess;

- (void)managedObjectContextDidSave:(id)a0;
- (void)managedObjectContextWillSave:(id)a0;

@end
