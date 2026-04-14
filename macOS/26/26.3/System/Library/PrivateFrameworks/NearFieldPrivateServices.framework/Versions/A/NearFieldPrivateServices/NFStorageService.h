@interface NFStorageService : NFPrivateService

- (id)updateAppletEntitiesWithConfig:(id)a0;
- (BOOL)canRun;
- (void)updateESEExpressEntitiesWithConfig:(id)a0;
- (void)deleteAllESEExpressEntities;
- (id)serviceName;
- (id)fetchESEExpressEntitiesWithError:(id *)a0;
- (id)fetchAppletEntitiesWithError:(id *)a0;
- (void)deleteAllAppletEntities;

@end
