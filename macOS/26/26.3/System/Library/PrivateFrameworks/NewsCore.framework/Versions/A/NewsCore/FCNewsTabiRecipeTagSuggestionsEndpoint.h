@class NSString, FCNewsTabiRecipeTagSuggestionsConfiguration;

@interface FCNewsTabiRecipeTagSuggestionsEndpoint : NSObject

@property (readonly, nonatomic) NSString *packageAssetID;
@property (readonly, nonatomic) FCNewsTabiRecipeTagSuggestionsConfiguration *configuration;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
