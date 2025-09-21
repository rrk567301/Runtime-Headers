@interface IOSurfaceMemoryPool : NSObject {
    unsigned long long _poolId;
    unsigned int _poolPort;
}

@property (readonly) unsigned long long poolId;

- (int)flush:(id)a0;
- (id)initWithProperties:(id)a0;
- (void)dealloc;
- (int)ensureMemory:(id)a0;
- (id)copyDebugInfo;

@end
