@class NSArray, _PXGTransitionEndPointInfo, NSViewController, PXGItemPlacement;
@protocol PXGViewControllerTransitionEndPoint;

@interface PXGViewControllerTransition : PXObservable <PXGMutableViewControllerTransition>

@property (copy, nonatomic) NSArray *endPointInfos;
@property (readonly, nonatomic) _PXGTransitionEndPointInfo *summaryEndPointInfo;
@property (readonly, nonatomic) _PXGTransitionEndPointInfo *detailEndPointInfo;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, weak, nonatomic) id<PXGViewControllerTransitionEndPoint> summaryEndPoint;
@property (readonly, weak, nonatomic) id<PXGViewControllerTransitionEndPoint> detailEndPoint;
@property (nonatomic) BOOL isInteractive;
@property (readonly, weak, nonatomic) NSViewController *summaryViewController;
@property (readonly, weak, nonatomic) NSViewController *detailViewController;
@property (readonly, nonatomic) PXGItemPlacement *summaryItemOriginalPlacement;
@property (readonly, nonatomic) PXGItemPlacement *detailItemOriginalPlacement;
@property (readonly, nonatomic) BOOL isVerticalOnly;
@property (nonatomic) double fractionCompleted;
@property (copy, nonatomic) PXGItemPlacement *summaryItemPlacementOverride;
@property (copy, nonatomic) PXGItemPlacement *detailItemPlacementOverride;

+ (id)interactiveDismissalOfDetailViewController:(id)a0;
+ (id)_createTransitionWithSummaryViewController:(id)a0 presentedViewController:(id)a1 detailViewController:(id)a2;
+ (id)_transitionWithDetailViewController:(id)a0 createIfNeeded:(BOOL)a1 verticalOnly:(BOOL)a2;
+ (void)prepareDismissalOfDetailViewController:(id)a0;
+ (void)prepareTransitionFromSummaryViewController:(id)a0 toPresentedViewController:(id)a1 detailViewController:(id)a2;
+ (id)transitionWithDetailViewController:(id)a0;

- (void)cancel;
- (void)finish;
- (id)init;
- (void)performChanges:(id /* block */)a0;
- (void).cxx_destruct;
- (void)installCompletionHandler:(id /* block */)a0;
- (void)setDetailItemOriginalPlacement:(id)a0;
- (void)animateAlongside:(id /* block */)a0;
- (void)setIsVerticalOnly:(BOOL)a0;
- (void)setSummaryItemOriginalPlacement:(id)a0;

@end
