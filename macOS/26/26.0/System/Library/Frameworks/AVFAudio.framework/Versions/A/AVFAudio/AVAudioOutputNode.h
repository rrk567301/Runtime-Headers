@class CASpatialAudioExperience;

@interface AVAudioOutputNode : AVAudioIONode

@property (copy) CASpatialAudioExperience *intendedSpatialExperience;

- (unsigned int)manualRenderingMaximumFrameCount;
- (id)manualRenderingFormat;
- (BOOL)setManualRenderingPCMFormat:(id)a0 maximumFrameCount:(unsigned int)a1;

@end
