@class NSString, NSAttributedString, CIMMecabraZhuyinEngine;

@interface CIMZhuyinEngine : CIMBaseEngine <CIMMecabraZhuyinEngineDelegate>

@property (copy, nonatomic) NSAttributedString *inlineText;
@property (retain, nonatomic) CIMMecabraZhuyinEngine *mecabraEngine;
@property (copy) NSString *selectedCandidateSurface;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)commitComposition:(id)a0;
- (void)setCandidates:(id)a0;
- (id)helpAnchorName;
- (int)mecabraInputMethodType;
- (id)sortingMethods;
- (BOOL)forceNoIncrementalSearchPositioning;
- (unsigned long long)panelType;
- (id)currentInlineText;
- (void)setSecondaryCandidates:(id)a0;
- (id)mecabraEnvironment;
- (void)checkSettings:(id)a0 withClient:(id)a1;
- (id)candidateListDictionaryWithSortingMethod:(id)a0;
- (BOOL)isInlineEmpty;
- (void)didHandleCandidateSelected:(id)a0 candidateController:(id)a1;
- (void)didHandleSecondaryCandidateSelected:(id)a0;
- (void)didHandleCandidateSelectionChanged:(id)a0 candidateController:(id)a1;
- (BOOL)handleKeyEvent;
- (void)showPunctationCandidates;
- (void)forgetSelectedWord;
- (BOOL)isUsingSortingBar;
- (void)updateTextReplacementEntries;
- (void)commitCurrentlySelectedCandidateOrInline;
- (BOOL)incrementalSearchClientShouldHandleEvent:(id)a0;
- (BOOL)showsHorizontalWindowInIncrementalSearchMode;
- (BOOL)inputModeShowsDynamicCandidates;
- (void)didHandleSecondaryCandidateSelectionChanged:(id)a0;
- (id)preConvertedTextForDebugging;
- (id)mecabraEngine:(id)a0 textAttributeForStyle:(long long)a1 atRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)mecabraEngine:(id)a0 didUpdateComposedText:(id)a1 withCursorLocation:(unsigned long long)a2;
- (void)mecabraEngine:(id)a0 willDropComposedText:(id)a1;
- (id)inputModeNameForMecabraEngine:(id)a0;
- (void)showCandidateWindowWithSelectedCandidate:(id)a0;
- (void)updateMecabraEnvironmentWithCandidates:(id)a0;
- (void)clearCandidateAnnotationsForCandidates:(id)a0;

@end
