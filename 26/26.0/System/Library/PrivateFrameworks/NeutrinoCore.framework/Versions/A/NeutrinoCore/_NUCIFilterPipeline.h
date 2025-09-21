@class NSString;

@interface _NUCIFilterPipeline : _NUPipeline

@property (readonly, copy, nonatomic) NSString *filterName;

+ (id)channelFormatForFilterAttributes:(id)a0;
+ (id)pipelineWithFilterName:(id)a0 error:(out id *)a1;

- (id)initWithIdentifier:(id)a0;
- (BOOL)build:(out id *)a0;
- (void).cxx_destruct;
- (id)_evaluateOutputPort:(id)a0 context:(id)a1 error:(out id *)a2;
- (id)_genericInputPortsMatchingOutputPort:(id)a0;
- (id)_genericOutputPortsMatchingInputPort:(id)a0;
- (id)initWithFilterName:(id)a0;

@end
