@class RTAccount, NSSet, RTLearnedLocationManager, RTVisitManager, RTAuthorizedLocationManager, RTAccountManager, RTBluePOITileManager;

@interface RTVisitConsolidator : RTService

@property (readonly, nonatomic) RTLearnedLocationManager *learnedLocationManager;
@property (readonly, nonatomic) RTVisitManager *visitManager;
@property (readonly, nonatomic) RTAuthorizedLocationManager *authorizedLocationManager;
@property (readonly, nonatomic) RTAccountManager *accountManager;
@property (readonly, nonatomic) RTBluePOITileManager *bluePOITileManager;
@property (readonly, nonatomic) RTAccount *currentAccount;
@property (retain, nonatomic) NSSet *categoryDenyList;

+ (id)consolidateHindsightVisits:(id)a0 constantMonitorVisits:(id)a1 sortDescriptor:(id)a2 filterPairedVisitEntries:(BOOL)a3;
+ (id)filterConstantMonitorVisits:(id)a0;
+ (id)getRedactedDateIntervalFromInterval:(id)a0;

- (void)fetchStoredVisitsWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)onDailyMetricsNotification:(id)a0;
- (void)_setup;
- (void)_onDailyMetricsNotification:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_fetchConstantMonitorVisitsWithDateInterval:(id)a0 options:(id)a1 handler:(id /* block */)a2;
- (void)_fetchHindsightVisitsWithDateInterval:(id)a0 ascending:(BOOL)a1 handler:(id /* block */)a2;
- (void)_fetchRedactedStoredVisitsWithOptions:(id)a0 redactedVisitsHandler:(id /* block */)a1;
- (void)_fetchStoredVisitsWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)_onAccountChange:(id)a0;
- (id)initWithLearnedLocationManager:(id)a0 visitManager:(id)a1 authorizedLocationManager:(id)a2 accountManager:(id)a3 bluePOITileManager:(id)a4;
- (void)onAccountChange:(id)a0;

@end
