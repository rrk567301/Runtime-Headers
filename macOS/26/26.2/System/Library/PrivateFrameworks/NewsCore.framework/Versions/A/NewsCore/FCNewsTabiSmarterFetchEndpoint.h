@class NSString, FCNewsTabiSmarterFetchConfiguration;

@interface FCNewsTabiSmarterFetchEndpoint : NSObject

@property (readonly, nonatomic) NSString *packageAssetID;
@property (readonly, nonatomic) FCNewsTabiSmarterFetchConfiguration *configuration;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (id)init;

@end
