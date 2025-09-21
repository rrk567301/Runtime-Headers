@class NSString, NSDictionary, CALayer, AVPlayerController, WebAVPlayerController;

@interface WebAVPlayerLayer : CALayer {
    struct ThreadSafeWeakPtr<WebCore::VideoPresentationModel, WTF::NoTaggingTraits<WebCore::VideoPresentationModel>> { struct TaggedPtr<WebCore::VideoPresentationModel, WTF::NoTaggingTraits<WebCore::VideoPresentationModel>> { unsigned long long m_ptr; } m_objectOfCorrectType; struct RefPtr<WTF::ThreadSafeWeakPtrControlBlock, WTF::RawPtrTraits<WTF::ThreadSafeWeakPtrControlBlock>, WTF::ThreadSafeWeakPtrControlBlockRefDerefTraits> { struct ThreadSafeWeakPtrControlBlock *m_ptr; } m_controlBlock; } _presentationModel;
    struct RetainPtr<WebAVPlayerController> { WebAVPlayerController *m_ptr; } _playerController;
    struct RetainPtr<CALayer> { CALayer *m_ptr; } _videoSublayer;
    struct RetainPtr<CALayer> { CALayer *m_ptr; } _captionsLayer;
    struct FloatRect { struct FloatPoint { float m_x; float m_y; } m_location; struct FloatSize { float m_width; float m_height; } m_size; } _targetVideoFrame;
    struct CGSize { double width; double height; } _videoDimensions;
    struct RetainPtr<NSString> { NSString *m_ptr; } _videoGravity;
    struct RetainPtr<NSString> { NSString *m_ptr; } _previousVideoGravity;
    struct unique_ptr<WebCore::WebAVPlayerLayerPresentationModelClient, std::default_delete<WebCore::WebAVPlayerLayerPresentationModelClient>> { struct WebAVPlayerLayerPresentationModelClient *__ptr_; } _presentationModelClient;
    struct NSEdgeInsets { double top; double left; double bottom; double right; } _legibleContentInsets;
    unsigned long long _logIdentifier;
}

@property (readonly, nonatomic) unsigned long long logIdentifier;
@property (readonly, nonatomic) const void *loggerPtr;
@property (readonly, nonatomic) struct { unsigned char x0; char *x1; unsigned char x2; char *x3; id x4; } *logChannel;
@property (retain, nonatomic) NSString *videoGravity;
@property (nonatomic, getter=isReadyForDisplay) BOOL readyForDisplay;
@property (nonatomic) void *presentationModel;
@property (retain, nonatomic) AVPlayerController *playerController;
@property (retain, nonatomic) CALayer *videoSublayer;
@property (retain, nonatomic) CALayer *captionsLayer;
@property (copy, nonatomic) NSDictionary *pixelBufferAttributes;
@property struct CGSize { double x0; double x1; } videoDimensions;
@property (nonatomic) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } legibleContentInsets;

+ (id)keyPathsForValuesAffectingVideoRect;

- (void)dealloc;
- (void)layoutSublayers;
- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })videoRect;
- (struct FloatRect { struct FloatPoint { float x0; float x1; } x0; struct FloatSize { float x0; float x1; } x1; })calculateTargetVideoFrame;
- (void)resolveBounds;

@end
