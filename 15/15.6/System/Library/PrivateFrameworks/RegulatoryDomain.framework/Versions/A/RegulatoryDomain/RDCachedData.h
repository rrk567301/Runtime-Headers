@class NSArray, NSMutableDictionary;

@interface RDCachedData : NSObject <NSCopying, NSSecureCoding> {
    NSArray *_countriesFromLocation;
    NSArray *_countriesFromNearbyCells;
    NSArray *_countriesFromServingCell;
    NSArray *_countriesFromWiFiAPs;
    char _locationLocalEstimateIsInDisputedArea;
    NSArray *_localOnlyEstimates;
    NSArray *_combinedEstimate;
    NSArray *_lastKnownCombinedEstimate;
    NSMutableDictionary *_peerDeviceLocalEstimates;
}

@property (class, readonly) char supportsSecureCoding;

+ (id)loadCache;
+ (id)getCacheDirPath;
+ (void)createCacheAtPath:(id)a0;
+ (void)createCacheDirectoryIfNeeded:(char)a0;
+ (id)getCacheDirPathForUnitTest;
+ (id)getCacheDirPathLegacy;
+ (id)getUserPath:(id)a0;
+ (id)loadCache:(char)a0;
+ (id)loadCacheForUnitTest;
+ (id)sortPreferredOrder:(id)a0;
+ (id)stringsFromRDEstimateArray:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)saveCache:(char)a0;
- (id)getEstimateForPeerDeviceWithID:(id)a0;
- (void)computeLocalCountryCode;
- (id)countryCodesForPriority:(unsigned int)a0;
- (id)getCombinedEstimate;
- (id)getLastKnownCombinedEstimate;
- (id)getLocalOnlyEstimates;
- (id)initWithCountryCodeFromLocation:(id)a0 fromServingCell:(id)a1 fromNearbyCell:(id)a2 fromWiFi:(id)a3 localEstimates:(id)a4 combinedEstimate:(id)a5 lastKnownCombinedEstimate:(id)a6 locationLocalEstimateInDisputedArea:(char)a7 peerEstimates:(id)a8;
- (void)postResultsToEligibilityEngine;
- (void)recompute;
- (void)recompute:(char)a0;
- (void)removeEstimateForPeerDeviceWithID:(id)a0;
- (void)removeEstimateForPeerDeviceWithIDForUnitTest:(id)a0;
- (char)saveCache;
- (char)saveCacheForUnitTest;
- (void)setCountriesFromLocation:(id)a0;
- (void)setCountriesFromLocation:(id)a0 forUnitTest:(char)a1 isDisputed:(char)a2;
- (void)setCountriesFromLocation:(id)a0 isInDisputedArea:(char)a1;
- (void)setCountriesFromLocationForUnitTest:(id)a0 isDisputed:(char)a1;
- (void)setCountriesFromNearbyCells:(id)a0;
- (void)setCountriesFromNearbyCells:(id)a0 forUnitTest:(char)a1;
- (void)setCountriesFromNearbyCellsForUnitTest:(id)a0;
- (void)setCountriesFromServingCell:(id)a0;
- (void)setCountriesFromServingCell:(id)a0 forUnitTest:(char)a1;
- (void)setCountriesFromServingCellForUnitTest:(id)a0;
- (void)setCountriesFromWiFiAPs:(id)a0;
- (void)setCountriesFromWiFiAPs:(id)a0 forUnitTest:(char)a1;
- (void)setCountriesFromWiFiAPsForUnitTest:(id)a0;
- (void)setCountryFromLocation:(id)a0;
- (void)setCountryFromMCC:(id)a0;
- (void)setCountryFromWiFiAPs:(id)a0;
- (void)setEstimate:(id)a0 forPeerDeviceWithID:(id)a1;
- (void)setEstimate:(id)a0 forPeerDeviceWithID:(id)a1 isUnitTest:(char)a2;
- (void)setEstimateForUnitTest:(id)a0 forPeerDeviceWithID:(id)a1;

@end
