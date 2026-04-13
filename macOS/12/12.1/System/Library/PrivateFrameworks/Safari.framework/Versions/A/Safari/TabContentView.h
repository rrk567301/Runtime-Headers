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
- (BOOL)isOpaque;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidChangeEffectiveAppearance;
- (id)accessibilityChildren;
- (void)willRemoveSubview:(id)a0;
- (void)scrollWheel:(id)a0;
- (void)magnifyWithEvent:(id)a0;
- (void)resizeSubviewsWithOldSize:(struct CGSize { double x0; double x1; })a0;
- (void)didAddSubview:(id)a0;
- (id)_browserWindowController;
- (BOOL)isInContinuousMode;
- (void)updateCustomSwipeViews;
- (void)willClose;
- (void)installSnapshotViewWithImage:(id)a0 imageScale:(double)a1 showWhiteOverlay:(BOOL)a2;
- (BOOL)handleScrollEvent:(id)a0;
- (void)installReaderView:(id)a0;
- (void)uninstallReaderView:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 browserWKView:(id)a1;
- (void)_invalidateSnapshotViewImageIfNecessary;
- (BOOL)_isShowingStartPage;
- (void)_wkViewDidSwipeSnapshotToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_currentContentViewDidChange;
- (void)_installContentView:(id)a0;
- (void)_uninstallContentView:(id)a0;
- (id)_snapshotFadingColor;
- (void)_adjustSubviewsForTopContentInset;
- (id)currentContentView;
- (void)installBookmarksView:(id)a0;
- (void)installResponsiveDesignView:(id)a0;
- (void)uninstallBookmarksView;
- (void)uninstallResponsiveDesignView;
- (void)installStartPageView:(id)a0;
- (void)uninstallStartPageView;
- (void)installTabOverviewView:(id)a0;
- (void)uninstallTabOverviewView;
- (void)installContinuousBrowserPageView:(id)a0;
- (void)uninstallContinuousBrowserPageView;
- (void)_replaceCurrentBrowserWKViewWithBrowserWKView:(id)a0;

@end
