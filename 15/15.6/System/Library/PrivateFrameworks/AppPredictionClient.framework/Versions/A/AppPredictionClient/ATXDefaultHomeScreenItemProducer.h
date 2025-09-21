@class NSSet, NSDictionary, NSArray, NSMutableDictionary, CHSWidgetDescriptor, ATXDefaultHomeScreenItemUpdate;
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
@property (nonatomic) char isDayZeroExperience;
@property (nonatomic) char isiPad;
@property (nonatomic) unsigned long long adblDrainClassification;
@property (retain, nonatomic) NSDictionary *personalityToDescriptorDictionary;
@property (retain, nonatomic) NSArray *candidateDescriptors;
@property (retain, nonatomic) NSSet *widgetsOnHomeScreen;
@property (readonly, nonatomic) ATXDefaultHomeScreenItemUpdate *update;

- (void).cxx_destruct;
- (id)_appPredictionsWidgetDescriptor;
- (id)_dayZeroOnboardingStacks;
- (id)_dayZeroUpdate;
- (id)_firstInstalledWidgetDate;
- (void)_initializeCachedWidgetPersonalityToAppScoreCache;
- (char)_isNewlyInstalledWidget:(id)a0;
- (char)_isStackConfiguredOnHomeScreen;
- (id)_personalizedGalleryWidgetsForSize:(unsigned long long)a0;
- (id)_personalizedStack;
- (id)_personalizedStackForRankerPlistType:(int)a0;
- (id)_personalizedStackFromCandidates:(id)a0 rankerPlistType:(int)a1 size:(unsigned long long)a2;
- (id)_personalizedTodayStack;
- (id)_personalizedUpdate;
- (long long)_rankTypeGivenWidgetIsNewlyInstalled:(char)a0 isAlreadyAdded:(char)a1;
- (id)_stackFromDefaultStackPersonalities:(id)a0;
- (id)_stackableCandidates;
- (id)ambientOnboardingStacks;
- (id)carPlayOnboardingStacks;
- (id)initWithDescriptors:(id)a0 descriptorInstallDates:(id)a1 homeScreenConfig:(id)a2 isDayZeroExperience:(char)a3 isiPad:(char)a4 spotlightAppLaunchHistogram:(id)a5 adblDrainClassification:(unsigned long long)a6 appLaunchCounts:(id)a7;
- (id)initWithDescriptors:(id)a0 descriptorInstallDates:(id)a1 homeScreenConfig:(id)a2 isDayZeroExperience:(char)a3 isiPad:(char)a4 spotlightAppLaunchHistogram:(id)a5 appLaunchCounts:(id)a6;
- (id)onboardingStacks;
- (id)personalizedOnboardingStacksWithRankingAlgorithm:(int)a0;

@end
