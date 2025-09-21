@class NSMutableArray, NSMutableDictionary;

@interface NSCorrectionTextFieldContainer : NSView {
    NSMutableArray *candidateTextFields;
    NSMutableArray *intelligentMaskingViews;
    unsigned long long selectedCandidate;
    NSMutableDictionary *textAttributes;
    long long correctionPanelType;
}

@property (readonly) unsigned long long numberOfCandidates;
@property (readonly) char hasSelection;
@property (readonly) unsigned long long dismissButtonLocation;

- (void)dealloc;
- (id)correction;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (char)accessibilityIsAttributeSettable:(id)a0;
- (char)accessibilityIsIgnored;
- (char)accessibilityIsTopLevelUIElementAttributeSettable;
- (char)accessibilityIsWindowAttributeSettable;
- (id)accessibilityRoleAttribute;
- (void)accessibilitySetValue:(id)a0 forAttribute:(id)a1;
- (id)accessibilityTopLevelUIElementAttribute;
- (id)accessibilityWindowAttribute;
- (id)candidateViewAtIndex:(unsigned long long)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)hasSelection;
- (unsigned long long)indexOfCandidateContainingPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)lastCandidateView;
- (unsigned long long)numberOfCandidates;
- (void)removeIntelligentMasks;
- (char)selectNextCandidate;
- (char)selectPreviousCandidate;
- (void)setCandidates:(id)a0 images:(id)a1 andCorrectionPanelType:(long long)a2;
- (void)setDismissButtonLocation:(unsigned long long)a0;
- (void)setSelectedCandidate:(unsigned long long)a0;
- (void)setTextAttributes:(id)a0;
- (void)startAnimationOfMaskingView:(id)a0;
- (id)textFieldAtIndex:(unsigned long long)a0;
- (void)updateIntelligentMaskingViewsForCorrectionPanelType:(long long)a0 numCandidates:(unsigned long long)a1;

@end
