@interface NFStorageControllerESEExpress : NFStorageController

- (id)name;
- (id)dbProtectionType;
- (id)fetchESEExpressEntitiesWithError:(id *)a0;
- (id)_deleteAllESEExpressEntities;
- (void)updateESEExpressEntitiesWithConfig:(id)a0;
- (void)deleteAllESEExpressEntities;

@end
