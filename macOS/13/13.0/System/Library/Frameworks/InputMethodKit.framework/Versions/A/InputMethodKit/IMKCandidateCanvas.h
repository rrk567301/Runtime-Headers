@class NSView, IMKCandidateGroupView, IMKCandidateView, IMKClipView, IMKCandidateStepperView, IMKCandidateController, NSTimer, IMKCandidateArrowView, IMKCandidateSelectionView;

@interface IMKCandidateCanvas : NSObject

@property (readonly, nonatomic) BOOL layoutDirectionIsRTL;
@property (retain, nonatomic) IMKClipView *canvasView;
@property (retain, nonatomic) IMKCandidateArrowView *arrowView;
@property (retain, nonatomic) IMKCandidateView *candidateView;
@property (retain, nonatomic) IMKCandidateGroupView *groupView;
@property (retain, nonatomic) IMKCandidateSelectionView *selectionView;
@property (retain, nonatomic) IMKCandidateStepperView *stepperView;
@property (nonatomic) IMKCandidateController *candidateController;
@property (nonatomic) long long canvasTypeForWindowType;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (retain, nonatomic) NSView *informationView;
@property (retain, nonatomic) NSTimer *groupViewTimer;
@property (nonatomic) BOOL groupViewVisibility;
@property (nonatomic) BOOL showSortingModes;
@property (readonly, nonatomic) BOOL currentWindowTypeIsSortable;
@property (nonatomic) unsigned long long sortingSelectionIndex;

- (void)dealloc;
- (void)nilOutConnectionsToCandidateController;
- (void)groupViewTimerFired:(id)a0;
- (id)initWithCanvasView:(id)a0 candidateController:(id)a1;
- (void)updateConnections;
- (void)updateViewForWindowType;
- (void)showCandidateViewAtTopWithBottomMargin:(double)a0;
- (void)showCandidateViewAtTop;
- (void)updateClipViewRadius;
- (void)removeCandidateAndRelatedViews;
- (void)showCandidateAndGroupView;
- (void)showSelectionViewAtBottom;
- (void)hideSelectionView;
- (void)removeAuxilliaryViews;
- (void)updateArrowViewVisibility;
- (void)updateArrowViewVisibilityWithTarget:(id)a0;
- (void)updateStepperViewVisibility;
- (void)hideArrowViewWithAnimation:(BOOL)a0;
- (void)showArrowViewWithAnimation:(BOOL)a0;
- (void)showAuxilliaryInformationViewAtBottom;
- (void)createGroupViewIfNeeded;
- (void)stopGroupViewTimer;
- (void)startGroupViewTimer;
- (void)showInformationView;
- (void)updateAfterSizeChange;
- (void)updateCandidateViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)moveToNextSortingSelectionIndex;
- (void)moveToPreviousSortingSelectionIndex;
- (void)UITypeUpdated;

@end
