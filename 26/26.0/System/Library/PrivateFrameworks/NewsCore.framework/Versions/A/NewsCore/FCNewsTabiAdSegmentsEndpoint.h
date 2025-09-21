@class NSString, FCNewsTabiEventAggregationOutputsConfiguration;

@interface FCNewsTabiAdSegmentsEndpoint : NSObject

@property (readonly, nonatomic) NSString *packageAssetID;
@property (readonly, copy, nonatomic) NSString *adSegmentsOutputName;
@property (readonly, nonatomic) FCNewsTabiEventAggregationOutputsConfiguration *eventAggregationOutputs;

- (id)initWithDictionary:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
