@class IMKUICandidateBarView, NSMutableDictionary, IMKUICandidateLineLayout, IMKUICandidateLineLayoutIterator, IMKUICandidateStepperView;

@interface IMKUICandidateSteppingWindowController : IMKUICandidateWindowController <IMKUICandidateItemViewHandling, IMKUICandidateStepperViewDelegate>

@property (retain, nonatomic) IMKUICandidateBarView *candidateBar;
@property (retain, nonatomic) NSMutableDictionary *candidateIdentifierToViewMap;
@property (nonatomic) long long lineIndex;
@property (retain, nonatomic) IMKUICandidateLineLayoutIterator *lineLayoutIterator;
@property (retain, nonatomic) IMKUICandidateLineLayout *lineLayout;
@property (retain, nonatomic) IMKUICandidateStepperView *stepperView;
@property (readonly, nonatomic) BOOL canMoveUpward;
@property (readonly, nonatomic) BOOL canMoveDownward;
@property (nonatomic) BOOL showsStepper;

- (id)init;
- (void).cxx_destruct;
- (id)parentView;
- (void)updateLayout;
- (void)moveToBeginning;
- (void)moveToEnd;
- (void)stepperViewUpArrowPressed;
- (void)stepperViewDownArrowPressed;
- (void)updateVisualElements;
- (id)candidateItemForCandidate:(id)a0 layout:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })stepperViewFrame;
- (void)updateLayoutTraits;
- (struct CGSize { double x0; double x1; })recommendedWindowSize;
- (void)selectionDidChangeForCandidate:(id)a0;
- (struct CGSize { double x0; double x1; })preferredSizeForItem:(id)a0 layout:(id)a1;
- (unsigned long long)visibleElementCount;
- (unsigned long long)localSelectedIndex;
- (id)candidateItemAtLocalIndex:(long long)a0;
- (id)candidateAtLocalIndex:(unsigned long long)a0;
- (void)moveForwardOneElement;
- (void)moveBackwardOneElement;
- (void)selectCandidateIntersectingFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 movement:(long long)a1;
- (void)selectFirstCandidateInLineIfNecessary;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForSelectedIndex;
- (void)moveForwardOneLine;
- (void)moveBackwardOneLine;
- (void)moveForwardOnePage;
- (void)moveBackwardOnePage;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForAccessibilityElement:(id)a0;
- (void)moveAccessibilityElementToVisibleArea:(id)a0;
- (id)visibleCandidates;
- (id)candidatesSelectableByKeyboard;
- (id)visibleSelectionKeys;

@end
