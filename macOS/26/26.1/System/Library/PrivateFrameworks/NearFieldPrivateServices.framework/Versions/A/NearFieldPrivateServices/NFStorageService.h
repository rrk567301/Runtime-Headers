@interface NFStorageService : NFPrivateService

- (id)serviceName;
- (id)updateAppletEntitiesWithConfig:(id)a0;
- (BOOL)canRun;
- (void)deleteAllESEExpressEntities;
- (id)fetchESEExpressEntitiesWithError:(id *)a0;
- (void)updateESEExpressEntitiesWithConfig:(id)a0;
- (id)fetchAppletEntitiesWithError:(id *)a0;
- (void)deleteAllAppletEntities;

@end
