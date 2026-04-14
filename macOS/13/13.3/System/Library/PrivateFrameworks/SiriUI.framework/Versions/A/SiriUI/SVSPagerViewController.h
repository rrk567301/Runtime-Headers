@class NSArray, NSViewController, NSString, SVSPagerView, NSMutableArray;
@protocol SVSPagerViewControllerDelegate;

@interface SVSPagerViewController : NSViewController <SVSPagerViewDataSource, SVSPagerViewDelegate> {
    NSMutableArray *_viewControllers;
}

@property (retain, nonatomic) SVSPagerView *view;
@property (readonly, nonatomic) NSArray *pageViewControllers;
@property (retain, nonatomic) NSViewController *activePageViewController;
@property (nonatomic, getter=isPagingEnabled) BOOL pagingEnabled;
@property (readonly, nonatomic) unsigned long long transitionState;
@property (weak, nonatomic) id<SVSPagerViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)viewDidLoad;
- (id)_viewControllerForPageView:(id)a0;
- (void)addPageViewController:(id)a0;
- (BOOL)containsPageViewController:(id)a0;
- (void)insertPageViewController:(id)a0 atIndex:(long long)a1;
- (long long)numberOfPageViewsInPagerView:(id)a0;
- (void)pagerView:(id)a0 didActivatePageView:(id)a1 oldActivePageView:(id)a2;
- (id)pagerView:(id)a0 pageViewAtIndex:(long long)a1;
- (void)pagerViewDidChangeTransitionState:(id)a0;
- (void)removePageViewController:(id)a0;

@end
