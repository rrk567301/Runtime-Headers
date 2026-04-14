@class ATXActionResponse, ATXAction, ATXHeroData;

@interface ATXActionSearchResult : ATXSuggestionSearchResult

@property (retain, nonatomic) ATXActionResponse *actionResponse;
@property (readonly, nonatomic) ATXAction *atxAction;
@property (readonly, nonatomic) ATXHeroData *heroApp;

+ (BOOL)supportsSecureCoding;
+ (id)actionResponseForDeveloperModeWithClientId:(id)a0 shouldShowRecentDonations:(BOOL)a1;
+ (id)actionResponseForDeveloperMode;
+ (id)_unarchiveObjectFromSuggestion:(id)a0;
+ (BOOL)_demoModeEnabled;
+ (id)generatedSearchResultForAction:(id)a0 actionResponse:(id)a1;
+ (id)actionSearchResultFromProactiveSuggestion:(id)a0 actionResponse:(id)a1 avRoutingSessionHelper:(id)a2 nowPlayingDataProvider:(id)a3;
+ (id)_recentDonationProactiveSuggestionFromScoredAction:(id)a0 withClientModelId:(id)a1;
+ (id)predictedActionSearchResultsWithLimit:(long long)a0 forBundleIdentifiers:(id)a1;
+ (id)_demoModeActionResponse;
+ (id)actionSearchResultFromScoredAction:(id)a0 actionResponse:(id)a1 avRoutingSessionHelper:(id)a2 nowPlayingDataProvider:(id)a3;
+ (id)actionResponseForDeveloperModeWithShouldShowRecentDonations:(BOOL)a0 shouldShowParameterCombinations:(BOOL)a1 shouldShowUpcomingMedia:(BOOL)a2;
+ (id)recentUpcomingMedia;
+ (id)actionResponseForDeveloperModeWithShouldShowRecentDonations:(BOOL)a0 shouldShowParameterCombinations:(BOOL)a1 shouldShowUpcomingMedia:(BOOL)a2 withClientModelId:(id)a3;
+ (BOOL)shouldDisplayValidParameterCombinations;
+ (BOOL)shouldDisplayRecentDonationsForTesting;
+ (BOOL)shouldDisplayRecentActionsOnHomeScreen;
+ (BOOL)shouldDisplayUpcomingMediaForTesting;
+ (id)generatedSearchResultForProactiveSuggestion:(id)a0 actionResponse:(id)a1;
+ (id)_unarchiveATXHeroDataFromSuggestion:(id)a0;
+ (id)mostRecentDonationParameterCombinations;
+ (id)recentDonationsStarting:(id)a0 end:(id)a1 number:(unsigned long long)a2;

- (id)init;
- (id)blendingModelUICacheUpdateUUID;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void)_updateInlineCardWithContent:(id)a0;
- (BOOL)isEqualToActionSearchResult:(id)a0;
- (void)setAtxAction:(id)a0;
- (void)setHeroApp:(id)a0;

@end
