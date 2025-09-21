@class NURenderNode;

@interface PIPortraitNode : NURenderNode

@property (readonly, nonatomic) NURenderNode *input;
@property (readonly, nonatomic) NURenderNode *blurMap;

+ (id)vectorWithFloats:(id)a0;
+ (char)isPortraitMonoEffect:(id)a0;
+ (char)isPortraitStageEffect:(id)a0;

- (id)uniqueInputNode;
- (id)_evaluateImageProperties:(out id *)a0;
- (char)canPropagateOriginalAuxiliaryData:(long long)a0;
- (char)shouldDisableGainMap;

@end
