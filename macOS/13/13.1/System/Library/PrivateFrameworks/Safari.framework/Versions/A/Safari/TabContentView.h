@class ContinuousPageView, BrowserWKView, NSView, ReaderWKView, CALayer, ReaderContainerView;
@protocol TabContentViewDelegate;

@interface TabContentView : NSView {
    BOOL _isClosing;
    ReaderContainerView *_readerContainerView;
    ReaderWKView *_readerWKView;
    NSView *_responsiveDesignModeView;
    NSView *_startPageClipView;
    BOOL _shouldClipStartPageViewDuringSwipe;
    CALayer *_snapshotFadingLayer;
    ContinuousPageView *_continuousBrowserPageView;
    BOOL _canInvalidateSnapshotImage;
}

@property (readonly, nonatomic) NSView *contentView;
@property (readonly) BrowserWKView *browserWKView;
@property (weak, nonatomic) id<TabContentViewDelegate> delegate;
@property (readonly, nonatomic) NSView *backgroundView;
@property (readonly, nonatomic) NSView *startPageView;
@property (readonly, nonatomic) NSView *bookmarksView;
@property (readonly, nonatomic) NSView *tabOverviewView;
@property (readonly, nonatomic) NSView *snapshotView;
@property (nonatomic) double topContentInset;
@property (readonly, nonatomic) NSView *dockedInspectorView;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isOpaque;
- (void)viewDidChangeEffectiveAppearance;
- (id)accessibilityChildren;
- (void)willRemoveSubview:(id)a0;
- (void)scrollWheel:(id)a0;
- (void)magnifyWithEvent:(id)a0;
- (void)resizeSubviewsWithOldSize:(struct CGSize { double x0; double x1; })a0;
- (void)didAddSubview:(id)a0;
- (id)_browserWindowController;
- (void)updateCustomSwipeViews;
- (BOOL)isInContinuousMode;
- (void)willClose;
- (BOOL)handleScrollEvent:(id)a0;
- (void)installReaderView:(id)a0;
- (void)uninstallReaderView:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 browserWKView:(id)a1;
- (id)currentContentView;
- (void)_wkViewDidSwipeSnapshotToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)installBookmarksView:(id)a0;
- (void)installResponsiveDesignView:(id)a0;
- (void)uninstallBookmarksView;
- (void)uninstallResponsiveDesignView;
- (void)_installContentView:(id)a0;
- (void)_uninstallContentView:(id)a0;
- (void)installStartPageView:(id)a0;
- (void)uninstallStartPageView;
- (void)installTabOverviewView:(id)a0;
- (void)uninstallTabOverviewView;
- (BOOL)_isShowingStartPage;
- (id)_snapshotFadingColor;
- (void)installSnapshotViewWithImage:(id)a0 imageScale:(double)a1 showWhiteOverlay:(BOOL)a2;
- (void)_invalidateSnapshotViewImageIfNecessary;
- (void)installContinuousBrowserPageView:(id)a0;
- (void)uninstallContinuousBrowserPageView;
- (void)_replaceCurrentBrowserWKViewWithBrowserWKView:(id)a0;
- (void)_currentContentViewDidChange;
- (void)_adjustSubviewsForTopContentInset;

@end
