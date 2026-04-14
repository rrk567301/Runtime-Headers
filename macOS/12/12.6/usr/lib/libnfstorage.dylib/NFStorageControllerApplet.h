@interface NFStorageControllerApplet : NFStorageController

- (id)name;
- (id)_deleteAllAppletEntities;
- (id)dbProtectionType;
- (id)fetchAppletEntitiesWithError:(id *)a0;
- (id)updateAppletEntitiesWithConfig:(id)a0;
- (void)deleteAllAppletEntities;

@end
