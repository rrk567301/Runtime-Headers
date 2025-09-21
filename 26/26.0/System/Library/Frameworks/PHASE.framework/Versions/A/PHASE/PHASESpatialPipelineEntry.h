@class NSMutableDictionary, PHASENumberMetaParameterDefinition;

@interface PHASESpatialPipelineEntry : NSObject

@property (retain, nonatomic) NSMutableDictionary *tweakParams;
@property (nonatomic) double sendLevel;
@property (retain, nonatomic) PHASENumberMetaParameterDefinition *sendLevelMetaParameterDefinition;

- (id)init;
- (void).cxx_destruct;
- (void)setTweakParameterWithMetaParameterDefinition:(id)a0 identifier:(id)a1;
- (void)setTweakParameterWithValue:(double)a0 identifier:(id)a1;

@end
