@interface AVAudioOutputNode : AVAudioIONode

- (id)manualRenderingFormat;
- (unsigned int)manualRenderingMaximumFrameCount;
- (char)setManualRenderingPCMFormat:(id)a0 maximumFrameCount:(unsigned int)a1;

@end
