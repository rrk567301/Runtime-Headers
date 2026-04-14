@class NSArray, _PXStoryTransitionEndPointInfo, UXViewController, PXStoryItemPlacement;
@protocol PXStoryViewControllerTransitionEndPoint;

@interface PXStoryViewControllerTransition : PXObservable <PXStoryMutableViewControllerTransition>

@property (copy, nonatomic) NSArray *endPointInfos;
@property (readonly, nonatomic) _PXStoryTransitionEndPointInfo *summaryEndPointInfo;
@property (readonly, nonatomic) _PXStoryTransitionEndPointInfo *detailEndPointInfo;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) id<PXStoryViewControllerTransitionEndPoint> summaryEndPoint;
@property (readonly, nonatomic) id<PXStoryViewControllerTransitionEndPoint> detailEndPoint;
@property (nonatomic) BOOL isInteractive;
@property (readonly, nonatomic) UXViewController *summaryViewController;
@property (readonly, nonatomic) UXViewController *detailViewController;
@property (readonly, nonatomic) PXStoryItemPlacement *summaryItemOriginalPlacement;
@property (readonly, nonatomic) PXStoryItemPlacement *detailItemOriginalPlacement;
@property (readonly, nonatomic) BOOL isVerticalOnly;
@property (nonatomic) double fractionCompleted;
@property (copy, nonatomic) PXStoryItemPlacement *summaryItemPlacementOverride;
@property (copy, nonatomic) PXStoryItemPlacement *detailItemPlacementOverride;

+ (void)prepareTransitionFromSummaryViewController:(id)a0 toPresentedViewController:(id)a1 detailViewController:(id)a2;
+ (id)_createTransitionWithSummaryViewController:(id)a0 presentedViewController:(id)a1 detailViewController:(id)a2;
+ (id)transitionWithDetailViewController:(id)a0;
+ (id)_transitionWithDetailViewController:(id)a0 createIfNeeded:(BOOL)a1 verticalOnly:(BOOL)a2;
+ (void)prepareDismissalOfDetailViewController:(id)a0;
+ (id)interactiveDismissalOfDetailViewController:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)finish;
- (void)cancel;
- (void)performChanges:(id /* block */)a0;
- (void)installCompletionHandler:(id /* block */)a0;
- (void)setSummaryItemOriginalPlacement:(id)a0;
- (void)setDetailItemOriginalPlacement:(id)a0;
- (void)setIsVerticalOnly:(BOOL)a0;

@end
