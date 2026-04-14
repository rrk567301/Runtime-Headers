@class NSArray, NSMutableDictionary, NSDictionary, NSNumber;

@interface ATXDefaultHomeScreenItemOnboardingStacksProducer : NSObject {
    NSDictionary *_appLaunchCounts;
}

@property (readonly, nonatomic) NSArray *stackableCandidates;
@property (retain, nonatomic) NSMutableDictionary *cachedWidgetPersonalityToAppScore;
@property (retain, nonatomic) NSDictionary *personalityToDescriptorDictionary;
@property (readonly, nonatomic) BOOL isDayZeroExperience;
@property (readonly, nonatomic) BOOL isiPad;
@property (readonly, nonatomic) NSNumber *cachedHasiCloudFamily;
@property (readonly, nonatomic) BOOL shouldIncludeContactsWidget;
@property (readonly, nonatomic) unsigned long long adblDrainClassification;
@property (readonly, nonatomic) BOOL isAmbient;

- (id)initWithCandidateWidgets:(id)a0 cachedWidgetPersonalityToAppScore:(id)a1 personalityToDescriptorDictionary:(id)a2 adblDrainClassification:(unsigned long long)a3 isiPad:(BOOL)a4 isDayZeroExperience:(BOOL)a5 shouldIncludeContactsWidget:(BOOL)a6 cachedHasiCloudFamily:(id)a7 appLaunchCounts:(id)a8 isAmbient:(BOOL)a9;
- (void)_addWidget:(id)a0 toStack:(id)a1 andMarkAsUsed:(id)a2;
- (id)_firstWidgetThatIsntUsedYet:(id)a0 usedPersonalities:(id)a1;
- (BOOL)hasConfiguredHomeAccessoryControl;
- (id)_personalizedOnboardingStackForSize:(unsigned long long)a0 requiredWidgetPersonalities:(id)a1 conditionalWidgetPersonalities:(id)a2 fallbackWidgetPersonalities:(id)a3 rankedThirdPartyWidgets:(id)a4 usedWidgetPersonalities:(id)a5 shouldAdd3PWidgetToStack:(BOOL)a6;
- (id)generatedStacksWithRequest:(id)a0;
- (BOOL)_shouldAddWidget:(id)a0 andFilterFromApps:(id)a1;
- (id)_ambientOnboardingStacks;
- (id)_firstUnusedWidgetFromList:(id)a0 fallbackWidgets:(id)a1 usedPersonalities:(id)a2 size:(unsigned long long)a3;
- (id)_blockedWidgetPersonalities;
- (id)personalizedOnboardingStacksWithRankingAlgorithm:(int)a0;
- (void).cxx_destruct;
- (id)onboardingStacks;
- (id)_dayZeroOnboardingStacks;
- (id)_personalizedAmbientOnboardingStacksForSize:(unsigned long long)a0 stack1RequiredWidgetPersonalities:(id)a1 stack2RequiredWidgetPersonalities:(id)a2 rankedWidgets:(id)a3 usedWidgetPersonalities:(id)a4;
- (id)_personalizedOnboardingStacksForSize:(unsigned long long)a0 requiredWidgetPersonalitiesForStack1:(id)a1 requiredWidgetPersonalitiesForStack2:(id)a2 conditionalWidgetPersonalitiesForStack1:(id)a3 conditionalWidgetPersonalitiesForStack2:(id)a4 fallbackWidgetPersonalitiesForStack1:(id)a5 fallbackWidgetPersonalitiesForStack2:(id)a6 rankedThirdPartyWidgets:(id)a7 blockedWidgetPersonalities:(id)a8;
- (id)initWithOnboardingStackWidgetCache:(id)a0 adblDrainClassification:(unsigned long long)a1 isiPad:(BOOL)a2 shouldIncludeContactsWidget:(BOOL)a3 appLaunchCounts:(id)a4;
- (id)_personalizedStacksForSize:(unsigned long long)a0 requiredWidgetPersonalitiesPerStack:(id)a1 rankedWidgets:(id)a2 usedWidgetPersonalities:(id)a3 maxNumberOfWidgetsPerStack:(unsigned long long)a4 denyListOfExtensions:(id)a5;

@end
