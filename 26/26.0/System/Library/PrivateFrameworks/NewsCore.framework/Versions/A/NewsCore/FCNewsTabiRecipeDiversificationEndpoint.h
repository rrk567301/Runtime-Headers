@class NSString, FCNewsTabiRecipeDiversificationConfiguration;

@interface FCNewsTabiRecipeDiversificationEndpoint : NSObject

@property (readonly, nonatomic) NSString *packageAssetID;
@property (readonly, nonatomic) FCNewsTabiRecipeDiversificationConfiguration *configuration;

- (id)initWithDictionary:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
