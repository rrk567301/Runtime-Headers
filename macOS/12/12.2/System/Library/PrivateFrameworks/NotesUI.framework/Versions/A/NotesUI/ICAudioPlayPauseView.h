@class AVAsset, ICNoteEditorIconImageView, ICMZoomController, CALayer, NSString, ICAttachment;

@interface ICAudioPlayPauseView : NSView <ICMZoomableAttachmentView>

@property (retain, nonatomic) CALayer *backgroundLayer;
@property (retain, nonatomic) ICNoteEditorIconImageView *playView;
@property (retain, nonatomic) ICNoteEditorIconImageView *pauseView;
@property (readonly, nonatomic) AVAsset *audio;
@property (retain, nonatomic) ICAttachment *audioAttachment;
@property (readonly, nonatomic) BOOL isPlaying;
@property (retain, nonatomic) ICMZoomController *zoomController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)pause;
- (BOOL)isOpaque;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })fittingSize;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)mouseDown:(id)a0;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void)play;
- (void)mouseDragged:(id)a0;
- (void)mouseUp:(id)a0;
- (void)viewDidChangeBackingProperties;
- (void)togglePlayPause;
- (void)hostViewDidZoom:(id)a0;
- (void)sharedInit;
- (void)audioWillChange;
- (void)audioDidChange;
- (void)createBackgroundLayer;
- (void)createPlayPauseViews;
- (void)showStopped;
- (void)clickGesture:(id)a0;
- (void)didPlayToEndNotification:(id)a0;
- (id)addSubImageViewForImage:(id)a0;
- (void)showPressed:(BOOL)a0;
- (void)showPlaying;
- (void)showPaused;
- (void)audioPlaybackPlayNotification:(id)a0;
- (void)audioPlaybackPauseNotification:(id)a0;
- (void)audioPlaybackStopNotification:(id)a0;
- (void)audioPlaybackTimeChangedNotification:(id)a0;
- (void)updateTime:(double)a0 duration:(double)a1;
- (void)setImageNamed:(id)a0 onLayer:(id)a1 adjustLayerSize:(BOOL)a2;
- (id)foregroundStrokeColor;

@end
