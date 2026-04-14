@class NSWindow, QCImageManager, QCCLContext, NSMutableDictionary, QCCache, QCSourceCodeView, QCCGLContext;

@interface QCStreamManager : NSObject {
    id *_rootCache;
    QCCache *_representationCache;
    QCCache *_providerCache;
    id *_rootPool;
    QCImageManager *_imageManager;
    unsigned long long _deviceCount;
    unsigned long long *_deviceSizes;
    struct _cl_device_id **_devices;
    struct _cl_device_id **_virtualScreenCache;
    unsigned long long *_deviceTypes;
    NSMutableDictionary *_exporterClassCache;
    NSMutableDictionary *_exporterTypeCache;
    NSMutableDictionary *_exportersList;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _exporterCacheMutex;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _exportersListMutex;
    struct _opaque_pthread_cond_t { long long __sig; char __opaque[40]; } _exportersListCondition;
    unsigned long long _exporterCacheTimestamp;
    NSWindow *_sourceWindow;
    QCSourceCodeView *_sourceView;
    unsigned long long _flags;
    void *unused[4];
}

@property (readonly) QCCLContext *openCLContext;
@property (readonly) QCCGLContext *openGLContext;
@property (readonly) struct _cl_context { } *context;
@property (readonly) struct _cl_device_id { } *bestDevice;
@property BOOL disableGPUDevice;

+ (void)initialize;
+ (BOOL)isUsingOpenCL;
+ (id)copySharedManager;
+ (id)copyManagerWithOpenGLContext:(id)a0;
+ (id)copyManagerWithImageManager:(id)a0;

- (void)dealloc;
- (id)init;
- (void)finalize;
- (void)reclaimResources;
- (void)purgeResources;
- (id)_QCOpenGLContextForCurrentThread;
- (BOOL)_initializeContext;
- (void)_finalizeContext;
- (void)_releaseContext;
- (void)_releaseStreamManagerCache;
- (id)initWithOpenGLContext:(id)a0;
- (id)_cacheForDevice:(struct _cl_device_id { } *)a0;
- (id)_poolForDevice:(struct _cl_device_id { } *)a0;
- (void)_finalize_QCStreamManager;
- (id)createStreamWithSource:(id)a0 options:(id)a1;
- (id)_createArrayMemObjectFromMemObject:(id)a0 withCount:(unsigned long long)a1 elementSize:(unsigned long long)a2 type:(int)a3 attachToOpenGL:(BOOL)a4 options:(id)a5;
- (id)createArrayMemObjectFromProvider:(id)a0 withCount:(unsigned long long)a1 elementSize:(unsigned long long)a2 type:(int)a3 options:(id)a4;
- (id)createImage2DMemObjectFromProvider:(id)a0 withFormat:(id)a1 options:(id)a2;
- (id)createImage3DMemObjectFromProvider:(id)a0 options:(id)a1;
- (id)createRepresentationFromProvider:(id)a0 ofType:(id)a1 withCount:(unsigned long long)a2 elementSize:(unsigned long long)a3 type:(int)a4 options:(id)a5;
- (id)createArrayMemObjectWithCount:(unsigned long long)a0 elementSize:(unsigned long long)a1 type:(int)a2 attachToOpenGL:(BOOL)a3 options:(id)a4;
- (id)createImage2DMemObjectWithFormat:(id)a0 pixelsWide:(unsigned long long)a1 pixelsHigh:(unsigned long long)a2 attachToOpenGL:(BOOL)a3 options:(id)a4;
- (id)createImage3DMemObjectWithPixelsWide:(unsigned long long)a0 pixelsHigh:(unsigned long long)a1 pixelsDeep:(unsigned long long)a2 elementSize:(unsigned long long)a3 type:(int)a4 attachToOpenGL:(BOOL)a5 options:(id)a6;
- (BOOL)_useOpenGLAttachments;
- (unsigned long long)_virtualScreenForDevice:(struct _cl_device_id { } *)a0;

@end
