@class NSString, NSArray, NSMutableDictionary, RDEstimate;

@interface RDCachedData : NSObject <NSCopying, NSSecureCoding> {
    NSString *_countryFromLocation;
    NSString *_countryFromMCC;
    NSString *_countryFromWiFiAPs;
    RDEstimate *_localOnlyEstimate;
    NSArray *_combinedEstimate;
    NSArray *_lastKnownCombinedEstimate;
    NSMutableDictionary *_peerDeviceLocalEstimates;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)loadCache;
+ (id)getCacheDirPath;
+ (void)createCacheAtPath:(id)a0;
+ (void)createCacheDirectoryIfNeeded:(BOOL)a0;
+ (id)getCacheDirPathForUnitTest;
+ (id)getCacheDirPathLegacy;
+ (id)getUserPath:(id)a0;
+ (id)loadCache:(BOOL)a0;
+ (id)loadCacheForUnitTest;
+ (id)sortPreferredOrder:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)saveCache:(BOOL)a0;
- (id)getEstimateForPeerDeviceWithID:(id)a0;
- (void)computeLocalCountryCode;
- (id)countryCodeForPriority:(unsigned int)a0;
- (id)getCombinedEstimate;
- (id)getLastKnownCombinedEstimate;
- (id)getLocalOnlyEstimate;
- (id)initWithCountryCodeFromLocation:(id)a0 fromMCC:(id)a1 fromWiFi:(id)a2 localEstimate:(id)a3 combinedEstimate:(id)a4 lastKnownCombinedEstimate:(id)a5 peerEstimates:(id)a6;
- (void)recompute;
- (void)recompute:(BOOL)a0;
- (void)removeEstimateForPeerDeviceWithID:(id)a0;
- (void)removeEstimateForPeerDeviceWithIDForUnitTest:(id)a0;
- (BOOL)saveCache;
- (BOOL)saveCacheForUnitTest;
- (void)setCountryFromLocation:(id)a0;
- (void)setCountryFromLocation:(id)a0 forUnitTest:(BOOL)a1;
- (void)setCountryFromLocationForUnitTest:(id)a0;
- (void)setCountryFromMCC:(id)a0;
- (void)setCountryFromMCC:(id)a0 forUnitTest:(BOOL)a1;
- (void)setCountryFromMCCForUnitTest:(id)a0;
- (void)setCountryFromWiFiAPs:(id)a0;
- (void)setCountryFromWiFiAPs:(id)a0 forUnitTest:(BOOL)a1;
- (void)setCountryFromWiFiAPsForUnitTest:(id)a0;
- (void)setEstimate:(id)a0 forPeerDeviceWithID:(id)a1;
- (void)setEstimateForUnitTest:(id)a0 forPeerDeviceWithID:(id)a1;

@end
