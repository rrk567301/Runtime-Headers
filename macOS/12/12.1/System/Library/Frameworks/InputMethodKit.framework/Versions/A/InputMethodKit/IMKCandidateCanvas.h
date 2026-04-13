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
- (void)UITypeUpdated;
- (id)initWithCanvasView:(id)a0 candidateController:(id)a1;
- (void)hideArrowViewWithAnimation:(BOOL)a0;
- (void)showArrowViewWithAnimation:(BOOL)a0;
- (void)updateCandidateViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateAfterSizeChange;
- (void)updateArrowViewVisibility;
- (void)updateStepperViewVisibility;
- (void)moveToNextSortingSelectionIndex;
- (void)moveToPreviousSortingSelectionIndex;
- (void)removeAuxilliaryViews;
- (void)updateConnections;
- (void)showSelectionViewAtBottom;
- (void)showCandidateAndGroupView;
- (void)hideSelectionView;
- (void)showAuxilliaryInformationViewAtBottom;
- (void)showCandidateViewAtTopWithBottomMargin:(double)a0;
- (void)removeCandidateAndRelatedViews;
- (void)showInformationView;
- (void)updateClipViewRadius;
- (void)showCandidateViewAtTop;
- (void)updateViewForWindowType;
- (void)stopGroupViewTimer;
- (void)createGroupViewIfNeeded;
- (void)groupViewTimerFired:(id)a0;
- (void)updateArrowViewVisibilityWithTarget:(id)a0;
- (void)startGroupViewTimer;

@end
