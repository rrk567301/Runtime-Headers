@interface NUPlatform_Mac : NUPlatform

- (id)init;
- (id)displays;
- (id)mainDisplay;
- (BOOL)supportsANE;
- (BOOL)defaultSupportsLiveVideoRendering;
- (id)deviceForDisplay:(id)a0;
- (id)deviceForDisplayID:(unsigned int)a0;
- (id)mainDevice;

@end
