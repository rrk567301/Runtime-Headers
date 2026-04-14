@interface CalWidgetUpdateMonitor : CalPersistenceMonitor

+ (id)sharedMonitor;
+ (id)logHandle;
+ (id)propertiesAffectingWidget;

- (void)managedObjectContextDidSave:(id)a0;
- (void)managedObjectContextWillSave:(id)a0;
- (void)registerListeners;
- (void)_accountChanged:(id)a0;
- (void)unregisterListeners;
- (BOOL)_isEvent:(id)a0 inWidgetRange:(id)a1;
- (BOOL)_changedPropertiesShowInWidget:(id)a0;
- (void)_requestWidgetRefreshWithRateLimiter;
- (id)_committedValueOrNilForKey:(id)a0 onEvent:(id)a1;

@end
