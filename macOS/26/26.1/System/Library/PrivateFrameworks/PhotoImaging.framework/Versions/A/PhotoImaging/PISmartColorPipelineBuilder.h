@class NUIdentifier;

@interface PISmartColorPipelineBuilder : NSObject <NUPipelineBuilder>

@property (readonly, nonatomic) NUIdentifier *identifier;

- (BOOL)buildPipeline:(id)a0 error:(out id *)a1;
- (id)_buildPipeline:(id)a0 input:(id)a1 adjustment:(id)a2 error:(out id *)a3;

@end
