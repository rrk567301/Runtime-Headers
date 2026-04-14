@interface EXSurfacePriv : _EXSurfacePriv {
    struct __IOSurface { } *_ioSurface;
}

- (id)initWithDescriptor:(id)a0;
- (BOOL)isInUse;
- (int)useCount;
- (unsigned long long)surfaceID;
- (void)dealloc;
- (void)decrementUseCount;
- (void)incrementUseCount;
- (unsigned long long)allocSize;

@end
