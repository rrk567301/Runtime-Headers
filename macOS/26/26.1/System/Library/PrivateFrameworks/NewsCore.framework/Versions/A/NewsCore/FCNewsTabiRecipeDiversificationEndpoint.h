@class NSString, FCNewsTabiRecipeDiversificationConfiguration;

@interface FCNewsTabiRecipeDiversificationEndpoint : NSObject

@property (readonly, nonatomic) NSString *packageAssetID;
@property (readonly, nonatomic) FCNewsTabiRecipeDiversificationConfiguration *configuration;

- (id)description;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
