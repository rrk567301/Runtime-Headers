@interface NFStorageControllerApplet : NFStorageController

- (id)name;
- (id)_deleteAllAppletEntities;
- (id)fetchAppletEntitiesWithError:(id *)a0;
- (id)updateAppletEntitiesWithConfig:(id)a0;
- (id)dbProtectionType;
- (void)deleteAllAppletEntities;

@end
