@class BRCTapToRadarManager, BRCAnalyticsReporter, NSMutableSet, BRCContainerScheduler;
@protocol BRCZoneAppRetriever;

@interface BRCPeriodicSyncInvestigation : NSObject

@property (readonly, nonatomic) id<BRCZoneAppRetriever> zoneAppRetriever;
@property (readonly, nonatomic) BRCContainerScheduler *containerScheduler;
@property (readonly, nonatomic) BRCTapToRadarManager *tapToRadarManager;
@property (readonly, nonatomic) BRCAnalyticsReporter *analyticsReporter;
@property (readonly, nonatomic) NSMutableSet *editingDevices;
@property (readonly, nonatomic) NSMutableSet *zonesWithNoRealChanges;
@property (readonly, nonatomic) BOOL investigationStarted;
@property (readonly, nonatomic) unsigned short zonesOutOfSync;
@property (readonly, nonatomic) unsigned char zonesType;

- (void)close;
- (void).cxx_destruct;
- (BOOL)_shouldCompleteInvestigation;
- (void)addEditingDevice:(id)a0;
- (void)addZoneWithNoRealChanges:(id)a0;
- (void)completeInvestigationIfNecessary;
- (void)completeInvestigationIfNecessaryWithOldSyncState:(unsigned int)a0 newSyncState:(unsigned int)a1;
- (id)initWithZoneAppRetriver:(id)a0 containerScheduler:(id)a1 tapToRadarManager:(id)a2 analyticsReporter:(id)a3;
- (void)setZonesOutOfSync:(unsigned short)a0 zonesType:(unsigned char)a1;
- (void)startInvestigation;

@end
