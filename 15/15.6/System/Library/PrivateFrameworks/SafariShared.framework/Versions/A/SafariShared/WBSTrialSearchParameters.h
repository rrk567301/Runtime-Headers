@class NSArray, NSString, NSNumber;

@interface WBSTrialSearchParameters : NSObject <WBSSearchEnginePreferenceObserverDelegate, NSSecureCoding>

@property (class, readonly, nonatomic) NSArray *searchParameters;
@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char isProvider1Enabled;
@property (readonly, nonatomic) char isProvider2Enabled;
@property (nonatomic) char isCFSearch;
@property (nonatomic) char isForVoiceSearch;
@property (nonatomic) char isResultFilteringDisabled;
@property (nonatomic) char isDedupeThroughAlternativeURLsEnabled;
@property (nonatomic) char strengthenAutocompleteTriggerExtensionMatching;
@property (nonatomic) char enableCompletionListHistoryDeduplicationValue;
@property (nonatomic) char enableCompletionListHistoryDeduplicationSwitchToTabValue;
@property (nonatomic) long long characterThresholdForAnywhereInTitleOrURL;
@property (nonatomic) double percentageThresholdForAnywhereInTitle;
@property (nonatomic) double percentageThresholdForAnywhereInURL;
@property (nonatomic) long long characterThresholdForStartOfURLPathComponent;
@property (nonatomic) long long matchingWordsInTitleThreshold;
@property (nonatomic) long long characterThresholdForStartOfTitle;
@property (nonatomic) long long characterThresholdForStartOfTitleWord;
@property (nonatomic) long long characterThresholdForStartOfTitleWordMatchLongEnoughForTopHit;
@property (nonatomic) long long characterThresholdForStartOfURL;
@property (nonatomic) double normalizedTopSitesScoreAndVisitCountMultiplier;
@property (nonatomic) long long maxBookmarksAndHistoryItems;
@property (readonly, nonatomic) long long thresholdForHidingIgnoredSiriSuggestedSites;
@property (readonly, nonatomic) char shouldHideIgnoredSiriSuggestedSites;
@property (readonly, nonatomic) NSString *codepathIDs;
@property (readonly, nonatomic) char shouldEmitTriggerLoggingForHidingIgnoredSiriSuggestedWebsite;
@property (readonly, nonatomic) char isPostFixSuggestionsEnabled;
@property (readonly, nonatomic) NSNumber *prefixNavigationalIntentThreshold;
@property (readonly, nonatomic) char checkServerCompletionForPrefixNavigationalIntent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)codePathUUIDForHideIgnoredSiriSuggestedWebsites;
+ (id)getSearchParametersHelper:(id)a0 withTrial:(id)a1 withCache:(char)a2;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPreferences:(id)a0;
- (id)initWithTrial:(char)a0 forPrefs:(id)a1 forTrial:(id)a2;
- (char)isDuckDuckGoABEnabledForSearchEnginePreferenceObserver:(id)a0;
- (char)isGoogleABEnabledForSearchEnginePreferenceObserver:(id)a0;
- (void)updateUsingPreferenceKeys:(id)a0;
- (void)updateWithDefaults;
- (void)updateWithTrial:(char)a0 forTrial:(id)a1;

@end
