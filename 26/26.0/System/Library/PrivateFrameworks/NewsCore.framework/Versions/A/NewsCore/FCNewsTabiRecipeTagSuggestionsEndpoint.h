@class NSString, FCNewsTabiRecipeTagSuggestionsConfiguration;

@interface FCNewsTabiRecipeTagSuggestionsEndpoint : NSObject

@property (readonly, nonatomic) NSString *packageAssetID;
@property (readonly, nonatomic) FCNewsTabiRecipeTagSuggestionsConfiguration *configuration;

- (id)initWithDictionary:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
