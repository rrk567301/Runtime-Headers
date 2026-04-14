@class QCCGLContext, QCPixelFormat, QCImageBuffer;

@interface QCImageBuffer_GCCacheResource : QCResource {
    QCImageBuffer *_buffer;
    void *_refBuffer;
    QCCGLContext *_refContext;
    QCPixelFormat *_format;
    void *_backing;
    void *_backingInfo;
}

- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (BOOL)purgeable;
- (BOOL)setPurgeable:(BOOL)a0;
- (void)setResourcePool:(id)a0;
- (void)cacheRelease:(id)a0;
- (id)cacheRetain:(id)a0;
- (id)initWithImageBuffer:(id)a0;
- (void)removeFromAllCachesExcept:(id)a0;
- (BOOL)didRecycleResource:(id)a0;
- (unsigned long long)cacheRetainCount;
- (void)willRecycleResource:(id)a0;
- (void *)backingReleaseInfo;
- (void /* function */ *)backingReleaseCallback;

@end
