@class NSString, FCNewsTabiRecipeScoringConfiguration;

@interface FCNewsTabiRecipeScoringEndpoint : NSObject

@property (readonly, nonatomic) NSString *packageAssetID;
@property (readonly, nonatomic) FCNewsTabiRecipeScoringConfiguration *configuration;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (id)init;

@end
