@class NSString, NSArray, FCNewsTabiChannelPickerSuggestionsConfiguration, NSDictionary, FCNewsTabiRecommendedIssuesConfiguration, FCNewsTabiPersonalizedPaywallsConfiguration, FCNewsTabiFeedPersonalizationConfiguration, FCNewsTabiEventAggregationConfiguration;

@interface FCNewsTabiConfiguration : NSObject

@property (retain, nonatomic) NSString *version;
@property (nonatomic) long long mlComputeUnits;
@property (retain, nonatomic) NSArray *packageAssetIDs;
@property (retain, nonatomic) FCNewsTabiChannelPickerSuggestionsConfiguration *channelPickerSuggestionsConfiguration;
@property (retain, nonatomic) FCNewsTabiEventAggregationConfiguration *eventAggregationConfiguration;
@property (retain, nonatomic) FCNewsTabiFeedPersonalizationConfiguration *feedPersonalizationConfiguration;
@property (retain, nonatomic) FCNewsTabiPersonalizedPaywallsConfiguration *personalizedPaywallsConfiguration;
@property (retain, nonatomic) FCNewsTabiRecommendedIssuesConfiguration *recommendedIssuesConfiguration;
@property (nonatomic) BOOL tagScoringEnabled;
@property (readonly, nonatomic) NSDictionary *dictionary;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
