@interface AVAudioOutputNode : AVAudioIONode

- (unsigned int)manualRenderingMaximumFrameCount;
- (id)manualRenderingFormat;
- (BOOL)setManualRenderingPCMFormat:(id)a0 maximumFrameCount:(unsigned int)a1;

@end
