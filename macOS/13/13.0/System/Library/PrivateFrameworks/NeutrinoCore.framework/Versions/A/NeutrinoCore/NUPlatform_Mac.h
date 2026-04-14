@interface NUPlatform_Mac : NUPlatform

- (id)init;
- (id)displays;
- (id)mainDisplay;
- (BOOL)supportsANE;
- (id)mainDevice;
- (id)deviceForDisplay:(id)a0;
- (BOOL)defaultSupportsLiveVideoRendering;
- (id)deviceForDisplayID:(unsigned int)a0;

@end
