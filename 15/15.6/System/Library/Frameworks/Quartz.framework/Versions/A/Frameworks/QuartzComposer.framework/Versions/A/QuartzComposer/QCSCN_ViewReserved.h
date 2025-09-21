@class NSTimer, QCSCN_Renderer, NSRecursiveLock, NSOpenGLPixelFormat, QCSCN_LoadingLayer, NSOperationQueue, QCSCN_EventHandler, QCSCN_Scene, NSColor, NSOpenGLContext;

@interface QCSCN_ViewReserved : NSObject {
    NSOpenGLContext *_openGLContext;
    NSOpenGLPixelFormat *_pixelFormat;
    struct __CVDisplayLink { } *_displayLink;
    char _displayLinkRunning;
    unsigned int _mainViewDisplayID;
    NSTimer *_timer;
    char _repetitiveRedisplayRunning;
    char _allowsBrowsing;
    char _enableJittering;
    char _jitteringSupported;
    char _jitteringIsComplete;
    char _abortJittering;
    char _jitteringThreadRunning;
    char _restartJittering;
    NSRecursiveLock *_jitteringLock;
    char _clearViewportWhenDrawing;
    QCSCN_LoadingLayer *_loadingLayer;
    char _asynchronousLoading;
    NSOperationQueue *_loadingQueue;
    id _delegate;
    QCSCN_Renderer *_renderer;
    QCSCN_EventHandler *_eventHandler;
    QCSCN_Scene *_scene;
    NSRecursiveLock *_lock;
    NSRecursiveLock *_glContextLock;
    char _ibNoMultisampling;
    NSColor *_backgroundColor;
    char _isOpaque;
    char _firstDrawDone;
}

@property char dirty;

- (void)dealloc;

@end
