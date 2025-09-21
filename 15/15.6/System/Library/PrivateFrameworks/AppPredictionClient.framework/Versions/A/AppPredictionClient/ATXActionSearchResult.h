@class ATXActionResponse, ATXAction, ATXHeroData;

@interface ATXActionSearchResult : ATXSuggestionSearchResult

@property (retain, nonatomic) ATXActionResponse *actionResponse;
@property (readonly, nonatomic) ATXAction *atxAction;
@property (readonly, nonatomic) ATXHeroData *heroApp;

+ (char)supportsSecureCoding;
+ (id)_unarchiveObjectFromSuggestion:(id)a0;
+ (id)_demoModeActionResponse;
+ (char)_demoModeEnabled;
+ (id)_recentDonationProactiveSuggestionFromScoredAction:(id)a0 withClientModelId:(id)a1;
+ (id)_unarchiveATXHeroDataFromSuggestion:(id)a0;
+ (id)actionResponseForDeveloperMode;
+ (id)actionResponseForDeveloperModeWithClientId:(id)a0 shouldShowRecentDonations:(char)a1;
+ (id)actionResponseForDeveloperModeWithShouldShowRecentDonations:(char)a0 shouldShowParameterCombinations:(char)a1 shouldShowUpcomingMedia:(char)a2;
+ (id)actionResponseForDeveloperModeWithShouldShowRecentDonations:(char)a0 shouldShowParameterCombinations:(char)a1 shouldShowUpcomingMedia:(char)a2 withClientModelId:(id)a3;
+ (id)actionSearchResultFromProactiveSuggestion:(id)a0 actionResponse:(id)a1 avRoutingSessionHelper:(id)a2 nowPlayingDataProvider:(id)a3;
+ (id)actionSearchResultFromScoredAction:(id)a0 actionResponse:(id)a1 avRoutingSessionHelper:(id)a2 nowPlayingDataProvider:(id)a3;
+ (id)generatedSearchResultForAction:(id)a0 actionResponse:(id)a1;
+ (id)generatedSearchResultForProactiveSuggestion:(id)a0 actionResponse:(id)a1;
+ (id)mostRecentDonationParameterCombinations;
+ (id)predictedActionSearchResultsWithLimit:(long long)a0 forBundleIdentifiers:(id)a1;
+ (id)recentDonationsStarting:(id)a0 end:(id)a1 number:(unsigned long long)a2;
+ (id)recentUpcomingMedia;
+ (char)shouldDisplayRecentActionsOnHomeScreen;
+ (char)shouldDisplayRecentDonationsForTesting;
+ (char)shouldDisplayUpcomingMediaForTesting;
+ (char)shouldDisplayValidParameterCombinations;

- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_updateInlineCardWithContent:(id)a0;
- (id)blendingModelUICacheUpdateUUID;
- (char)isEqualToActionSearchResult:(id)a0;
- (void)setAtxAction:(id)a0;
- (void)setHeroApp:(id)a0;

@end
