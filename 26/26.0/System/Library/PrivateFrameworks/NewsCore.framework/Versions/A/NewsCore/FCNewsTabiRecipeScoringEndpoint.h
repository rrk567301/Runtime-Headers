@class NSString, FCNewsTabiRecipeScoringConfiguration;

@interface FCNewsTabiRecipeScoringEndpoint : NSObject

@property (readonly, nonatomic) NSString *packageAssetID;
@property (readonly, nonatomic) FCNewsTabiRecipeScoringConfiguration *configuration;

- (id)initWithDictionary:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
