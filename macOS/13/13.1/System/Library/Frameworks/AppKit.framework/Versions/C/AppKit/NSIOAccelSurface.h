@class NSIOSurfacePool, NSMapTable;

@interface NSIOAccelSurface : NSObject {
    unsigned long long _registryID;
    unsigned int _surfaceID;
    struct _CGLContextObject { } *_context;
    unsigned int _format;
    unsigned int _type;
    int _width;
    int _height;
    unsigned int _fbo;
    unsigned int _sourceTexture;
    NSMapTable *_destinationTextures;
    NSIOSurfacePool *_surfacePool;
}

@property (readonly) unsigned long long GPURegistryID;
@property (readonly) unsigned int surfaceID;

- (void)dealloc;
- (id)initWithGPURegistryID:(unsigned long long)a0 surfaceID:(unsigned int)a1;
- (id)frontBuffer;

@end
