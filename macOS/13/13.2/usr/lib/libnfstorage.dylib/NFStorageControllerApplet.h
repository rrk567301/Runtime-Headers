@interface NFStorageControllerApplet : NFStorageController

- (id)name;
- (id)dbProtectionType;
- (id)fetchAppletEntitiesWithError:(id *)a0;
- (id)_deleteAllAppletEntities;
- (id)updateAppletEntitiesWithConfig:(id)a0;
- (void)deleteAllAppletEntities;

@end
