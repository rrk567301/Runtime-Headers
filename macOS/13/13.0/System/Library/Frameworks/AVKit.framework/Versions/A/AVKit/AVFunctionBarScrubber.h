@class NSView, NSString, NSStackView, NSColor, NSMutableArray, AVPlayerControllerTimeResolver, NSButton, AVFunctionBarScrubberController, NSLayoutConstraint;
@protocol AVFunctionBarTrackControlling, AVTimeControlling, AVFunctionBarScrubberControlling, AVFunctionBarPlaybackControlsControlling, AVFunctionBarPlaybackControlsControllingInternal, AVFunctionBarScrubberDelegate;

@interface AVFunctionBarScrubber : NSView <CAAnimationDelegate> {
    NSMutableArray *_bindingsInfos;
    BOOL _bindingsActive;
    id<AVFunctionBarPlaybackControlsControlling> _playbackControlsController;
    BOOL _collapsesIntoPlayButton;
    BOOL _drawsBackground;
    BOOL _showsInlinePlayButton;
    BOOL _collapsed;
    long long _expandCollapseAnimationCount;
    long long _appearAnimationCount;
    long long _disappearAnimationCount;
    NSView *_containerView;
    NSStackView *_liveStreamingContainerView;
    NSView *_collapsedRepresentation;
    NSButton *_inlinePlayButton;
    NSView *_separatorView;
    AVFunctionBarScrubberController *_functionBarScrubberController;
    NSLayoutConstraint *_containerViewFixedWidthLayoutConstraint;
    NSLayoutConstraint *_containerViewRightAnchorLayoutConstraint;
    NSLayoutConstraint *_scrubberLeftAnchorLayoutConstraint;
}

@property (retain) id<AVFunctionBarPlaybackControlsControllingInternal, AVFunctionBarScrubberControlling, AVFunctionBarTrackControlling, AVTimeControlling> playerController;
@property (retain) AVPlayerControllerTimeResolver *timeResolver;
@property (retain) id<AVFunctionBarPlaybackControlsControlling> playbackControlsController;
@property (weak) id<AVFunctionBarScrubberDelegate> delegate;
@property BOOL drawsBackground;
@property BOOL showsInlinePlayButton;
@property BOOL canCollapse;
@property BOOL collapsesIntoPlayButton;
@property (retain) NSColor *audioWaveformColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (BOOL)isHidden;
- (void)setHidden:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)wantsUpdateLayer;
- (void)updateLayer;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_commonInit;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)viewWillMoveToWindow:(id)a0;
- (void)_bindObject:(id)a0 withBinding:(id)a1 toObject:(id)a2 withKeyPath:(id)a3 options:(id)a4;
- (void)_unbindAllObjects;
- (void)actionExpand:(id)a0;
- (void)_updateTimeResolver;
- (id)_makeBack30SecondsButton;
- (id)_makePlayButton;
- (id)_makeSkipAheadButton;
- (id)_makeExpandButton;
- (id)_makeSeparatorView;
- (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })_makeScaleTransform:(double)a0 origin:(struct CGPoint { double x0; double x1; })a1;
- (void)_animateAppearDisappearTransition:(BOOL)a0 animationDuration:(double)a1;
- (void)_animateExpandCollapseTransition:(BOOL)a0 oldBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 newBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 animationDuration:(double)a3;
- (void)_bindObject:(id)a0 withBinding:(id)a1 toObject:(id)a2 withKeyPath:(id)a3 setToNilWhenDeactivated:(BOOL)a4 options:(id)a5;
- (void)_unbindObject:(id)a0;
- (void)_activateBindings;
- (void)_deactivateBindings;

@end
