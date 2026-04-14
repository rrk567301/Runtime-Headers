@class FCNewsTabiRecommendedTagsInputOutputConfiguration, FCNewsTabiRecommendedTagsContextConfiguration;

@interface FCNewsTabiRecommendedTagsConfiguration : NSObject

@property (retain, nonatomic) FCNewsTabiRecommendedTagsInputOutputConfiguration *bundleInputOutputConfiguration;
@property (retain, nonatomic) FCNewsTabiRecommendedTagsInputOutputConfiguration *nonBundleInputOutputConfiguration;
@property (retain, nonatomic) FCNewsTabiRecommendedTagsContextConfiguration *userContextConfiguration;
@property (nonatomic) BOOL filterLocationSuggestionsOnlyToAppleNewsLocal;
@property (readonly, nonatomic) FCNewsTabiRecommendedTagsContextConfiguration *contextConfiguration;

- (id)initWithDictionary:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
