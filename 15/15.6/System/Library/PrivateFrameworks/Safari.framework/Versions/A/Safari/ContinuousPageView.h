@class NSView;
@protocol ContinuousPageViewDelegate;

@interface ContinuousPageView : NSView {
    char _inMiddleOfGesture;
    char _swipingToThePreviousPage;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _currentPageViewFrameBeforeSwipe;
    char _didDeferNoteItemsChanged;
    unsigned long long _transitionToNextPageCount;
}

@property (retain, nonatomic) id currentPageItem;
@property (retain, nonatomic) NSView *currentPageView;
@property (retain, nonatomic) id previousPageItem;
@property (retain, nonatomic) NSView *previousPageView;
@property (retain, nonatomic) id nextPageItem;
@property (retain, nonatomic) NSView *nextPageView;
@property (readonly, weak, nonatomic) id<ContinuousPageViewDelegate> delegate;
@property (readonly, nonatomic, getter=isHandlingPageTransition) char handlingPageTransition;
@property (readonly, nonatomic, getter=isLoadingPageItem) char loadingPageItem;
@property (readonly, nonatomic) char shouldPreloadContinousReadingListWebView;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 delegate:(id)a1;
- (void)loadItem:(id)a0;
- (void)_didTransitionToNextPage;
- (void)_didTransitionToPreviousPage;
- (void)_layOutViewsAtSwipeProgress:(double)a0 bannerIsVisibleInBothPages:(char)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_nextViewFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_previousViewFrame;
- (void)_startSwipeGestureWithScrollEvent:(id)a0;
- (void)_transitionToPageViewWasCanceled:(id)a0 pageItem:(id)a1;
- (void)_updateNextPageItem;
- (void)_updatePreviousPageItem;
- (void)_willTransitionToPageView:(id)a0 pageItem:(id)a1;
- (char)handleScrollEvent:(id)a0;
- (void)noteItemsChanged;
- (void)updatePageViewsLayout;
- (void)webKitDidNotHandleScrollEvent:(id)a0;

@end
