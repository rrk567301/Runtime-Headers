@class NSDictionary;

@interface FedStatsPluginMaskingDataParameters : NSObject

@property (readonly, nonatomic) NSDictionary *fieldValueSets;
@property (readonly, nonatomic) unsigned long long resultCap;

+ (id)parametersWithConfiguration:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)initWithResultCap:(unsigned long long)a0 fieldValueSets:(id)a1;
- (id)maskedResultsFrom:(id)a0;
- (id)maskingData;

@end
