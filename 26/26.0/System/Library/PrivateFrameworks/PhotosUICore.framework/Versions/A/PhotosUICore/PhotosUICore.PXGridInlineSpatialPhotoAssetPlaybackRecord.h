@interface PhotosUICore.PXGridInlineSpatialPhotoAssetPlaybackRecord : PXGridInlinePlaybackRecord <PXGDisplayAssetPixelBufferSource> {
    void /* function */ pixelBufferDidChangeHandler;
    void /* function */ providePlaceholderHandler;
    void /* unknown type, empty encoding */ spriteSize;
    void /* unknown type, empty encoding */ displayScale;
    void /* unknown type, empty encoding */ _currentPixelBuffer;
    void /* unknown type, empty encoding */ _desiredPlayState;
    void /* unknown type, empty encoding */ playbackQueue_player;
    void /* unknown type, empty encoding */ playbackQueue_scene;
    void /* unknown type, empty encoding */ playbackQueue_isLoadingScene;
    void /* unknown type, empty encoding */ playbackQueue_generationTask;
}

@property (nonatomic) long long desiredPlayState;
@property (nonatomic, readonly) BOOL isPlaying;
@property (nonatomic, retain) struct __CVBuffer { } *currentPixelBuffer;
@property (nonatomic, readonly) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } preferredTransform;
@property (nonatomic, readonly) double suppressContentsRect;
@property (nonatomic, copy) id /* block */ pixelBufferDidChangeHandler;
@property (nonatomic, copy) id /* block */ providePlaceholderHandler;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDisplayAsset:(id)a0 mediaProvider:(id)a1 geometryReference:(id)a2;
- (id)initWithDisplayAsset:(id)a0 mediaProvider:(id)a1 geometryReference:(id)a2 spriteSize:(struct CGSize { double x0; double x1; })a3 displayScale:(double)a4;
- (void)prepareForInvisible;
- (void)prepareForVisible;

@end
