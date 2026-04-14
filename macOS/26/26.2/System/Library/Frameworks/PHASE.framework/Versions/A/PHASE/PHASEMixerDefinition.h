@class PHASENumberMetaParameterDefinition;

@interface PHASEMixerDefinition : PHASEDefinition

@property (nonatomic) double gain;
@property (retain, nonatomic) PHASENumberMetaParameterDefinition *gainMetaParameterDefinition;

+ (id)new;

- (void).cxx_destruct;
- (id)init;
- (id)initInternal;

@end
