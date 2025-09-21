@class NSSegmentedControl, PKPassInfoTextField, NSButton, PKPassScrollView, PKPassBackView, PKPassDocumentView, NSMutableArray, NSImageView, NSString, NSTimer, NSView, PKPassPageDotView, NSTextField, PKPassFrontView;
@protocol PKPassViewerDelegate;

@interface PKPassViewerViewController : NSViewController <PKPassPageDotViewDelegate> {
    PKPassInfoTextField *_infoTextField;
    NSButton *_addToPassbookButton;
    NSButton *_closeButton;
    NSButton *_cancelButton;
    NSView *_aboutPassbookView;
    char _aboutPassbookIsTransitioning;
    NSMutableArray *_cachedPassViewController;
    PKPassScrollView *_passScrollView;
    PKPassDocumentView *_passScrollingDocumentView;
    char _snappingScroll;
    NSTimer *_scrollValidateTimer;
    char _scrollPointNeedsValidation;
    char _scrollAnimationInProgress;
    NSSegmentedControl *_passNavigationSegment;
    NSView *_prevPassView;
    NSView *_curPassView;
    NSView *_nextPassView;
    char _suppressRightPocket;
    char _suppressLeftPocket;
    PKPassPageDotView *_passPageDotView;
    char _validatingScrollPosition;
    NSView *_passScrollEnclosingView;
    NSImageView *_leftPocketImageView;
    NSImageView *_rightPocketImageView;
    NSMutableArray *_passViewControllers;
    char _ubiquityContainerExists;
    char _hasLargeFormatPass;
}

@property (readonly) NSMutableArray *passes;
@property (readonly) PKPassFrontView *passFrontView;
@property (readonly) PKPassBackView *passBackView;
@property (retain) NSTextField *titleTextField;
@property (weak) id<PKPassViewerDelegate> delegate;
@property char canGoBack;
@property char canGoForward;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)performClose:(id)a0;
- (id)initWithPasses:(id)a0 showCloseButton:(char)a1;
- (void)validateScroll:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_centeredRectWithSize:(struct CGSize { double x0; double x1; })a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)_createScrollingViewWithCurrentIndex:(long long)a0 scrollOffset:(struct CGPoint { double x0; double x1; } *)a1;
- (void)_layoutWindowForPass:(id)a0 resizeWindow:(char)a1;
- (long long)_passIndexForScrollOffset;
- (void)_scrollToPassIndex:(long long)a0 atScrollPoint:(struct CGPoint { double x0; double x1; })a1 animate:(char)a2;
- (void)aboutPassbookClicked:(id)a0;
- (void)aboutPassbookDoneClicked:(id)a0;
- (void)addToPassbookClicked:(id)a0;
- (void)closeClicked:(id)a0;
- (void)pageDotView:(id)a0 dotClickedAtIndex:(unsigned long long)a1;
- (void)passDocumentViewGestureEnded:(id)a0;
- (void)passNavigationSegmentClicked:(id)a0;
- (void)scrollBackToPassAtIndex:(long long)a0;
- (void)scrollForwardToPassAtIndex:(long long)a0;
- (void)scrollingFrameChanged:(id)a0;
- (id)selectedPassViewController;
- (void)ubiquitousContainerSeen:(id)a0;

@end
