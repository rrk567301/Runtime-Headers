@class ATXDefaultHomeScreenItemUpdate, NSArray, NSSet, CHSWidgetDescriptor, NSDictionary, NSMutableDictionary, ATXWidgetGalleryRequest, ATXWidgetSmartStackRequest;
@protocol ATXCategoricalHistogramProtocol;

@interface ATXDefaultHomeScreenItemProducer : NSObject {
    NSMutableDictionary *_cachedWidgetPersonalityToAppScore;
    id<ATXCategoricalHistogramProtocol> _spotlightAppLaunchHistogram;
    NSDictionary *_appLaunchCounts;
}

@property (class, readonly, nonatomic) CHSWidgetDescriptor *appPredictionsWidgetDescriptor;

@property (readonly, nonatomic) NSSet *descriptors;
@property (readonly, nonatomic) NSDictionary *descriptorInstallDates;
@property (readonly, nonatomic) NSArray *homeScreenConfig;
@property (nonatomic) BOOL isDayZeroExperience;
@property (nonatomic) BOOL isiPad;
@property (nonatomic) unsigned long long adblDrainClassification;
@property (retain, nonatomic) NSDictionary *personalityToDescriptorDictionary;
@property (retain, nonatomic) NSArray *candidateDescriptors;
@property (retain, nonatomic) NSSet *widgetsOnHomeScreen;
@property (readonly, nonatomic) ATXDefaultHomeScreenItemUpdate *update;
@property (retain, nonatomic) ATXWidgetSmartStackRequest *smartStackRequest;
@property (retain, nonatomic) ATXWidgetGalleryRequest *galleryRequest;

- (BOOL)_isNewlyInstalledWidget:(id)a0;
- (id)generatedStacksWithRequest:(id)a0;
- (id)_personalizedUpdate;
- (BOOL)_isStackConfiguredOnHomeScreen;
- (id)_personalizedStackForRankerPlistType:(int)a0;
- (id)onboardingStacks;
- (id)_firstInstalledWidgetDate;
- (id)_stackableCandidates;
- (id)initWithDescriptors:(id)a0 descriptorInstallDates:(id)a1 homeScreenConfig:(id)a2 isDayZeroExperience:(BOOL)a3 isiPad:(BOOL)a4 spotlightAppLaunchHistogram:(id)a5 appLaunchCounts:(id)a6;
- (id)_personalizedGalleryWidgetsForSize:(unsigned long long)a0;
- (id)ambientOnboardingStacks;
- (id)_personalizedStack;
- (id)personalizedOnboardingStacksWithRankingAlgorithm:(int)a0;
- (void).cxx_destruct;
- (id)_dayZeroUpdate;
- (void)_initializeCachedWidgetPersonalityToAppScoreCache;
- (id)_personalizedStackFromCandidates:(id)a0 rankerPlistType:(int)a1 size:(unsigned long long)a2;
- (long long)_rankTypeGivenWidgetIsNewlyInstalled:(BOOL)a0 isAlreadyAdded:(BOOL)a1;
- (id)_dayZeroOnboardingStacks;
- (id)_stackFromDefaultStackPersonalities:(id)a0;
- (id)_personalizedTodayStack;
- (id)_appPredictionsWidgetDescriptor;
- (id)initWithDescriptors:(id)a0 descriptorInstallDates:(id)a1 homeScreenConfig:(id)a2 isDayZeroExperience:(BOOL)a3 isiPad:(BOOL)a4 spotlightAppLaunchHistogram:(id)a5 adblDrainClassification:(unsigned long long)a6 appLaunchCounts:(id)a7;

@end
