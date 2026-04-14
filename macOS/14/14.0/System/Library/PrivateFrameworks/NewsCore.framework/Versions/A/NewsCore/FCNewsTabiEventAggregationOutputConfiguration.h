@class NSArray, NSDictionary;

@interface FCNewsTabiEventAggregationOutputConfiguration : NSObject

@property (retain, nonatomic) NSArray *outputNames;
@property (readonly, nonatomic) NSDictionary *dictionary;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)initWithOutputNames:(id)a0;

@end
