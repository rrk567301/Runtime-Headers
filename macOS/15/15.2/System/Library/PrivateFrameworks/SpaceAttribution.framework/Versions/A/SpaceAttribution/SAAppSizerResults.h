@class NSMutableDictionary, NSDictionary, SAAppSizeBreakdownList, NSMutableArray;

@interface SAAppSizerResults : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSDictionary *reportedTelemetry;
@property (retain) NSMutableDictionary *pathsList;
@property (retain) NSMutableDictionary *attributionTags;
@property (retain) NSMutableDictionary *clonesInfo;
@property (retain) NSMutableDictionary *FSPurgeableData;
@property (retain) NSMutableDictionary *hiddenAppsData;
@property (retain) NSMutableDictionary *appsList;
@property (retain) NSMutableArray *zeroSizeApps;
@property unsigned long long totalCDAvailable;
@property unsigned long long totalPurgeableClones;
@property (retain) NSDictionary *appsInfo;
@property (retain) NSMutableDictionary *appsDataInternal;
@property (retain) SAAppSizeBreakdownList *appSizeBreakdownList;
@property long long time;
@property long long status;
@property unsigned long long diskCapacity;
@property unsigned long long diskUsed;
@property (retain) NSDictionary *appData;
@property (retain) NSDictionary *systemDataDetails;
@property (retain) NSDictionary *systemDetails;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)print;
- (void)updateTimestamp;
- (void)accountSUPurgeableFor:(id)a0 purgeableSize:(unsigned long long)a1;
- (void)addSystemVolumeWithCapacity:(unsigned long long)a0 used:(unsigned long long)a1 withReplyBlock:(id /* block */)a2;
- (id)convertBundlesKeyToBundlesSet:(id)a0;
- (id)convertBundlesSetToBundlesKey:(id)a0;
- (void)enableAppSizeBreakdown;
- (void)enumerateAppsDataUsingBlock:(id /* block */)a0;
- (unsigned char)initDiskUsedAndCapacity;
- (id)mergeAppSet:(id)a0 withAppSet:(id)a1;
- (void)populateAppsData;
- (unsigned long long)postProcessFilteringWithAppPathList:(id)a0;
- (void)postProcessMerging;
- (void)removeBundleSet:(id)a0;
- (void)setAppSet:(id)a0 vendorName:(id)a1;
- (void)setAppSet:(id)a0 withAppSize:(id)a1;
- (void)setDiskUsed:(unsigned long long)a0 andCapacity:(unsigned long long)a1;
- (void)updateAppSet:(id)a0 fixedSize:(unsigned long long)a1 dataSize:(unsigned long long)a2 cloneSize:(unsigned long long)a3 purgeableSize:(unsigned long long)a4 FSPurgeableSize:(unsigned long long)a5 physicalSize:(unsigned long long)a6 appCacheSize:(unsigned long long)a7 CDPluginSize:(unsigned long long)a8;
- (void)updateAppSet:(id)a0 withAppSize:(id)a1;
- (void)updateBundleID:(id)a0 WithCloneSize:(unsigned long long)a1;
- (void)updateBundleID:(id)a0 withDataSize:(unsigned long long)a1;
- (void)updateHiddenApp:(id)a0 withSUPurgeableSize:(unsigned long long)a1;
- (void)updateSystemDataDetailsWith:(id)a0 andSize:(unsigned long long)a1;
- (void)zeroSizeAppsFiltering;

@end
