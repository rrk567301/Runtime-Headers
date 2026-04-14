@class NSDictionary, FCNewsTabiTagSuggestionsConfiguration, FCNewsTabiPersonalizedPaywallsConfiguration, FCNewsTabiFeedPersonalizationConfiguration, FCNewsTabiMyMagazinesConfiguration, FCNewsTabiAdSegmentsEndpoint, NSString, FCNewsTabiEventAggregationConfiguration, FCNewsTabiChannelPickerSuggestionsEndpoint, FCNewsTabiTagScoringEndpoint, FCNewsTabiRecommendedTagsConfiguration, FCNewsTabiPersonalizedPaywallsEndpoint, NSArray, FCNewsTabiTagScoringConfiguration, FCNewsTabiRecommendedIssuesConfiguration, FCNewsTabiRecommendedIssuesEndpoint, FCNewsTabiChannelPickerSuggestionsConfiguration, FCNewsTabiRecommendedTagsEndpoint, FCNewsTabiMyMagazinesEndpoint, FCNewsTabiTagCohortMembershipConfiguration, FCNewsTabiTagSuggestionsEndpoint, FCNewsTabiTagCohortMembershipEndpoint, FCNewsTabiFeedPersonalizationEndpoint, FCNewsTabiUnloadGraphOnBackgroundConfiguration;

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
@property (retain, nonatomic) FCNewsTabiPersonalizedPaywallsEndpoint *personalizedPaywallsEndpoint;
@property (retain, nonatomic) FCNewsTabiPersonalizedPaywallsConfiguration *personalizedPaywallsConfiguration;
@property (retain, nonatomic) FCNewsTabiRecommendedIssuesEndpoint *recommendedIssuesEndpoint;
@property (retain, nonatomic) FCNewsTabiRecommendedIssuesConfiguration *recommendedIssuesConfiguration;
@property (retain, nonatomic) FCNewsTabiRecommendedTagsEndpoint *recommendedTagsEndpoint;
@property (retain, nonatomic) FCNewsTabiRecommendedTagsConfiguration *recommendedTagsConfiguration;
@property (retain, nonatomic) FCNewsTabiTagCohortMembershipEndpoint *tagCohortMembershipEndpoint;
@property (retain, nonatomic) FCNewsTabiTagCohortMembershipConfiguration *tagCohortMembershipConfiguration;
@property (retain, nonatomic) FCNewsTabiMyMagazinesEndpoint *myMagazinesEndpoint;
@property (retain, nonatomic) FCNewsTabiMyMagazinesConfiguration *myMagazinesConfiguration;
@property (retain, nonatomic) FCNewsTabiTagScoringEndpoint *tagScoringEndpoint;
@property (retain, nonatomic) FCNewsTabiTagScoringConfiguration *tagScoringConfiguration;
@property (retain, nonatomic) FCNewsTabiTagSuggestionsEndpoint *tagSuggestionsEndpoint;
@property (retain, nonatomic) FCNewsTabiTagSuggestionsConfiguration *tagSuggestionsConfiguration;
@property (retain, nonatomic) NSDictionary *dictionary;
@property (readonly, nonatomic) FCNewsTabiUnloadGraphOnBackgroundConfiguration *unloadGraphOnBackgroundConfiguration;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
