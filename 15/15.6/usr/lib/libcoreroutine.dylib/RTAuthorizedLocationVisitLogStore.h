@class NSString;

@interface RTAuthorizedLocationVisitLogStore : RTStore <RTEnumerableStore>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_fetchVisitLogWithUUID:(id)a0 handler:(id /* block */)a1;
- (char)wasTrustedTimeRecentlyAvailable;
- (void)deleteVisitLogWithUUID:(id)a0 handler:(id /* block */)a1;
- (void)_deleteVisitLogWithUUID:(id)a0 handler:(id /* block */)a1;
- (void)_fetchVisitLogsWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)_purgeVisitLogsOnDateInterval:(id)a0 handler:(id /* block */)a1;
- (void)_storeVisitLog:(id)a0 handler:(id /* block */)a1;
- (void)_updateVisitLogDistantFutureFlagWithStatus:(long long)a0 TrustedTimeAvailability:(char)a1 isRetroRegistration:(char)a2;
- (id)fetchRequestFromOptions:(id)a0 offset:(unsigned long long)a1 error:(id *)a2;
- (void)fetchVisitLogWithUUID:(id)a0 handler:(id /* block */)a1;
- (void)fetchVisitLogsWithOptions:(id)a0 handler:(id /* block */)a1;
- (long long)getEraseInstallRetroRegistrationStatus;
- (id)initWithPersistenceManager:(id)a0;
- (void)purgeVisitLogsOnDateInterval:(id)a0 handler:(id /* block */)a1;
- (void)purgeVisitLogsPredating:(id)a0 handler:(id /* block */)a1;
- (void)setEraseInstallRetroRegistrationStatus:(long long)a0;
- (char)setTrustedTimeRecentAvailability:(char)a0;
- (void)storeVisitLog:(id)a0 handler:(id /* block */)a1;

@end
