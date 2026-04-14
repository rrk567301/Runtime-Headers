@class NSString;
@protocol UnifiedFieldEditorDelegate;

@interface UnifiedFieldEditor : TextFieldEditor <NSTextInputClient_IncrementalSearch, UnifiedFieldLayoutManagerDelegate> {
    NSString *_previousMarkedText;
}

@property (weak, nonatomic) id<UnifiedFieldEditorDelegate> unifiedFieldEditorDelegate;
@property (nonatomic) BOOL selectionWasAutocompleted;
@property (nonatomic, getter=isAdjustingAutocompleteSelection) BOOL adjustingAutocompleteSelection;

- (id)init;
- (void).cxx_destruct;
- (void)mouseDown:(id)a0;
- (void)doCommandBySelector:(SEL)a0;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (unsigned long long)draggingEntered:(id)a0;
- (unsigned long long)draggingUpdated:(id)a0;
- (BOOL)performDragOperation:(id)a0;
- (id)menuForEvent:(id)a0;
- (void)didChangeText;
- (BOOL)prepareForDragOperation:(id)a0;
- (void)concludeDragOperation:(id)a0;
- (void)insertText:(id)a0;
- (void)setMarkedText:(id)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)writablePasteboardTypes;
- (BOOL)writeSelectionToPasteboard:(id)a0 type:(id)a1;
- (BOOL)canSmoothFontsInLayer;
- (BOOL)allowsCharacterPickerTouchBarItem;
- (id)selectedTextAttributes;
- (id)acceptableDragTypes;
- (void)setSelectedRanges:(id)a0 affinity:(unsigned long long)a1 stillSelecting:(BOOL)a2;
- (BOOL)shouldDrawInsertionPoint;
- (void)smartInsertForString:(id)a0 replacingRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 beforeString:(id *)a2 afterString:(id *)a3;
- (unsigned long long)incrementalSearchClientGeometry;
- (BOOL)wouldHandleEvent:(id)a0;
- (BOOL)pasteReplacesTabsWithSpaces;
- (void)_notifyFieldIfMarkedTextDidChange;
- (BOOL)_allTextSelected;
- (BOOL)_isReflectingSearchTermsWithAllTextSelected;
- (BOOL)_shouldWriteSearchTermsToPasteboardAsLink;
- (id)_replacementStringforWritingToPasteboard;
- (double)extraTrailingPaddingForSelectionRectInUnifiedFieldLayoutManager:(id)a0;

@end
