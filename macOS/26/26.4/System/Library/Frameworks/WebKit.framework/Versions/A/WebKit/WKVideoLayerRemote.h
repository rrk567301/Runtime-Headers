@class CAContext;

@interface WKVideoLayerRemote : CALayer {
    struct ThreadSafeWeakPtr<WebKit::VideoLayerRemoteParent, WTF::NoTaggingTraits<WebKit::VideoLayerRemoteParent>> { struct TaggedPtr<WebKit::VideoLayerRemoteParent, WTF::NoTaggingTraits<WebKit::VideoLayerRemoteParent>> { unsigned long long m_ptr; } m_objectOfCorrectType; struct RefPtr<WTF::ThreadSafeWeakPtrControlBlock, WTF::RawPtrTraits<WTF::ThreadSafeWeakPtrControlBlock>, WTF::ThreadSafeWeakPtrControlBlockRefDerefTraits> { struct ThreadSafeWeakPtrControlBlock *m_ptr; } m_controlBlock; } _parent;
    struct RetainPtr<CAContext> { CAContext *m_ptr; } _context;
    unsigned char _videoGravity;
    struct unique_ptr<WebCore::Timer, std::default_delete<WebCore::Timer>> { struct { struct Timer *__ptr_; } ; } _resolveBoundsTimer;
    BOOL _shouldRestartWhenTimerFires;
    struct Seconds { double m_value; } _delay;
}

@property (nonatomic) struct RefPtr<WebKit::VideoLayerRemoteParent, WTF::RawPtrTraits<WebKit::VideoLayerRemoteParent>, WTF::DefaultRefDerefTraits<WebKit::VideoLayerRemoteParent>> { struct VideoLayerRemoteParent *x0; } parent;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } videoLayerFrame;
@property (nonatomic) unsigned char videoGravity;

- (void)layoutSublayers;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (void)dealloc;
- (void)resolveBounds;
- (BOOL)resizePreservingGravity;

@end
