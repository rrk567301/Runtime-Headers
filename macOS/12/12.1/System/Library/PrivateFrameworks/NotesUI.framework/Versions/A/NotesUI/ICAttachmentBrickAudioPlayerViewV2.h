@class ICArcLayer, ICCircleLayer;
@protocol ICAttachmentBrickAudioPlayerViewV2Delegate;

@interface ICAttachmentBrickAudioPlayerViewV2 : ICAudioPlayPauseView

@property (retain, nonatomic) ICCircleLayer *progressGrooveLayer;
@property (retain, nonatomic) ICArcLayer *progressCircleLayer;
@property (nonatomic, getter=isAudioPlayingDisabled) BOOL audioPlayingDisabled;
@property (nonatomic) id<ICAttachmentBrickAudioPlayerViewV2Delegate> delegate;

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)viewDidChangeBackingProperties;
- (void)hostViewDidZoom:(id)a0;
- (void)sharedInit;
- (void)createBackgroundLayer;
- (void)createPlayPauseViews;
- (void)showStopped;
- (id)addSubImageViewForImage:(id)a0;
- (void)showPressed:(BOOL)a0;
- (void)updateTime:(double)a0 duration:(double)a1;
- (void)createProgressLayers;
- (id)backgroundNormalColor;
- (id)backgroundPressedColor;
- (void)showDisabled:(BOOL)a0;

@end
