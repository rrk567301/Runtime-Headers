@class NSMutableDictionary, NSString, NSMutableSet, NSArray, NSMutableArray, BRDSIDString;

@interface BRCSyncHealthReport : NSObject {
    unsigned long long _danglingShareRequesters;
}

@property (readonly, nonatomic) unsigned long long totalZoneCount;
@property (readonly, nonatomic) unsigned long long blockedZonesCount;
@property (readonly, nonatomic) unsigned long long clientTruthTotalItemsCount;
@property (readonly, nonatomic) unsigned long long serverTruthTotalItemsCount;
@property (readonly, nonatomic) unsigned long long zonesNeverFullSync;
@property (readonly, nonatomic) NSMutableDictionary *syncUpErrorsByMangledID;
@property (readonly, nonatomic) NSMutableDictionary *syncDownErrorsByMangledID;
@property (readonly, nonatomic) NSMutableSet *syncUpFailures;
@property (readonly, nonatomic) NSMutableSet *uploadFailures;
@property (readonly, nonatomic) NSMutableSet *downloadFailures;
@property (readonly, nonatomic) BRDSIDString *dsid;
@property (readonly, nonatomic) NSString *rampNumber;
@property (readonly, nonatomic) unsigned long long clientTruthDirFaultCount;
@property (readonly, nonatomic) unsigned long long serverTruthDirFaultCount;
@property (readonly, nonatomic) unsigned long long serverTruthDirCount;
@property (readonly, nonatomic) unsigned long long timeSinceLogin;
@property (readonly, nonatomic) NSArray *telemetryErrorEvents;
@property (readonly, nonatomic) NSArray *telemetryOtherEvents;
@property (readonly, nonatomic) NSMutableArray *aggregatedEvents;

- (void)_collectAggregatedTelemetryForSession:(id)a0;
- (id)init;
- (void)syncErrors:(id /* block */)a0;
- (void)generateReportWithSession:(id)a0;
- (void)dumpAggregatedEvents:(id /* block */)a0;
- (id)_injectionForAnalyticsServiceCode:(int)a0;
- (void)_fillTransferFailure:(id)a0 withRowID:(unsigned long long)a1 atDate:(id)a2 session:(id)a3;
- (void).cxx_destruct;

@end
