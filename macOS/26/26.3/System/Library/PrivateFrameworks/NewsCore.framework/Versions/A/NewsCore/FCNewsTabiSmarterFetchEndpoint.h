@class NSString, FCNewsTabiSmarterFetchConfiguration;

@interface FCNewsTabiSmarterFetchEndpoint : NSObject

@property (readonly, nonatomic) NSString *packageAssetID;
@property (readonly, nonatomic) FCNewsTabiSmarterFetchConfiguration *configuration;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
