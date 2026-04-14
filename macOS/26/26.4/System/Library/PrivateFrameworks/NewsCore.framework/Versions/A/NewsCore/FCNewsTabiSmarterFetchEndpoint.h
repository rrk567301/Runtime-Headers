@class NSString, FCNewsTabiSmarterFetchConfiguration;

@interface FCNewsTabiSmarterFetchEndpoint : NSObject

@property (readonly, nonatomic) NSString *packageAssetID;
@property (readonly, nonatomic) FCNewsTabiSmarterFetchConfiguration *configuration;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
