@class CASpatialAudioExperience;

@interface AVAudioOutputNode : AVAudioIONode

@property (copy) CASpatialAudioExperience *intendedSpatialExperience;

- (id)manualRenderingFormat;
- (BOOL)setManualRenderingPCMFormat:(id)a0 maximumFrameCount:(unsigned int)a1;
- (unsigned int)manualRenderingMaximumFrameCount;

@end
