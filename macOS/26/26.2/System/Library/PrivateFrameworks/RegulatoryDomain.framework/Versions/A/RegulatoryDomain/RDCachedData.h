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

+ (id)loadCacheForUnitTest;
+ (id)loadCache;
+ (id)stringsFromRDEstimateArray:(id)a0;
+ (id)getCacheDirPathLegacy;
+ (void)createCacheDirectoryIfNeeded:(BOOL)a0;
+ (id)getUserPath:(id)a0;
+ (id)estimateArrayFromStrings:(id)a0 withPriority:(unsigned int)a1 andTimestamp:(id)a2 disputed:(BOOL)a3;
+ (id)loadCache:(BOOL)a0;
+ (id)sortPreferredOrder:(id)a0;
+ (id)getCacheDirPath;
+ (void)createCacheAtPath:(id)a0;
+ (id)getCacheDirPathForUnitTest;

- (id)getLastKnownCombinedEstimate;
- (void)setCountriesFromLocation:(id)a0 isInDisputedArea:(BOOL)a1;
- (void)setCountriesFromServingCellForUnitTest:(id)a0;
- (void)setCountryFromLocation:(id)a0;
- (id)getEstimateForPeerDeviceWithID:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setCountriesFromLocation:(id)a0 forUnitTest:(BOOL)a1 isDisputed:(BOOL)a2;
- (void)recompute:(BOOL)a0;
- (void)setCountriesFromGeoIP:(id)a0;
- (void)recompute;
- (void)removeEstimateForPeerDeviceWithID:(id)a0;
- (void)setCountriesFromGeoIPForUnitTest:(id)a0;
- (void)setCountriesFromLocationForUnitTest:(id)a0 isDisputed:(BOOL)a1;
- (void)encodeWithCoder:(id)a0;
- (id)getCombinedEstimate;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)localEstimatesForPriority:(unsigned int)a0;
- (void)setEstimate:(id)a0 forPeerDeviceWithID:(id)a1 isUnitTest:(BOOL)a2;
- (void)setCountriesFromServingCell:(id)a0 forUnitTest:(BOOL)a1;
- (void)setCountriesFromNearbyCells:(id)a0 forUnitTest:(BOOL)a1;
- (BOOL)saveCacheForUnitTest;
- (void)setCountriesFromNearbyCells:(id)a0;
- (void)setEstimate:(id)a0 forPeerDeviceWithID:(id)a1;
- (void).cxx_destruct;
- (BOOL)saveCache:(BOOL)a0;
- (void)setCountriesFromLocation:(id)a0;
- (id)description;
- (void)setCountriesFromWiFiAPs:(id)a0;
- (void)setEstimateForUnitTest:(id)a0 forPeerDeviceWithID:(id)a1;
- (void)setCountriesFromNearbyCellsForUnitTest:(id)a0;
- (BOOL)saveCache;
- (void)setCountryFromMCC:(id)a0;
- (id)initWithCountryCodeFromLocation:(id)a0 fromServingCell:(id)a1 fromNearbyCell:(id)a2 fromWiFi:(id)a3 fromGeoIP:(id)a4 localEstimates:(id)a5 combinedEstimate:(id)a6 lastKnownCombinedEstimate:(id)a7 locationLocalEstimateInDisputedArea:(BOOL)a8 peerEstimates:(id)a9;
- (void)computeLocalCountryCode;
- (id)getLocalOnlyEstimates;
- (void)setCountriesFromWiFiAPsForUnitTest:(id)a0;
- (void)setCountryFromWiFiAPs:(id)a0;
- (void)setCountriesFromServingCell:(id)a0;
- (void)setCountriesFromWiFiAPs:(id)a0 forUnitTest:(BOOL)a1;
- (void)removeEstimateForPeerDeviceWithIDForUnitTest:(id)a0;
- (void)setCountriesFromGeoIP:(id)a0 forUnitTest:(BOOL)a1;
- (id)getGeoIPLocalEstimates;
- (void)postResultsToEligibilityEngine;

@end
