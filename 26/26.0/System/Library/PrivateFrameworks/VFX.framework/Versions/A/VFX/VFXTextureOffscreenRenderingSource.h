@interface VFXTextureOffscreenRenderingSource : VFXTextureSource {
    BOOL _usesIOSurface;
    struct CGSize { double width; double height; } _framebufferSize;
}

- (void /* unknown type, empty encoding */)textureSize;
- (void)_buildMipmaps:(struct __CFXEngineContext { } *)a0;

@end
