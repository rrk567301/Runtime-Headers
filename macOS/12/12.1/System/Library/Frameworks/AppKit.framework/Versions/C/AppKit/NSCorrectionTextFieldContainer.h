@class NSMutableArray, NSMutableDictionary;

@interface NSCorrectionTextFieldContainer : NSView {
    NSMutableArray *candidateTextFields;
    unsigned long long selectedCandidate;
    NSMutableDictionary *textAttributes;
    long long correctionPanelType;
}

@property (readonly) unsigned long long numberOfCandidates;
@property (readonly) BOOL hasSelection;
@property (readonly) unsigned long long dismissButtonLocation;

- (void)dealloc;
- (id)correction;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (id)accessibilityRoleAttribute;
- (id)accessibilityWindowAttribute;
- (BOOL)accessibilityIsWindowAttributeSettable;
- (id)accessibilityTopLevelUIElementAttribute;
- (BOOL)accessibilityIsTopLevelUIElementAttributeSettable;
- (BOOL)accessibilityIsAttributeSettable:(id)a0;
- (void)accessibilitySetValue:(id)a0 forAttribute:(id)a1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSelectedCandidate:(unsigned long long)a0;
- (void)setDismissButtonLocation:(unsigned long long)a0;
- (void)setCandidates:(id)a0 andCorrectionPanelType:(long long)a1;
- (BOOL)selectPreviousCandidate;
- (BOOL)selectNextCandidate;
- (BOOL)hasSelection;
- (unsigned long long)numberOfCandidates;
- (void)setTextAttributes:(id)a0;
- (unsigned long long)indexOfCandidateContainingPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)textFieldAtIndex:(unsigned long long)a0;

@end
