@class IMKUICandidateLineLayout, IMKUICandidateArrowButton, IMKUICandidateItemLayout, IMKUICandidateLayoutTraits, IMKUICandidateBarListView;

@interface IMKUIExpandableCandidateWindowController : IMKUICandidateWindowController

@property (retain, nonatomic) IMKUICandidateArrowButton *arrowButton;
@property (retain, nonatomic) IMKUICandidateItemLayout *collapsedItemLayout;
@property (retain, nonatomic) IMKUICandidateLayoutTraits *expandedLayoutTraits;
@property (readonly, nonatomic) BOOL isOneLine;
@property (nonatomic) long long layoutState;
@property (retain, nonatomic) IMKUICandidateLineLayout *lineLayout;
@property (retain, nonatomic) IMKUICandidateBarListView *listView;
@property (nonatomic) BOOL windowIsExpanded;

- (id)init;
- (void).cxx_destruct;
- (long long)accessibilityOrientation;
- (void)keyDown:(id)a0;
- (void)hide;
- (id)parentView;
- (void)setItemLayout:(id)a0;
- (void)setSelectedCandidate:(id)a0;
- (void)expand;
- (void)collapse;
- (void)loadWindow;
- (void)updateLayout;
- (void)keyPressed:(id)a0;
- (void)setTopVisibleLine:(unsigned long long)a0;
- (unsigned long long)topVisibleLine;
- (void)moveToBeginning;
- (void)moveToEnd;
- (id)appearanceView;
- (void)setCandidateGroups:(id)a0;
- (void)updateVisualElements;
- (id)candidateItemForCandidate:(id)a0 layout:(id)a1;
- (void)moveForwardOneLine;
- (void)moveBackwardOneLine;
- (void)updateLayoutTraits;
- (struct CGSize { double x0; double x1; })preferredSizeForItem:(id)a0 layout:(id)a1;
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
- (id)multiLineLayout;
- (id)oneLineLayout;
- (void)arrowPressed:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arrowButtonFrameWithExpansion:(BOOL)a0;
- (void)updateArrowButtonVisibility;
- (void)updateWindowSize:(struct CGSize { double x0; double x1; })a0 withAnimation:(BOOL)a1;
- (struct CGSize { double x0; double x1; })expandedWindowSize;
- (void)moveInArrowButtonWithAnimation:(BOOL)a0;
- (double)lengthOfCandidateItems:(id)a0 layout:(id)a1;
- (void)moveElementsInLine:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 delta:(struct CGPoint { double x0; double x1; })a2;
- (void)changeFramesForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 sourceLine:(id)a1 targetLine:(id)a2;
- (void)moveOutArrowButton;
- (void)moveInArrowButton;
- (unsigned long long)lineIndexForSelectedCandidate;
- (BOOL)selectedLineIsInVisibleRange:(long long)a0;
- (id)stringIdentifiersForVisibleItemsInFirstLine;

@end
