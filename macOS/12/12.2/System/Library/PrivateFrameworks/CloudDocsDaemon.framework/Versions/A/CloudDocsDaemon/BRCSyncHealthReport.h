@class NSMutableDictionary, NSString, NSMutableSet, NSArray, BRDSIDString;

@interface BRCSyncHealthReport : NSObject

@property (readonly, nonatomic) unsigned long long totalZoneCount;
@property (readonly, nonatomic) unsigned long long blockedZonesCount;
@property (readonly, nonatomic) unsigned long long totalItemsCount;
@property (readonly, nonatomic) NSMutableDictionary *syncUpErrorsByMangledID;
@property (readonly, nonatomic) NSMutableDictionary *syncDownErrorsByMangledID;
@property (readonly, nonatomic) NSMutableSet *syncUpFailures;
@property (readonly, nonatomic) NSMutableSet *uploadFailures;
@property (readonly, nonatomic) NSMutableSet *downloadFailures;
@property (readonly, nonatomic) BRDSIDString *dsid;
@property (readonly, nonatomic) NSString *rampNumber;
@property (readonly, nonatomic) NSArray *telemetryErrorEvents;

- (id)init;
- (void).cxx_destruct;
- (void)generateReportWithSession:(id)a0;
- (void)syncErrors:(id /* block */)a0;
- (id)_injectionForAnalyticsServiceCode:(int)a0;
- (void)_fillTransferFailure:(id)a0 withRowID:(unsigned long long)a1 atDate:(id)a2 session:(id)a3;
- (id)getRampNumberForSession:(id)a0;

@end
