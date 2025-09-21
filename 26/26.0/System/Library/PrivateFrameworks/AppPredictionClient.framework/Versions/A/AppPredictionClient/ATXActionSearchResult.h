@class ATXActionResponse, ATXAction, ATXHeroData;

@interface ATXActionSearchResult : ATXSuggestionSearchResult

@property (retain, nonatomic) ATXActionResponse *actionResponse;
@property (readonly, nonatomic) ATXAction *atxAction;
@property (readonly, nonatomic) ATXHeroData *heroApp;

+ (BOOL)_demoModeEnabled;
+ (id)recentUpcomingMedia;
+ (BOOL)supportsSecureCoding;
+ (BOOL)shouldDisplayRecentDonationsForTesting;
+ (id)actionSearchResultFromProactiveSuggestion:(id)a0 actionResponse:(id)a1 avRoutingSessionHelper:(id)a2 nowPlayingDataProvider:(id)a3;
+ (id)actionSearchResultFromScoredAction:(id)a0 actionResponse:(id)a1 avRoutingSessionHelper:(id)a2 nowPlayingDataProvider:(id)a3;
+ (id)actionResponseForDeveloperModeWithClientId:(id)a0 shouldShowRecentDonations:(BOOL)a1;
+ (id)_unarchiveATXHeroDataFromSuggestion:(id)a0;
+ (id)recentDonationsStarting:(id)a0 end:(id)a1 number:(unsigned long long)a2;
+ (id)_demoModeActionResponse;
+ (id)actionResponseForDeveloperMode;
+ (id)actionResponseForDeveloperModeWithShouldShowRecentDonations:(BOOL)a0 shouldShowParameterCombinations:(BOOL)a1 shouldShowUpcomingMedia:(BOOL)a2;
+ (BOOL)shouldDisplayRecentActionsOnHomeScreen;
+ (id)actionResponseForDeveloperModeWithShouldShowRecentDonations:(BOOL)a0 shouldShowParameterCombinations:(BOOL)a1 shouldShowUpcomingMedia:(BOOL)a2 withClientModelId:(id)a3;
+ (id)generatedSearchResultForProactiveSuggestion:(id)a0 actionResponse:(id)a1;
+ (id)mostRecentDonationParameterCombinations;
+ (id)predictedActionSearchResultsWithLimit:(long long)a0 forBundleIdentifiers:(id)a1;
+ (id)_unarchiveObjectFromSuggestion:(id)a0;
+ (id)generatedSearchResultForAction:(id)a0 actionResponse:(id)a1;
+ (BOOL)shouldDisplayValidParameterCombinations;
+ (BOOL)shouldDisplayUpcomingMediaForTesting;
+ (id)_recentDonationProactiveSuggestionFromScoredAction:(id)a0 withClientModelId:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)blendingModelUICacheUpdateUUID;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)_updateInlineCardWithContent:(id)a0;
- (BOOL)isEqualToActionSearchResult:(id)a0;
- (void)setAtxAction:(id)a0;
- (void)setHeroApp:(id)a0;

@end
