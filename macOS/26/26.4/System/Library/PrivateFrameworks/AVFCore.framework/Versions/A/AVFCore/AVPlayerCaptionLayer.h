@class AVPlayer, AVCaptionInsetsOptions, AVPlayerLayerSubtitlePreviewHelper, CALayer, FigSubtitleCALayer, NSSet, NSObject, AVPlayerLayerIntermediateLayer;
@protocol OS_dispatch_queue;

@interface AVPlayerCaptionLayer : CALayer {
    FigSubtitleCALayer *_subtitleLayer;
    AVPlayerLayerIntermediateLayer *_closedCaptionLayer;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_configurationQueue;
    AVPlayer *_player;
    AVPlayerCaptionLayer *_interstitialLayer;
    BOOL _showInterstitialInstead;
    CALayer *_subtitlePreviewLayer;
    AVPlayerLayerSubtitlePreviewHelper *_subtitlePreviewHelper;
    struct CGPoint { double x; double y; } _captionPreviewPosition;
    AVPlayer *_playerBeingObserved;
    NSSet *_KVOInvokers;
    struct NSEdgeInsets { double top; double left; double bottom; double right; } _legibleContentInsets;
}

@property (nonatomic) struct CGPoint { double x; double y; } _captionPreviewPosition;
@property (retain, nonatomic) AVPlayer *player;
@property (nonatomic) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } captionContentInsets;
@property (nonatomic, getter=isOverscanSubtitleSupportEnabled) BOOL overscanSubtitleSupportEnabled;
@property (copy, nonatomic) AVCaptionInsetsOptions *insetsOptions;

+ (id)captionLayerWithPlayer:(id)a0;

- (void)layoutSublayers;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)init;
- (void)setValue:(id)a0 forKeyPath:(id)a1;
- (void)dealloc;
- (id)_closedCaptionLayer;
- (void)_ensureSubtitlePreviewLayer;
- (id)_interstitialLayer;
- (void)_setCaptionPreviewPosition:(struct CGPoint { double x0; double x1; })a0;
- (void)_setShowInterstitialInstead:(BOOL)a0;
- (BOOL)_showInterstitialInstead;
- (void)_startObservingPlayer:(id)a0;
- (void)_stopObservingPlayer:(id)a0;
- (id)_subtitleLayer;
- (void)_updateSubtitlePreviewLayerImage;
- (void)setCaptionPreviewProfileID:(id)a0 position:(struct CGPoint { double x0; double x1; })a1 text:(id)a2;
- (void)stopShowingCaptionPreview;

@end
