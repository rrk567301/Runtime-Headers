@class NSMutableDictionary, PHASENumberMetaParameterDefinition;

@interface PHASESpatialPipelineEntry : NSObject

@property (retain, nonatomic) NSMutableDictionary *tweakParams;
@property (nonatomic) double sendLevel;
@property (retain, nonatomic) PHASENumberMetaParameterDefinition *sendLevelMetaParameterDefinition;

- (void).cxx_destruct;
- (id)init;
- (void)setTweakParameterWithMetaParameterDefinition:(id)a0 identifier:(id)a1;
- (void)setTweakParameterWithValue:(double)a0 identifier:(id)a1;

@end
