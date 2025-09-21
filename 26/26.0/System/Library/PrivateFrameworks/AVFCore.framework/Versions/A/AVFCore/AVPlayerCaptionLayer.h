@class NSSet, FigSubtitleCALayer, AVCaptionInsetsOptions, AVPlayerLayerIntermediateLayer, NSObject, AVPlayer;
@protocol OS_dispatch_queue;

@interface AVPlayerCaptionLayer : CALayer {
    FigSubtitleCALayer *_subtitleLayer;
    AVPlayerLayerIntermediateLayer *_closedCaptionLayer;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_configurationQueue;
    AVPlayer *_player;
    AVPlayerCaptionLayer *_interstitialLayer;
    BOOL _showInterstitialInstead;
    AVPlayer *_playerBeingObserved;
    NSSet *_KVOInvokers;
    struct NSEdgeInsets { double top; double left; double bottom; double right; } _legibleContentInsets;
}

@property (retain, nonatomic) AVPlayer *player;
@property (nonatomic) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } captionContentInsets;
@property (nonatomic, getter=isOverscanSubtitleSupportEnabled) BOOL overscanSubtitleSupportEnabled;
@property (copy, nonatomic) AVCaptionInsetsOptions *insetsOptions;

+ (id)captionLayerWithPlayer:(id)a0;

- (void)dealloc;
- (void)layoutSublayers;
- (id)init;
- (void)setValue:(id)a0 forKeyPath:(id)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_closedCaptionLayer;
- (id)_interstitialLayer;
- (void)_setShowInterstitialInstead:(BOOL)a0;
- (BOOL)_showInterstitialInstead;
- (void)_startObservingPlayer:(id)a0;
- (void)_stopObservingPlayer:(id)a0;
- (id)_subtitleLayer;

@end
