@class NSString, FCNewsTabiMyMagazinesConfiguration, FCNewsTabiEventAggregationOutputsConfiguration;

@interface FCNewsTabiMyMagazinesEndpoint : NSObject

@property (retain, nonatomic) NSString *packageAssetID;
@property (retain, nonatomic) FCNewsTabiMyMagazinesConfiguration *configuration;
@property (retain, nonatomic) FCNewsTabiEventAggregationOutputsConfiguration *eventAggregationOutputs;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (id)init;

@end
