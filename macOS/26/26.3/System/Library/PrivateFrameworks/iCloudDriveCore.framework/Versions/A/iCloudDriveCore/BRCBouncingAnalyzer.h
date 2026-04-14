@class BRCTapToRadarManager, BRCReadWriteClientDatabaseFacade, BRCAnalyticsReporter, NSMutableArray;

@interface BRCBouncingAnalyzer : NSObject {
    BRCTapToRadarManager *_tapToRadarManager;
    BRCAnalyticsReporter *_analyticsReporter;
    BRCReadWriteClientDatabaseFacade *_dbFacade;
    NSMutableArray *_bounceIncidentsInBatch;
    BOOL _bouncingIncidentBatchStarted;
}

- (void)close;
- (void).cxx_destruct;
- (BOOL)_isGenericUntitledFileName:(id)a0;
- (int)analyzeBouncingOfItem:(id)a0 withServerItem:(id)a1 bounceReason:(int)a2;
- (void)analyzeBouncingOfItem:(id)a0 withTemplateItem:(id)a1;
- (BOOL)analyzeServerBouncingOfItem:(id)a0 withServerItem:(id)a1;
- (BOOL)analyzeServerBouncingOriginalRecord:(id)a0 savedRecord:(id)a1;
- (void)handleBounceIncidentDuringApplyWithServerItem:(id)a0 bounceReason:(int)a1;
- (id)initWithSessionContext:(id)a0;
- (void)reportInitialScanItemTypeMismatch:(id)a0;
- (void)startBouncingIncidentBatch;
- (void)stopBouncingIncidentBatch;

@end
