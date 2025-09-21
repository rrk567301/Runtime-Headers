@interface EXSurfacePriv : _EXSurfacePriv {
    struct __IOSurface { } *_ioSurface;
}

- (int)useCount;
- (id)initWithDescriptor:(id)a0;
- (void)dealloc;
- (unsigned long long)surfaceID;
- (BOOL)isInUse;
- (void)decrementUseCount;
- (void)incrementUseCount;
- (unsigned long long)allocSize;

@end
