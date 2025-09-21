@class NSMutableDictionary, NSArray, IMKCandidate, NSColor;

@interface IMKUICandidateBarListView : IMKUICandidateListView

@property (nonatomic) unsigned long long indexOfSelectedCandidate;
@property (retain, nonatomic) NSMutableDictionary *selectionKeyToCandidateMapping;
@property (nonatomic) char animateChanges;
@property (nonatomic) double candidateItemMargin;
@property (nonatomic) char highlightsLineWithSelectedIndex;
@property (retain, nonatomic) NSColor *lineHighlightedColor;
@property (retain, nonatomic) IMKCandidate *selectedCandidate;
@property (retain, nonatomic) NSArray *selectionKeys;
@property (readonly, nonatomic) char selectedCandidateIsVisible;
@property (nonatomic) char showsDelimiterLines;

- (void).cxx_destruct;
- (void)updateHighlightBasedOnSelection;
- (id)candidateForSelectionKey:(id)a0;
- (void)checkSelectionKeysForBarView:(id)a0 layoutEntry:(id)a1 animate:(char)a2;
- (id)groupTitleForLineWithIndex:(long long)a0;
- (void)setCandidateLayout:(id)a0;
- (void)showSelectionKeys:(char)a0 barView:(id)a1;
- (void)updateIndexOfSelectedCandidate;
- (void)updateLines:(id)a0 animate:(char)a1;
- (id)viewForLineWithIndex:(long long)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
