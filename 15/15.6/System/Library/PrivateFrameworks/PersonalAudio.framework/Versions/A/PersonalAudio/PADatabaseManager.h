@interface PADatabaseManager : HCDatabaseManager

+ (id)sharedManager;

- (id)containerIdentifier;
- (id)currentConfiguration;
- (void)logMessage:(id)a0;
- (id)cloudKitContainer;
- (id)managedObjectModelName;
- (void)contentDidUpdate:(id)a0;
- (char)saveConfiguration:(id)a0;

@end
