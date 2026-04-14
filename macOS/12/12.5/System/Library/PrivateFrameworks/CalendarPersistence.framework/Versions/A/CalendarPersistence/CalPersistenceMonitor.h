@interface CalPersistenceMonitor : NSObject

- (id)init;
- (void)_managedObjectContextDidSave:(id)a0;
- (void)registerListeners;
- (void)unregisterListeners;
- (BOOL)isInterestedInContext:(id)a0;
- (void)_managedObjectContextWillSave:(id)a0;

@end
