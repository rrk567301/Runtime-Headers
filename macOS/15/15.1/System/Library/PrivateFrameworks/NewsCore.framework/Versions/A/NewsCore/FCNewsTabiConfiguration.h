@class NSDictionary, FCNewsTabiTagSuggestionsConfiguration, FCNewsTabiPersonalizedPaywallsConfiguration, FCNewsTabiFeedPersonalizationConfiguration, FCNewsTabiMyMagazinesConfiguration, FCNewsTabiAdSegmentsEndpoint, NSString, FCNewsTabiEventAggregationConfiguration, FCNewsTabiChannelPickerSuggestionsEndpoint, FCNewsTabiTagScoringEndpoint, FCNewsTabiRecommendedTagsConfiguration, FCNewsTabiPersonalizedPaywallsEndpoint, NSArray, FCNewsTabiTagScoringConfiguration, FCNewsTabiRecommendedIssuesConfiguration, FCNewsTabiRecommendedIssuesEndpoint, FCNewsTabiChannelPickerSuggestionsConfiguration, FCNewsTabiRecommendedTagsEndpoint, FCNewsTabiTagCohortMembershipConfiguration, FCNewsTabiTagSuggestionsEndpoint, FCNewsTabiMyMagazinesEndpoint, FCNewsTabiTagCohortMembershipEndpoint, FCNewsTabiFeedPersonalizationEndpoint, FCNewsTabiUnloadGraphOnBackgroundConfiguration;

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
@property (retain, nonatomic) FCNewsTabiPersonalizedPaywallsEndpoint *personalizedPaywallsEndpoint;
@property (retain, nonatomic) FCNewsTabiPersonalizedPaywallsConfiguration *personalizedPaywallsConfiguration;
@property (retain, nonatomic) FCNewsTabiRecommendedIssuesEndpoint *recommendedIssuesEndpoint;
@property (retain, nonatomic) FCNewsTabiRecommendedIssuesConfiguration *recommendedIssuesConfiguration;
@property (retain, nonatomic) FCNewsTabiRecommendedTagsEndpoint *recommendedTagsEndpoint;
@property (retain, nonatomic) FCNewsTabiTagCohortMembershipEndpoint *tagCohortMembershipEndpoint;
@property (retain, nonatomic) FCNewsTabiTagScoringEndpoint *tagScoringEndpoint;
@property (retain, nonatomic) FCNewsTabiTagSuggestionsEndpoint *tagSuggestionsEndpoint;
@property (retain, nonatomic) NSDictionary *dictionary;
@property (readonly, nonatomic) FCNewsTabiMyMagazinesConfiguration *myMagazinesConfiguration;
@property (readonly, nonatomic) FCNewsTabiRecommendedTagsConfiguration *recommendedTagsConfiguration;
@property (readonly, nonatomic) FCNewsTabiTagCohortMembershipConfiguration *tagCohortMembershipConfiguration;
@property (readonly, nonatomic) FCNewsTabiTagScoringConfiguration *tagScoringConfiguration;
@property (readonly, nonatomic) FCNewsTabiTagSuggestionsConfiguration *tagSuggestionsConfiguration;
@property (readonly, nonatomic) FCNewsTabiUnloadGraphOnBackgroundConfiguration *unloadGraphOnBackgroundConfiguration;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
