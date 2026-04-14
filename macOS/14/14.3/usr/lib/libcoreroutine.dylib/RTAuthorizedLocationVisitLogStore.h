@class NSString;

@interface RTAuthorizedLocationVisitLogStore : RTStore <RTEnumerableStore>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_fetchVisitLogWithUUID:(id)a0 handler:(id /* block */)a1;
- (void)deleteVisitLogWithUUID:(id)a0 handler:(id /* block */)a1;
- (void)_deleteVisitLogWithUUID:(id)a0 handler:(id /* block */)a1;
- (void)_fetchVisitLogsWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)_purgeVisitLogsOnDateInterval:(id)a0 handler:(id /* block */)a1;
- (void)_storeVisitLog:(id)a0 handler:(id /* block */)a1;
- (id)fetchRequestFromOptions:(id)a0 offset:(unsigned long long)a1 error:(id *)a2;
- (void)fetchVisitLogWithUUID:(id)a0 handler:(id /* block */)a1;
- (void)fetchVisitLogsWithOptions:(id)a0 handler:(id /* block */)a1;
- (id)initWithPersistenceManager:(id)a0;
- (void)purgeVisitLogsOnDateInterval:(id)a0 handler:(id /* block */)a1;
- (void)purgeVisitLogsPredating:(id)a0 handler:(id /* block */)a1;
- (void)storeVisitLog:(id)a0 handler:(id /* block */)a1;

@end
