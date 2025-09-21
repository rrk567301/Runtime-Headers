@class WAPersistentContainer;

@interface AnalyticsReader : NSObject

@property (retain, nonatomic) WAPersistentContainer *persistentContainer;

+ (id)networksFromResults:(id)a0;

- (id)moc;
- (id)copyAllStoredNetworkSsids;
- (id)lansForSsid:(id)a0 withError:(id *)a1;
- (id)networkForSSID:(id)a0 withError:(id *)a1;
- (id)bandsInNetwork:(id)a0 withError:(id *)a1;
- (id)networksInSameLanAsBssid:(id)a0 withError:(id *)a1;
- (BOOL)isNetworkWithinRangeOfLocation:(id)a0 range:(double)a1 location:(id)a2 count:(unsigned long long *)a3;
- (id)apProfileForBssid:(id)a0;
- (id)bssidCountByBandInUniqueMO:(id)a0 withError:(id *)a1;
- (id)networksWithPredicate:(id)a0 withError:(id *)a1;
- (unsigned long long)networkCountForLAN:(id)a0 withError:(id *)a1;
- (id)bssForBSSID:(id)a0 withError:(id *)a1;
- (id)networksInSameLansAsSsid:(id)a0 withError:(id *)a1;
- (BOOL)parsedBeaconInfoIsStored:(id)a0 ssid:(id)a1;
- (id)initWithPersistentContainer:(id)a0;
- (id)usageForNetwork:(id)a0 withError:(id *)a1;
- (id)usageForLAN:(id)a0 withError:(id *)a1;
- (short)deploymentCoverageForSSID:(id)a0 withError:(id *)a1;
- (id)usageOf:(id)a0 timeSpan:(unsigned long long)a1 around:(id)a2 withError:(id *)a3;
- (id)bssidCountByBandInLAN:(id)a0 withError:(id *)a1;
- (id)edgeParametersForBSS:(id)a0;
- (short)deploymentCongestionForSSID:(id)a0 withError:(id *)a1;
- (id)networksAvailableAtLocation:(id)a0 withinDistance:(double)a1 inBand:(unsigned int)a2;
- (unsigned long long)countNetworksHavingBand:(short)a0 inLan:(id)a1 withError:(id *)a2;
- (id)copyLocationsForNetwork:(id)a0;
- (unsigned long long)countNetworksInSameLanAsBssid:(id)a0 withError:(id *)a1;
- (id)lanFor:(id)a0 withError:(id *)a1;
- (id)usageOf:(id)a0 during:(unsigned long long)a1 timeSpan:(unsigned long long)a2 withError:(id *)a3;
- (id)copyGeoTagsForNetwork:(id)a0 location:(id)a1;
- (id)networkSsidsByTraits:(id)a0 withError:(id *)a1;
- (id)lanForBssid:(id)a0 withError:(id *)a1;
- (id)adaptiveRoamingParamsForBSS:(id)a0;
- (void).cxx_destruct;
- (id)networksInLan:(id)a0 withError:(id *)a1;

@end
