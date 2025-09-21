@class NSString;

@interface GRLResourceGroupObserver : NSObject <GEOResourceManifestTileGroupObserver> {
    void *_resourceProvider;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _resourceProviderLock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithResourceProvider:(void *)a0;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)a0;
- (void)clearProvider;
- (id).cxx_construct;
- (void).cxx_destruct;

@end
