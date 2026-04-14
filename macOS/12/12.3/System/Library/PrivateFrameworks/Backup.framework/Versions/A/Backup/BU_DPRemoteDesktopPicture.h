@class NSObject, CALayerHost;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface BU_DPRemoteDesktopPicture : NSObject {
    struct TRef<NSObject<OS_xpc_object> *, TRetainReleasePolicy<xpc_object_t>> { NSObject<OS_xpc_object> *fRef; } _connection;
    struct TRef<NSObject<OS_dispatch_queue> *, TRetainReleasePolicy<dispatch_queue_t>> { NSObject<OS_dispatch_queue> *fRef; } _queue;
    unsigned int _displayID;
    unsigned int _context;
}

@property (retain, nonatomic) CALayerHost *desktopPictureLayer;

+ (void)queue:(id)a0 remoteDesktopPictureForDisplay:(unsigned int)a1 callback:(struct function<void (BU_DPRemoteDesktopPicture *)> { struct __value_func<void (BU_DPRemoteDesktopPicture *)> { struct type { unsigned char x0[24]; } x0; void *x1; } x0; })a2;

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)finishHostLayerSetup;
- (void)fetchForDisplay:(unsigned int)a0 queue:(id)a1 andCallback:(struct function<void (BU_DPRemoteDesktopPicture *)> { struct __value_func<void (BU_DPRemoteDesktopPicture *)> { struct type { unsigned char x0[24]; } x0; void *x1; } x0; })a2;

@end
