@interface QCSCN_CARendererRegistry : NSObject {
    struct __CFDictionary { } *_registry;
}

+ (id)sharedRegistry;

- (void)finalize;
- (void)dealloc;
- (id)init;
- (void)rendererDidChange:(id)a0;
- (id)CARendererForCGLContextObj:(void *)a0 layer:(id)a1;
- (void)removeCARenderersForCGLContextObj:(void *)a0;
- (void)removeCARenderersForLayer:(id)a0;

@end
