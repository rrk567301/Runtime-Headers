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

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) long long pruningMethod;
@property (readonly, nonatomic) unsigned short maxCategoryCount;
@property (readonly, nonatomic) unsigned short categoryCount;

+ (id)stringForPruningMethod:(long long)a0;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(long long)a0;
- (double)entropy;
- (id)lastDate;
- (void)decayByFactor:(double)a0;
- (void)decayWithHalfLifeInDays:(double)a0;
- (void)removeIdentifiers:(id)a0;
- (void)resetData;
- (double)totalLaunches;
- (void)resetHistogram:(id)a0;
- (unsigned short)_categoryIdforCategory:(id)a0;
- (unsigned short)_eventIdforBundleId:(id)a0;
- (void)_garbageCollectCategoryIds;
- (void)_reduceCategoryCountTo:(unsigned short)a0;
- (void)_removeMappingForCategory:(id)a0;
- (void)_setMaxCategoryCount:(unsigned short)a0 pruningMethod:(long long)a1;
- (char)_tryGetCategoryIdforCategory:(id)a0 createIfMissing:(char)a1 categoryIdOut:(unsigned short *)a2;
- (char)_tryGetEventIdforBundleId:(id)a0 createIfMissing:(char)a1 eventIdOut:(unsigned short *)a2;
- (void)addLaunchWithBundleId:(id)a0 date:(id)a1 category:(id)a2;
- (void)addLaunchWithBundleId:(id)a0 date:(id)a1 category:(id)a2 weight:(float)a3;
- (char)bundleHasBeenLaunched:(id)a0;
- (unsigned long long)bundleIDCountForCategory:(id)a0;
- (double)entropyForBundleId:(id)a0;
- (double)entropyForCategory:(id)a0;
- (id)initWithHistogram:(id)a0 categoryToCategoryId:(id)a1 maxCategoryId:(unsigned short)a2 maxCategoryCount:(unsigned short)a3 lastDates:(id)a4 pruningMethod:(long long)a5;
- (id)initWithType:(long long)a0 maxCategoryCount:(unsigned short)a1 pruningMethod:(long long)a2;
- (id)launchCountsForEachCategoryForBundleId:(id)a0;
- (double)launchPopularityWithBundleId:(id)a0 category:(id)a1;
- (double)overallLaunchPopularityForBundleId:(id)a0;
- (double)overallLaunchPopularityForBundleId:(id)a0 category:(id)a1;
- (double)overallLaunchPopularityForCategory:(id)a0;
- (void)purgeUnusedCategories;
- (double)ratio:(double)a0 over:(double)a1;
- (double)relativeLaunchPopularityWithBundleId:(id)a0 category:(id)a1;
- (void)removeActionKeys:(id)a0;
- (void)removeBundleIds:(id)a0;
- (char)removeHistoryForBundleId:(id)a0;
- (int)removeHistoryForBundleIds:(id)a0;
- (char)removeHistoryForCategory:(id)a0;
- (double)totalLaunchesForBundleId:(id)a0;
- (double)totalLaunchesForBundleId:(id)a0 category:(id)a1;
- (double)totalLaunchesForCategory:(id)a0;
- (void)verifyDataIntegrity;

@end
