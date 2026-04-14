@class NSString, FCNewsTabiEventAggregationOutputsConfiguration;

@interface FCNewsTabiAdSegmentsEndpoint : NSObject

@property (readonly, nonatomic) NSString *packageAssetID;
@property (readonly, copy, nonatomic) NSString *adSegmentsOutputName;
@property (readonly, nonatomic) FCNewsTabiEventAggregationOutputsConfiguration *eventAggregationOutputs;

- (id)description;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
