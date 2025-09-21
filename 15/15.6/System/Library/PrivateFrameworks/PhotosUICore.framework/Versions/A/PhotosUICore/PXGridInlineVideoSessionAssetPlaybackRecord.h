@class NSString, PXGSpriteReference, PXVideoSession, NSObject;
@protocol OS_dispatch_queue;

@interface PXGridInlineVideoSessionAssetPlaybackRecord : PXGridInlinePlaybackRecord <PXChangeObserver, PXGDisplayAssetPixelBufferSource> {
    NSString *_bufferRequestIdentifier;
    char _playLivePhotosWithSettlingEffectIfPossible;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _ivarLock;
    PXVideoSession *_videoSession;
    struct __CVBuffer { } *_currentPixelBuffer;
    long long _desiredPlayState;
}

@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *videoSessionQueue;

@property (retain) PXVideoSession *videoSession;
@property (readonly, nonatomic) PXGSpriteReference *geometryReference;
@property (readonly, nonatomic) NSString *videoStatusDescription;
@property (nonatomic) char discardVideoOnPause;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) struct __CVBuffer { } *currentPixelBuffer;
@property (readonly, nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } preferredTransform;
@property (copy, nonatomic) id /* block */ pixelBufferDidChangeHandler;
@property (copy, nonatomic) id /* block */ providePlaceholderHandler;

- (void)dealloc;
- (void).cxx_destruct;
- (char)isPlaying;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_configureVideoSession:(id)a0;
- (void)_setCurrentPixelBuffer:(struct __CVBuffer { } *)a0;
- (void)_videoQueue_ensureVideoSessionWithDesiredPlayState:(long long)a0;
- (void)_videoQueue_relinquishVideoSession;
- (void)_videoQueue_updateCurrentPixelBuffer;
- (long long)desiredPlayState;
- (id)initWithDisplayAsset:(id)a0 mediaProvider:(id)a1 spriteReference:(id)a2 playLivePhotosWithSettlingEffectIfPossible:(char)a3;
- (void)prepareForInvisible;
- (void)prepareForVisible;
- (void)setDesiredPlayState:(long long)a0;

@end
