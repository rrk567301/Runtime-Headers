@interface NFStorageControllerApplet : NFStorageController

- (id)updateAppletEntitiesWithConfig:(id)a0;
- (id)_deleteAllAppletEntities;
- (id)name;
- (id)dbProtectionType;
- (id)fetchAppletEntitiesWithError:(id *)a0;
- (void)deleteAllAppletEntities;

@end
