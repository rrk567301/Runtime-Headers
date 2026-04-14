@interface NFStorageControllerIcfExpress : NFStorageController

- (id)name;
- (id)dbProtectionType;
- (id)_deleteAllIcfExpressEntities;
- (id)fetchIcfExpressEntitiesWithError:(id *)a0;
- (void)updateIcfExpressEntitiesWithConfig:(id)a0;
- (void)deleteAllIcfExpressEntities;

@end
