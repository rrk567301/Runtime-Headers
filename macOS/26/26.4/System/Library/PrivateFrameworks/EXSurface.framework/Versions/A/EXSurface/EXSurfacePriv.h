@interface EXSurfacePriv : _EXSurfacePriv {
    struct __IOSurface { } *_ioSurface;
}

- (int)useCount;
- (unsigned long long)surfaceID;
- (id)initWithDescriptor:(id)a0;
- (BOOL)isInUse;
- (void)dealloc;
- (void)decrementUseCount;
- (void)incrementUseCount;
- (unsigned long long)allocSize;

@end
