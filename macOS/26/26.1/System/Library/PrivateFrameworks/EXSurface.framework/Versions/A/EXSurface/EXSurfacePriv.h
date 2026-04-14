@interface EXSurfacePriv : _EXSurfacePriv {
    struct __IOSurface { } *_ioSurface;
}

- (unsigned long long)surfaceID;
- (int)useCount;
- (id)initWithDescriptor:(id)a0;
- (void)dealloc;
- (BOOL)isInUse;
- (void)decrementUseCount;
- (void)incrementUseCount;
- (unsigned long long)allocSize;

@end
