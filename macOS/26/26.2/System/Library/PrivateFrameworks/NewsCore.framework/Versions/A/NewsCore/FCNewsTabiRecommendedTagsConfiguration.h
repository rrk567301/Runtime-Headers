@class FCNewsTabiRecommendedTagsInputOutputConfiguration, FCNewsTabiRecommendedTagsContextConfiguration;

@interface FCNewsTabiRecommendedTagsConfiguration : NSObject

@property (retain, nonatomic) FCNewsTabiRecommendedTagsInputOutputConfiguration *bundleInputOutputConfiguration;
@property (retain, nonatomic) FCNewsTabiRecommendedTagsInputOutputConfiguration *nonBundleInputOutputConfiguration;
@property (retain, nonatomic) FCNewsTabiRecommendedTagsContextConfiguration *userContextConfiguration;
@property (nonatomic) BOOL filterLocationSuggestionsOnlyToAppleNewsLocal;
@property (readonly, nonatomic) FCNewsTabiRecommendedTagsContextConfiguration *contextConfiguration;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (id)init;

@end
