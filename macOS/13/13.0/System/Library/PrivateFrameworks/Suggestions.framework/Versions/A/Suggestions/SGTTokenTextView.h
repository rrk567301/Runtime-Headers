@class SGTSuggestion;

@interface SGTTokenTextView : NSTokenTextView {
    SGTSuggestion *completionSuggestion;
    SGTSuggestion *currentSuggestion;
}

@property (readonly, nonatomic) BOOL programmaticTextChange;

+ (void)initialize;
+ (id)cleanStringValueFromAttributedString:(id)a0;

- (void)dealloc;
- (id)init;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withAttributedString:(id)a1;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)validateUserInterfaceItem:(id)a0;
- (void)keyDown:(id)a0;
- (void)redo:(id)a0;
- (void)undo:(id)a0;
- (void)didChangeText;
- (BOOL)usesFontPanel;
- (void)setSelectedRanges:(id)a0 affinity:(unsigned long long)a1 stillSelecting:(BOOL)a2;
- (BOOL)usesRuler;
- (BOOL)usesFindPanel;
- (BOOL)usesFindBar;
- (void)setCurrentSuggestion:(id)a0;
- (BOOL)_usesTokens;
- (id)_defaultMutableAttributedStringForString:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_rangeOfUncleanPart;
- (void)_discardUncleanPart;
- (void)_updateCompletionWithRangeOfCompletion:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 byTyping:(BOOL)a2;
- (void)_updateCompletion;
- (void)_updateCurrentSuggestion;
- (void)setCompletionSuggestion:(id)a0;
- (id)cleanStringValue;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfCleanString;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })fixedSelectedRangeForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)_sgt_invalidateLayout;

@end
