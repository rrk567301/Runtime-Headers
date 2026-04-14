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

+ (id)loadCache;
+ (id)sortPreferredOrder:(id)a0;
+ (void)createCacheDirectoryIfNeeded:(BOOL)a0;
+ (void)createCacheAtPath:(id)a0;
+ (id)getCacheDirPathLegacy;
+ (id)stringsFromRDEstimateArray:(id)a0;
+ (id)estimateArrayFromStrings:(id)a0 withPriority:(unsigned int)a1 andTimestamp:(id)a2 disputed:(BOOL)a3;
+ (id)loadCacheForUnitTest;
+ (id)getCacheDirPath;
+ (id)getUserPath:(id)a0;
+ (id)loadCache:(BOOL)a0;
+ (id)getCacheDirPathForUnitTest;

- (void)setEstimate:(id)a0 forPeerDeviceWithID:(id)a1 isUnitTest:(BOOL)a2;
- (id)getGeoIPLocalEstimates;
- (void)setCountriesFromServingCellForUnitTest:(id)a0;
- (id)getLocalOnlyEstimates;
- (id)getCombinedEstimate;
- (void)setCountriesFromServingCell:(id)a0;
- (void)setCountriesFromWiFiAPsForUnitTest:(id)a0;
- (void)setCountriesFromLocation:(id)a0 forUnitTest:(BOOL)a1 isDisputed:(BOOL)a2;
- (void)setCountryFromLocation:(id)a0;
- (void)setCountriesFromNearbyCells:(id)a0 forUnitTest:(BOOL)a1;
- (BOOL)saveCacheForUnitTest;
- (void)removeEstimateForPeerDeviceWithIDForUnitTest:(id)a0;
- (void)setCountriesFromGeoIPForUnitTest:(id)a0;
- (void)postResultsToEligibilityEngine;
- (void)recompute;
- (void)setCountryFromMCC:(id)a0;
- (void)setCountriesFromLocation:(id)a0;
- (BOOL)saveCache:(BOOL)a0;
- (void)encodeWithCoder:(id)a0;
- (id)localEstimatesForPriority:(unsigned int)a0;
- (BOOL)saveCache;
- (void)setCountriesFromWiFiAPs:(id)a0 forUnitTest:(BOOL)a1;
- (id)description;
- (id)getLastKnownCombinedEstimate;
- (void)setCountriesFromNearbyCellsForUnitTest:(id)a0;
- (void)setCountriesFromNearbyCells:(id)a0;
- (id)initWithCountryCodeFromLocation:(id)a0 fromServingCell:(id)a1 fromNearbyCell:(id)a2 fromWiFi:(id)a3 fromGeoIP:(id)a4 localEstimates:(id)a5 combinedEstimate:(id)a6 lastKnownCombinedEstimate:(id)a7 locationLocalEstimateInDisputedArea:(BOOL)a8 peerEstimates:(id)a9;
- (void)setCountryFromWiFiAPs:(id)a0;
- (void)removeEstimateForPeerDeviceWithID:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setCountriesFromServingCell:(id)a0 forUnitTest:(BOOL)a1;
- (void)setEstimateForUnitTest:(id)a0 forPeerDeviceWithID:(id)a1;
- (id)getEstimateForPeerDeviceWithID:(id)a0;
- (void)setCountriesFromGeoIP:(id)a0 forUnitTest:(BOOL)a1;
- (void)setCountriesFromLocation:(id)a0 isInDisputedArea:(BOOL)a1;
- (void)recompute:(BOOL)a0;
- (void)computeLocalCountryCode;
- (void)setCountriesFromWiFiAPs:(id)a0;
- (void)setCountriesFromGeoIP:(id)a0;
- (void)setCountriesFromLocationForUnitTest:(id)a0 isDisputed:(BOOL)a1;
- (void)setEstimate:(id)a0 forPeerDeviceWithID:(id)a1;

@end
