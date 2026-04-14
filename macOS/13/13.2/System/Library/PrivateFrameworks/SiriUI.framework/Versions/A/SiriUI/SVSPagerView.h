@class NSView, SVSPagingScrollView;
@protocol SVSPagerViewDelegate, SVSPagerViewDataSource;

@interface SVSPagerView : NSView {
    SVSPagingScrollView *_scrollView;
}

@property (retain, nonatomic) NSView *activePageView;
@property (nonatomic, getter=isPagingEnabled) BOOL pagingEnabled;
@property (readonly, nonatomic) unsigned long long transitionState;
@property (weak, nonatomic) id<SVSPagerViewDataSource> dataSource;
@property (weak, nonatomic) id<SVSPagerViewDelegate> delegate;

- (void).cxx_destruct;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidMoveToWindow;
- (void)reloadData;
- (BOOL)isFlipped;
- (id)_pageViews;
- (void)insertPageView:(id)a0 atIndex:(long long)a1;
- (void)addPageView:(id)a0;
- (void)removePageView:(id)a0;
- (BOOL)_containsPageView:(id)a0;

@end
