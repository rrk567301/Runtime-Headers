@class FCNewsTabiPersonalizedPaywallsEndpoint, NSDictionary, FCNewsTabiTagCohortMembershipEndpoint, FCNewsTabiFeedPersonalizationEndpoint, FCNewsTabiNotificationScoringConfiguration, FCNewsTabiRecipeDiversificationEndpoint, FCNewsTabiTagScoringConfiguration, FCNewsTabiEventAggregationConfiguration, FCNewsTabiRecommendedTagsEndpoint, FCNewsTabiChannelPickerSuggestionsConfiguration, FCNewsTabiPersonalizedPaywallsConfiguration, FCNewsTabiRecipeDiversificationConfiguration, FCNewsTabiRecipeScoringEndpoint, FCNewsTabiRecommendedIssuesEndpoint, FCNewsTabiTagCohortMembershipConfiguration, FCNewsTabiTagScoringEndpoint, FCNewsTabiFeedPersonalizationConfiguration, FCNewsTabiAdSegmentsEndpoint, FCNewsTabiRecommendedTagsConfiguration, FCNewsTabiRecommendedIssuesConfiguration, FCNewsTabiRecipeScoringConfiguration, FCNewsTabiSmarterFetchEndpoint, FCNewsTabiMyMagazinesEndpoint, NSArray, FCNewsTabiTagSuggestionsEndpoint, NSString, FCNewsTabiUnloadGraphOnBackgroundConfiguration, FCNewsTabiChannelPickerSuggestionsEndpoint, FCNewsTabiTagSuggestionsConfiguration, FCNewsTabiMyMagazinesConfiguration, FCNewsTabiRecipeTagSuggestionsConfiguration, FCNewsTabiRecipeTagSuggestionsEndpoint, FCNewsTabiNotificationScoringEndpoint, FCNewsTabiSmarterFetchConfiguration;

@interface FCNewsTabiConfiguration : NSObject

@property (retain, nonatomic) NSString *version;
@property (nonatomic) long long mlComputeUnits;
@property (retain, nonatomic) NSArray *packageAssetIDs;
@property (retain, nonatomic) FCNewsTabiAdSegmentsEndpoint *adSegmentsEndpoint;
@property (retain, nonatomic) FCNewsTabiChannelPickerSuggestionsEndpoint *channelPickerSuggestionsEndpoint;
@property (retain, nonatomic) FCNewsTabiChannelPickerSuggestionsConfiguration *channelPickerSuggestionsConfiguration;
@property (retain, nonatomic) FCNewsTabiEventAggregationConfiguration *eventAggregationConfiguration;
@property (retain, nonatomic) FCNewsTabiFeedPersonalizationEndpoint *feedPersonalizationEndpoint;
@property (retain, nonatomic) FCNewsTabiFeedPersonalizationConfiguration *feedPersonalizationConfiguration;
@property (retain, nonatomic) FCNewsTabiMyMagazinesEndpoint *myMagazinesEndpoint;
@property (retain, nonatomic) FCNewsTabiNotificationScoringEndpoint *notificationScoringEndpoint;
@property (retain, nonatomic) FCNewsTabiPersonalizedPaywallsEndpoint *personalizedPaywallsEndpoint;
@property (retain, nonatomic) FCNewsTabiPersonalizedPaywallsConfiguration *personalizedPaywallsConfiguration;
@property (retain, nonatomic) FCNewsTabiRecommendedIssuesEndpoint *recommendedIssuesEndpoint;
@property (retain, nonatomic) FCNewsTabiRecommendedIssuesConfiguration *recommendedIssuesConfiguration;
@property (retain, nonatomic) FCNewsTabiRecommendedTagsEndpoint *recommendedTagsEndpoint;
@property (retain, nonatomic) FCNewsTabiTagCohortMembershipEndpoint *tagCohortMembershipEndpoint;
@property (retain, nonatomic) FCNewsTabiTagScoringEndpoint *tagScoringEndpoint;
@property (retain, nonatomic) FCNewsTabiTagSuggestionsEndpoint *tagSuggestionsEndpoint;
@property (retain, nonatomic) NSDictionary *dictionary;
@property (retain, nonatomic) FCNewsTabiRecipeScoringEndpoint *recipeScoringEndpoint;
@property (retain, nonatomic) FCNewsTabiRecipeDiversificationEndpoint *recipeDiversificationEndpoint;
@property (retain, nonatomic) FCNewsTabiRecipeTagSuggestionsEndpoint *recipeTagSuggestionsEndpoint;
@property (retain, nonatomic) FCNewsTabiSmarterFetchEndpoint *smarterFetchEndpoint;
@property (readonly, nonatomic) FCNewsTabiMyMagazinesConfiguration *myMagazinesConfiguration;
@property (readonly, nonatomic) FCNewsTabiNotificationScoringConfiguration *notificationScoringConfiguration;
@property (readonly, nonatomic) FCNewsTabiRecommendedTagsConfiguration *recommendedTagsConfiguration;
@property (readonly, nonatomic) FCNewsTabiTagCohortMembershipConfiguration *tagCohortMembershipConfiguration;
@property (readonly, nonatomic) FCNewsTabiTagScoringConfiguration *tagScoringConfiguration;
@property (readonly, nonatomic) FCNewsTabiTagSuggestionsConfiguration *tagSuggestionsConfiguration;
@property (readonly, nonatomic) FCNewsTabiUnloadGraphOnBackgroundConfiguration *unloadGraphOnBackgroundConfiguration;
@property (readonly, nonatomic) FCNewsTabiRecipeScoringConfiguration *recipeScoringConfiguration;
@property (readonly, nonatomic) FCNewsTabiRecipeDiversificationConfiguration *recipeDiversificationConfiguration;
@property (readonly, nonatomic) FCNewsTabiRecipeTagSuggestionsConfiguration *recipeTagSuggestionsConfiguration;
@property (readonly, nonatomic) FCNewsTabiSmarterFetchConfiguration *smarterFetchConfiguration;

- (id)initWithDictionary:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
