@class NSString, FCNewsTabiRecipeTagSuggestionsConfiguration;

@interface FCNewsTabiRecipeTagSuggestionsEndpoint : NSObject

@property (readonly, nonatomic) NSString *packageAssetID;
@property (readonly, nonatomic) FCNewsTabiRecipeTagSuggestionsConfiguration *configuration;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
