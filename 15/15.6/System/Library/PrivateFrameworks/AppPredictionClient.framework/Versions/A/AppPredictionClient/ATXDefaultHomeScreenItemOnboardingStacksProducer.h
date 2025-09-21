@class NSArray, NSMutableDictionary, NSDictionary, NSNumber;

@interface ATXDefaultHomeScreenItemOnboardingStacksProducer : NSObject {
    NSDictionary *_appLaunchCounts;
}

@property (readonly, nonatomic) NSArray *stackableCandidates;
@property (retain, nonatomic) NSMutableDictionary *cachedWidgetPersonalityToAppScore;
@property (retain, nonatomic) NSDictionary *personalityToDescriptorDictionary;
@property (readonly, nonatomic) char isDayZeroExperience;
@property (readonly, nonatomic) char isiPad;
@property (readonly, nonatomic) NSNumber *cachedHasiCloudFamily;
@property (readonly, nonatomic) char shouldIncludeContactsWidget;
@property (readonly, nonatomic) unsigned long long adblDrainClassification;
@property (readonly, nonatomic) char isAmbient;
@property (readonly, nonatomic) char isCarPlay;

- (void).cxx_destruct;
- (void)_addWidget:(id)a0 toStack:(id)a1 andMarkAsUsed:(id)a2;
- (id)_ambientOnboardingStacks;
- (id)_blockedWidgetPersonalities;
- (id)_carPlayOnboardingStacks;
- (id)_dayZeroOnboardingStacks;
- (id)_firstUnusedWidgetFromList:(id)a0 fallbackWidgets:(id)a1 usedPersonalities:(id)a2 size:(unsigned long long)a3;
- (id)_firstWidgetThatIsntUsedYet:(id)a0 usedPersonalities:(id)a1;
- (id)_personalizedAmbientOnboardingStacksForSize:(unsigned long long)a0 stack1RequiredWidgetPersonalities:(id)a1 stack2RequiredWidgetPersonalities:(id)a2 rankedWidgets:(id)a3 usedWidgetPersonalities:(id)a4;
- (id)_personalizedOnboardingStackForSize:(unsigned long long)a0 requiredWidgetPersonalities:(id)a1 conditionalWidgetPersonalities:(id)a2 fallbackWidgetPersonalities:(id)a3 rankedThirdPartyWidgets:(id)a4 usedWidgetPersonalities:(id)a5 shouldAdd3PWidgetToStack:(char)a6;
- (id)_personalizedOnboardingStacksForSize:(unsigned long long)a0 requiredWidgetPersonalitiesForStack1:(id)a1 requiredWidgetPersonalitiesForStack2:(id)a2 conditionalWidgetPersonalitiesForStack1:(id)a3 conditionalWidgetPersonalitiesForStack2:(id)a4 fallbackWidgetPersonalitiesForStack1:(id)a5 fallbackWidgetPersonalitiesForStack2:(id)a6 rankedThirdPartyWidgets:(id)a7 blockedWidgetPersonalities:(id)a8;
- (char)_shouldAddWidget:(id)a0 andFilterFromApps:(id)a1;
- (id)initWithCandidateWidgets:(id)a0 cachedWidgetPersonalityToAppScore:(id)a1 personalityToDescriptorDictionary:(id)a2 adblDrainClassification:(unsigned long long)a3 isiPad:(char)a4 isDayZeroExperience:(char)a5 shouldIncludeContactsWidget:(char)a6 cachedHasiCloudFamily:(id)a7 appLaunchCounts:(id)a8 isAmbient:(char)a9 isCarPlay:(char)a10;
- (id)initWithOnboardingStackWidgetCache:(id)a0 adblDrainClassification:(unsigned long long)a1 isiPad:(char)a2 shouldIncludeContactsWidget:(char)a3 appLaunchCounts:(id)a4;
- (id)onboardingStacks;
- (id)personalizedOnboardingStacksWithRankingAlgorithm:(int)a0;

@end
