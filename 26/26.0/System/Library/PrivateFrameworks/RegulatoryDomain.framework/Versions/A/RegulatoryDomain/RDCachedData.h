@class NSArray, NSMutableDictionary;

@interface RDCachedData : NSObject <NSCopying, NSSecureCoding> {
    NSArray *_estimatesFromLocation;
    NSArray *_estimatesFromNearbyCells;
    NSArray *_estimatesFromServingCell;
    NSArray *_estimatesFromWiFiAPs;
    NSArray *_estimatesFromGeoIP;
    BOOL _locationLocalEstimateIsInDisputedArea;
    NSArray *_localOnlyEstimates;
    NSArray *_combinedEstimate;
    NSArray *_lastKnownCombinedEstimate;
    NSMutableDictionary *_peerDeviceLocalEstimates;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)loadCache:(BOOL)a0;
+ (id)loadCacheForUnitTest;
+ (void)createCacheDirectoryIfNeeded:(BOOL)a0;
+ (id)getCacheDirPathLegacy;
+ (void)createCacheAtPath:(id)a0;
+ (id)getUserPath:(id)a0;
+ (id)getCacheDirPathForUnitTest;
+ (id)sortPreferredOrder:(id)a0;
+ (id)estimateArrayFromStrings:(id)a0 withPriority:(unsigned int)a1 andTimestamp:(id)a2 disputed:(BOOL)a3;
+ (id)stringsFromRDEstimateArray:(id)a0;
+ (id)loadCache;
+ (id)getCacheDirPath;

- (id)initWithCountryCodeFromLocation:(id)a0 fromServingCell:(id)a1 fromNearbyCell:(id)a2 fromWiFi:(id)a3 fromGeoIP:(id)a4 localEstimates:(id)a5 combinedEstimate:(id)a6 lastKnownCombinedEstimate:(id)a7 locationLocalEstimateInDisputedArea:(BOOL)a8 peerEstimates:(id)a9;
- (id)getCombinedEstimate;
- (void)postResultsToEligibilityEngine;
- (void)setCountriesFromGeoIP:(id)a0 forUnitTest:(BOOL)a1;
- (void)setEstimate:(id)a0 forPeerDeviceWithID:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)saveCache;
- (void)setCountriesFromLocation:(id)a0 isInDisputedArea:(BOOL)a1;
- (void)recompute;
- (void)setCountriesFromLocationForUnitTest:(id)a0 isDisputed:(BOOL)a1;
- (void)setCountryFromWiFiAPs:(id)a0;
- (void)setCountriesFromGeoIPForUnitTest:(id)a0;
- (void)computeLocalCountryCode;
- (void)encodeWithCoder:(id)a0;
- (void)setCountriesFromNearbyCells:(id)a0;
- (void)setCountriesFromNearbyCells:(id)a0 forUnitTest:(BOOL)a1;
- (void)setCountryFromLocation:(id)a0;
- (void)setCountriesFromServingCell:(id)a0;
- (void)setEstimate:(id)a0 forPeerDeviceWithID:(id)a1 isUnitTest:(BOOL)a2;
- (void)setCountriesFromLocation:(id)a0 forUnitTest:(BOOL)a1 isDisputed:(BOOL)a2;
- (void)setEstimateForUnitTest:(id)a0 forPeerDeviceWithID:(id)a1;
- (void)setCountriesFromServingCellForUnitTest:(id)a0;
- (id)getLastKnownCombinedEstimate;
- (id)description;
- (void)setCountriesFromNearbyCellsForUnitTest:(id)a0;
- (void)recompute:(BOOL)a0;
- (id)getGeoIPLocalEstimates;
- (void)setCountriesFromLocation:(id)a0;
- (void)setCountryFromMCC:(id)a0;
- (void)setCountriesFromWiFiAPs:(id)a0 forUnitTest:(BOOL)a1;
- (void)setCountriesFromWiFiAPsForUnitTest:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setCountriesFromServingCell:(id)a0 forUnitTest:(BOOL)a1;
- (void)setCountriesFromWiFiAPs:(id)a0;
- (BOOL)saveCache:(BOOL)a0;
- (BOOL)saveCacheForUnitTest;
- (void)setCountriesFromGeoIP:(id)a0;
- (id)getEstimateForPeerDeviceWithID:(id)a0;
- (void)removeEstimateForPeerDeviceWithIDForUnitTest:(id)a0;
- (id)localEstimatesForPriority:(unsigned int)a0;
- (void).cxx_destruct;
- (id)getLocalOnlyEstimates;
- (void)removeEstimateForPeerDeviceWithID:(id)a0;

@end
