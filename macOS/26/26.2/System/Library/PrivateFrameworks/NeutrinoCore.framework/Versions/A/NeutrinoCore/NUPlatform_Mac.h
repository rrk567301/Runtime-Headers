@interface NUPlatform_Mac : NUPlatform

- (id)displays;
- (id)mainDisplay;
- (id)init;
- (BOOL)supportsANE;
- (BOOL)defaultSupportsLiveVideoRendering;
- (id)deviceForDisplay:(id)a0;
- (id)deviceForDisplayID:(unsigned int)a0;
- (BOOL)hasDiscreteGPU;
- (id)mainDevice;

@end
