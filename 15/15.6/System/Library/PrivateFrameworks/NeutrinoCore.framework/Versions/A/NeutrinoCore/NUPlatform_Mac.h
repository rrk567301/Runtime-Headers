@interface NUPlatform_Mac : NUPlatform

- (id)init;
- (id)displays;
- (id)mainDisplay;
- (char)supportsANE;
- (char)defaultSupportsLiveVideoRendering;
- (id)deviceForDisplay:(id)a0;
- (id)deviceForDisplayID:(unsigned int)a0;
- (char)hasDiscreteGPU;
- (id)mainDevice;

@end
