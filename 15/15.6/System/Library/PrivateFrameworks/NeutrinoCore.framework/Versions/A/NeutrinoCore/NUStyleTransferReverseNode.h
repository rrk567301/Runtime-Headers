@interface NUStyleTransferReverseNode : NUStyleTransferNode

+ (id)_reverseVideoConfiguration_0_10;
+ (id)_reverseImageConfiguration_0_1;
+ (id)_reverseImageConfiguration_0_1_alt;
+ (id)_reverseImageTuningParameters_0_1;
+ (id)_reverseVideoConfiguration_0_1;
+ (id)_reverseVideoConfiguration_0_10_alt;
+ (id)_reverseVideoTuningParameters_0_1;
+ (id)_reverseVideoTuningParameters_0_10;
+ (id)reverseSettingsForSemanticStyleProperties:(id)a0 size:(struct { long long x0; long long x1; })a1;

- (id)_evaluateImage:(out id *)a0;
- (id)_evaluateVideo:(out id *)a0;
- (id)uniqueInputNode;
- (id)_evaluateVideoComposition:(out id *)a0;
- (id)deltaNode;
- (id)initWithInput:(id)a0 settings:(id)a1;
- (id)inputNode;
- (id)nodeByReplayingAgainstCache:(id)a0 pipelineState:(id)a1 error:(out id *)a2;
- (char)requiresVideoComposition;
- (id)resolvedNodeWithCachedInputs:(id)a0 settings:(id)a1 pipelineState:(id)a2 error:(out id *)a3;
- (id)styleData;
- (id)thumbnailNode;

@end
