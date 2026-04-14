@class NSString, FCNewsTabiRecipeScoringConfiguration;

@interface FCNewsTabiRecipeScoringEndpoint : NSObject

@property (readonly, nonatomic) NSString *packageAssetID;
@property (readonly, nonatomic) FCNewsTabiRecipeScoringConfiguration *configuration;

- (id)description;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
