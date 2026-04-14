@class IMKUIFastTrackVerticalLayout, IMKUISingleCandidateListView, NSArray;

@interface IMKUICandidateVerticalWindowController : IMKUICandidateWindowController

@property (nonatomic) double accumulatedLengthOfCandidates;
@property (nonatomic) BOOL annotationMarginCalculated;
@property (nonatomic) struct CGSize { double width; double height; } currentSize;
@property (retain, nonatomic) IMKUIFastTrackVerticalLayout *fastTrackVerticalLayout;
@property (nonatomic) BOOL hasAnnotations;
@property (retain, nonatomic) IMKUISingleCandidateListView *listView;
@property (nonatomic) BOOL updatingCandidates;
@property (retain, nonatomic) NSArray *visibleLineIndices;
@property (nonatomic) BOOL changesSizeWhenScrolling;

- (id)init;
- (void).cxx_destruct;
- (long long)accessibilityOrientation;
- (void)moveRight:(id)a0;
- (void)moveLeft:(id)a0;
- (void)moveDown:(id)a0;
- (void)moveUp:(id)a0;
- (void)hide;
- (id)parentView;
- (void)loadWindow;
- (void)updateLayout;
- (unsigned long long)topVisibleLine;
- (void)setTopVisibleLine:(unsigned long long)a0;
- (void)moveToBeginning;
- (void)moveToEnd;
- (void)setCandidateGroups:(id)a0;
- (void)updateVisualElements;
- (id)appearanceView;
- (void)updateLayoutTraits;
- (void)moveForwardOneElement;
- (void)moveBackwardOneElement;
- (void)moveForwardOnePage;
- (void)moveBackwardOnePage;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForAccessibilityElement:(id)a0;
- (void)moveAccessibilityElementToVisibleArea:(id)a0;
- (id)visibleCandidates;
- (id)candidatesSelectableByKeyboard;
- (void)selectNextSortingMode;
- (void)selectPreviousSortingMode;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForListView;
- (struct CGSize { double x0; double x1; })totalSizeForLayout;
- (struct CGSize { double x0; double x1; })minimumListViewSize;
- (struct CGSize { double x0; double x1; })proposedListViewSize;
- (struct CGSize { double x0; double x1; })proposedSortingBarSize;
- (struct CGSize { double x0; double x1; })proposedInformationViewSize;
- (struct CGSize { double x0; double x1; })proposedWindowSize;
- (void)updateListView;
- (BOOL)shouldShowSortingBar;
- (void)updateSortingBarView;
- (void)visibleIndicesChanged:(id)a0 sender:(id)a1;
- (id)UICandidates;
- (void)updateAnnotationMargin;
- (void)updateLayoutForCurrentSize;

@end
