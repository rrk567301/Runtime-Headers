@class NSString, NSMapTable, NSHashTable;

@interface NSCGLSurface : NSObject <CARenderValue> {
    unsigned int _connectionID;
    unsigned int _windowID;
    unsigned int _surfaceID;
    struct _CAImageQueue { } *_imageQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id _surface;
    NSMapTable *_surfacesToImageQueueBufferIDs;
    NSHashTable *_activeImageQueueBufferIDs;
}

@property (readonly) unsigned long long surfaceID;
@property struct CGSize { double x0; double x1; } size;
@property (copy) struct CGColorSpace { } *colorSpace;
@property (readonly, getter=isOpaque) BOOL opaque;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)surfaceWithID:(unsigned long long)a0;

- (void)dealloc;
- (id)init;
- (void)synchronize;
- (void *)CA_copyRenderValue;
- (BOOL)attachCGLContext:(struct _CGLContextObject { } *)a0;
- (void)flushRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isCGLContextAttached:(struct _CGLContextObject { } *)a0;

@end
