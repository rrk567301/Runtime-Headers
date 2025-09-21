@class NSString, FCNewsTabiSmarterFetchConfiguration;

@interface FCNewsTabiSmarterFetchEndpoint : NSObject

@property (readonly, nonatomic) NSString *packageAssetID;
@property (readonly, nonatomic) FCNewsTabiSmarterFetchConfiguration *configuration;

- (id)initWithDictionary:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
