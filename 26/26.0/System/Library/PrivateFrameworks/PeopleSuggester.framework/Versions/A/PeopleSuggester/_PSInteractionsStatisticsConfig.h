@class NSString, NSArray, NSDictionary, NSSet, NSDate, NSPredicate;

@interface _PSInteractionsStatisticsConfig : NSObject {
    NSDictionary *_sceneCategoryTagThresholds;
    NSDictionary *_shareExtToAppBundleIdMapping;
}

@property (retain, nonatomic) NSString *sourceBundleId;
@property (retain, nonatomic) NSArray *staticFeatures;
@property (retain, nonatomic) NSArray *dynamicFeatureRecipe;
@property (retain, nonatomic) NSDictionary *sceneCategoryTagMapping;
@property (readonly, nonatomic) NSSet *configuredSceneCategoryTagNames;
@property (retain, nonatomic) NSString *topDomainURL;
@property (nonatomic) BOOL isFallbackFetch;
@property (retain, nonatomic) NSArray *sortOrderFeatureNames;
@property (retain, nonatomic) NSDictionary *defaultValues;
@property (nonatomic) BOOL shouldUseSuggestionEngaged;
@property (readonly, nonatomic) BOOL isWeekendShare;
@property (readonly, nonatomic) double anchorTimeStamp;
@property (nonatomic) double maxComputationTime;
@property (readonly, nonatomic) NSDate *anchorDate;
@property (readonly, nonatomic) NSDate *leftBoundDate;
@property (readonly, nonatomic) NSDate *rightBoundDate;
@property (nonatomic) unsigned long long fetchLimit;
@property (readonly, nonatomic) NSPredicate *sharingInteractionPredicate;
@property (readonly, nonatomic) NSPredicate *communicationInteractionPredicate;

- (void).cxx_destruct;
- (id)appBundleIdForRecord:(id)a0;
- (id)detectedSceneCategoryNamesFromSceneNetTags:(id)a0;
- (id)initDefaultConfigWithBundleId:(id)a0 anchorDate:(id)a1;
- (id)initFallbackConfigWithBundleId:(id)a0 anchorDate:(id)a1;
- (id)initWithSourceBundleId:(id)a0 anchorDate:(id)a1 leftBoundDate:(id)a2 fetchLimit:(unsigned long long)a3 maxComputationTime:(double)a4 shouldUseSuggestionEngaged:(BOOL)a5 sortOrderFeatureNames:(id)a6 statsDefaultValues:(id)a7 sceneCategoryTagMapping:(id)a8 sceneCategoryTagThresholds:(id)a9;
- (id)sceneTagThresholdForSceneCategoryName:(id)a0;
- (void)setLookBackTimeInterval:(double)a0;
- (void)setSceneCategoryTagThresholds:(id)a0;

@end
