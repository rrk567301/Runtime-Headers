@class CASpatialAudioExperience;

@interface AVAudioOutputNode : AVAudioIONode

@property (copy) CASpatialAudioExperience *intendedSpatialExperience;

- (id)manualRenderingFormat;
- (unsigned int)manualRenderingMaximumFrameCount;
- (BOOL)setManualRenderingPCMFormat:(id)a0 maximumFrameCount:(unsigned int)a1;

@end
