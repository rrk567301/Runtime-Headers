@class AnalyticsStoreMOHandler, AnalyticsReader, NSObject, AnalyticsStoreFileWriter;
@protocol OS_dispatch_queue;

@interface WADeviceAnalyticsClient : NSObject

@property (retain, nonatomic) AnalyticsStoreMOHandler *managedObjectHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) AnalyticsReader *analyticsReaderObj;
@property (retain, nonatomic) AnalyticsStoreFileWriter *analyticsFileWriterObj;

+ (id)sharedDeviceAnalyticsClientWithPersist;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)initCommon;
- (id)copyGeoTagsForNetwork:(id)a0 location:(id)a1;
- (id)analyticsReader;
- (id)analyticsFileWriter;
- (long long)autoLeaveRssiForBSS:(id)a0 ssid:(id)a1;
- (id)copyAllStoredNetworkSsids;
- (id)copyAllStoredNetworkSsidsWithColocatedScopeId:(id)a0;
- (id)copyAllStoredNetworkSsidsWithTrait:(unsigned long long)a0;
- (id)copyColocatedScopeIdForSsid:(id)a0;
- (id)copyColocatedScopeTransitionInfo:(id)a0 bssid:(id)a1 minRssi:(int)a2 maxRssi:(int)a3 band:(unsigned int)a4;
- (id)copyLocationsForNetwork:(id)a0;
- (id)copyNetworkUsageDictionary:(id)a0;
- (id)copyNetworksAvailableAtLocationWithinDistanceInBand:(id)a0 distance:(double)a1 band:(unsigned int)a2;
- (id)copyPreferenceScoreDictionaryForNetwork:(id)a0;
- (id)copyScoreSortedNetworksAvailableAtLocationWithinDistance:(id)a0 distance:(double)a1 authComparator:(id /* block */)a2;
- (BOOL)dumpDeploymentGraphJSONFileWithCompletion:(id /* block */)a0;
- (BOOL)dumpDeviceAnalyticsCSVsUsingBatchSizeToFileWithCompletion:(id /* block */)a0 batchSize:(unsigned long long)a1 maxAge:(unsigned long long)a2;
- (BOOL)dumpDeviceAnalyticsToFileWithCompletion:(id /* block */)a0;
- (BOOL)dumpDeviceAnalyticsToFileWithCompletion:(id /* block */)a0 fetchLimit:(unsigned long long)a1 maxAge:(unsigned long long)a2;
- (BOOL)dumpDeviceAnalyticsUsingBatchSizeToFileWithCompletion:(id /* block */)a0 batchSize:(unsigned long long)a1 maxAge:(unsigned long long)a2;
- (id)initWithSharedServerType;
- (BOOL)isHistoricallyBadLinkQualityNetwork:(id)a0;
- (BOOL)isMovingNetwork:(id)a0;
- (unsigned long long)isNetworkWithinRangeOfLocation:(id)a0 range:(double)a1 location:(id)a2;
- (BOOL)isOmnipresentNetwork:(id)a0;
- (unsigned long long)manualLeaveCountForBss:(id)a0 ssid:(id)a1;
- (id)neighborChannelsForBSS:(id)a0 ssid:(id)a1;
- (id)neighborsForBSS:(id)a0 ssid:(id)a1;
- (BOOL)parsedBeaconInfoIsStored:(id)a0 ssid:(id)a1;
- (long long)rssiRoamTriggerForBSS:(id)a0 ssid:(id)a1;

@end
