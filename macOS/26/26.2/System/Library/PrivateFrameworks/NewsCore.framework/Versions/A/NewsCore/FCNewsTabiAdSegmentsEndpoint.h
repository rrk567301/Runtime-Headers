@class NSString, FCNewsTabiEventAggregationOutputsConfiguration;

@interface FCNewsTabiAdSegmentsEndpoint : NSObject

@property (readonly, nonatomic) NSString *packageAssetID;
@property (readonly, copy, nonatomic) NSString *adSegmentsOutputName;
@property (readonly, nonatomic) FCNewsTabiEventAggregationOutputsConfiguration *eventAggregationOutputs;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (id)init;

@end
