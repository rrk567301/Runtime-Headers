@interface NFStorageService : NFPrivateService

- (id)fetchAppletEntitiesWithError:(id *)a0;
- (void)deleteAllAppletEntities;
- (id)fetchESEExpressEntitiesWithError:(id *)a0;
- (id)updateAppletEntitiesWithConfig:(id)a0;
- (void)deleteAllESEExpressEntities;
- (void)updateESEExpressEntitiesWithConfig:(id)a0;
- (BOOL)canRun;
- (id)serviceName;

@end
