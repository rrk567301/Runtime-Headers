@class _ATXInternalUninstallNotification, NSMutableDictionary, NSString, ATXHistogramData;

@interface _ATXAppLaunchCategoricalHistogram : NSObject <ATXBundleIdRemovableProtocol, ATXActionKeyRemovableProtocol, NSSecureCoding, _ATXAppLaunchHistogramProtocol> {
    ATXHistogramData *_histogramData;
    double _maxSSIDCount;
    _ATXInternalUninstallNotification *_uninstallNotificationListener;
    unsigned short _maxCategoryId;
    NSMutableDictionary *_categoryToCategoryId;
    NSMutableDictionary *_lastDates;
    NSString *_prevCategory;
    unsigned short _prevCategoryId;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long pruningMethod;
@property (readonly, nonatomic) unsigned short maxCategoryCount;
@property (readonly, nonatomic) unsigned short categoryCount;

+ (id)stringForPruningMethod:(long long)a0;

- (void)removeBundleIds:(id)a0;
- (void)decayWithHalfLifeInDays:(double)a0;
- (int)removeHistoryForBundleIds:(id)a0;
- (BOOL)removeHistoryForCategory:(id)a0;
- (id)initWithType:(long long)a0;
- (double)overallLaunchPopularityForCategory:(id)a0;
- (void)removeActionKeys:(id)a0;
- (double)totalLaunches;
- (double)totalLaunchesForCategory:(id)a0;
- (void)purgeUnusedCategories;
- (void)removeIdentifiers:(id)a0;
- (id)launchCountsForEachCategoryForBundleId:(id)a0;
- (double)ratio:(double)a0 over:(double)a1;
- (void)resetHistogram:(id)a0;
- (id)lastDate;
- (double)overallLaunchPopularityForBundleId:(id)a0 category:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (double)totalLaunchesForBundleId:(id)a0;
- (BOOL)bundleHasBeenLaunched:(id)a0;
- (double)overallLaunchPopularityForBundleId:(id)a0;
- (unsigned long long)bundleIDCountForCategory:(id)a0;
- (void)_garbageCollectCategoryIds;
- (double)entropyForBundleId:(id)a0;
- (void).cxx_destruct;
- (void)_setMaxCategoryCount:(unsigned short)a0 pruningMethod:(long long)a1;
- (double)relativeLaunchPopularityWithBundleId:(id)a0 category:(id)a1;
- (double)entropy;
- (id)init;
- (unsigned short)_eventIdforBundleId:(id)a0;
- (void)_removeMappingForCategory:(id)a0;
- (BOOL)_tryGetEventIdforBundleId:(id)a0 createIfMissing:(BOOL)a1 eventIdOut:(unsigned short *)a2;
- (id)description;
- (void)resetData;
- (BOOL)removeHistoryForBundleId:(id)a0;
- (id)initWithType:(long long)a0 maxCategoryCount:(unsigned short)a1 pruningMethod:(long long)a2;
- (void)_reduceCategoryCountTo:(unsigned short)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)_tryGetCategoryIdforCategory:(id)a0 createIfMissing:(BOOL)a1 categoryIdOut:(unsigned short *)a2;
- (void)verifyDataIntegrity;
- (double)entropyForCategory:(id)a0;
- (void)addLaunchWithBundleId:(id)a0 date:(id)a1 category:(id)a2;
- (void)decayByFactor:(double)a0;
- (id)initWithHistogram:(id)a0 categoryToCategoryId:(id)a1 maxCategoryId:(unsigned short)a2 maxCategoryCount:(unsigned short)a3 lastDates:(id)a4 pruningMethod:(long long)a5;
- (double)totalLaunchesForBundleId:(id)a0 category:(id)a1;
- (unsigned short)_categoryIdforCategory:(id)a0;
- (double)launchPopularityWithBundleId:(id)a0 category:(id)a1;
- (void)addLaunchWithBundleId:(id)a0 date:(id)a1 category:(id)a2 weight:(float)a3;

@end
