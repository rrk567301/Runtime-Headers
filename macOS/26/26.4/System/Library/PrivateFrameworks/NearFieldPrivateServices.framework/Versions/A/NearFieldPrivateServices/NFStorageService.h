@interface NFStorageService : NFPrivateService

- (id)serviceName;
- (void)updateESEExpressEntitiesWithConfig:(id)a0;
- (id)fetchAppletEntitiesWithError:(id *)a0;
- (id)updateAppletEntitiesWithConfig:(id)a0;
- (id)fetchESEExpressEntitiesWithError:(id *)a0;
- (void)deleteAllESEExpressEntities;
- (BOOL)canRun;
- (void)deleteAllAppletEntities;

@end
