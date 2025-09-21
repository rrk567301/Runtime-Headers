@interface NFStorageService : NFPrivateService

- (void)deleteAllESEExpressEntities;
- (id)updateAppletEntitiesWithConfig:(id)a0;
- (void)deleteAllAppletEntities;
- (id)fetchESEExpressEntitiesWithError:(id *)a0;
- (id)serviceName;
- (void)updateESEExpressEntitiesWithConfig:(id)a0;
- (id)fetchAppletEntitiesWithError:(id *)a0;
- (BOOL)canRun;

@end
