@class NSString, UnifiedFieldPasteboardEngine;
@protocol UnifiedFieldEditorDelegate;

@interface UnifiedFieldEditor : TextFieldEditor <NSTextInputClient_IncrementalSearch, UnifiedFieldLayoutManagerDelegate, UnifiedFieldPasteboardDriver> {
    NSString *_previousMarkedText;
    UnifiedFieldPasteboardEngine *_pasteboardEngine;
}

@property (weak, nonatomic) id<UnifiedFieldEditorDelegate> unifiedFieldEditorDelegate;
@property (nonatomic) BOOL selectionWasAutocompleted;
@property (nonatomic, getter=isAdjustingAutocompleteSelection) BOOL adjustingAutocompleteSelection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

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
- (BOOL)prepareForDragOperation:(id)a0;
- (void)concludeDragOperation:(id)a0;
- (void)insertText:(id)a0;
- (void)setMarkedText:(id)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)didChangeText;
- (id)writablePasteboardTypes;
- (BOOL)writeSelectionToPasteboard:(id)a0 type:(id)a1;
- (BOOL)allowsCharacterPickerTouchBarItem;
- (id)selectedTextAttributes;
- (BOOL)shouldDrawInsertionPoint;
- (id)acceptableDragTypes;
- (void)setSelectedRanges:(id)a0 affinity:(unsigned long long)a1 stillSelecting:(BOOL)a2;
- (void)smartInsertForString:(id)a0 replacingRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 beforeString:(id *)a2 afterString:(id *)a3;
- (BOOL)canSmoothFontsInLayer;
- (unsigned long long)incrementalSearchClientGeometry;
- (BOOL)wouldHandleEvent:(id)a0;
- (BOOL)pasteReplacesTabsWithSpaces;
- (double)extraTrailingPaddingForSelectionRectInUnifiedFieldLayoutManager:(id)a0;
- (id)writablePasteboardTypesForUnifiedFieldPasteboardEngine:(id)a0;
- (id)currentStringForUnifiedFieldPasteboardEngine:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })selectionRangeForUnifiedFieldPasteboardEngine:(id)a0;
- (id)reflectedURLForUnifiedFieldPasteboardEngine:(id)a0;
- (BOOL)isReflectingSearchTermsForUnifiedFieldPasteboardEngine:(id)a0;
- (BOOL)unifiedFieldPasteboardEngine:(id)a0 performWriteSelectionToPasteboard:(id)a1 type:(id)a2;
- (void)_notifyFieldIfMarkedTextDidChange;

@end
