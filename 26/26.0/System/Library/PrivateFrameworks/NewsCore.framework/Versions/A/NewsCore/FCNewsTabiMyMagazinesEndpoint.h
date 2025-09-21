@class NSString, FCNewsTabiMyMagazinesConfiguration, FCNewsTabiEventAggregationOutputsConfiguration;

@interface FCNewsTabiMyMagazinesEndpoint : NSObject

@property (retain, nonatomic) NSString *packageAssetID;
@property (retain, nonatomic) FCNewsTabiMyMagazinesConfiguration *configuration;
@property (retain, nonatomic) FCNewsTabiEventAggregationOutputsConfiguration *eventAggregationOutputs;

- (id)initWithDictionary:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
