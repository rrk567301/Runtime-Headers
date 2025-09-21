@class NSString, UnifiedFieldPasteboardEngine;
@protocol UnifiedFieldEditorDelegate;

@interface UnifiedFieldEditor : TextFieldEditor <NSTextInputClient_IncrementalSearch, UnifiedFieldLayoutManagerDelegate, UnifiedFieldPasteboardDriver> {
    NSString *_previousMarkedText;
    UnifiedFieldPasteboardEngine *_pasteboardEngine;
}

@property (weak, nonatomic) id<UnifiedFieldEditorDelegate> unifiedFieldEditorDelegate;
@property (nonatomic) char selectionWasAutocompleted;
@property (nonatomic, getter=isAdjustingAutocompleteSelection) char adjustingAutocompleteSelection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)incrementalSearchClientGeometry;
- (id)acceptableDragTypes;
- (char)allowsCharacterPickerTouchBarItem;
- (char)becomeFirstResponder;
- (void)concludeDragOperation:(id)a0;
- (void)contextMenuKeyDown:(id)a0;
- (void)didChangeText;
- (void)doCommandBySelector:(SEL)a0;
- (unsigned long long)draggingEntered:(id)a0;
- (unsigned long long)draggingUpdated:(id)a0;
- (void)insertText:(id)a0;
- (id)menuForEvent:(id)a0;
- (void)mouseDown:(id)a0;
- (char)performDragOperation:(id)a0;
- (char)prepareForDragOperation:(id)a0;
- (char)resignFirstResponder;
- (id)selectedTextAttributes;
- (void)setMarkedText:(id)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setSelectedRanges:(id)a0 affinity:(unsigned long long)a1 stillSelecting:(char)a2;
- (char)shouldDrawInsertionPoint;
- (void)smartInsertForString:(id)a0 replacingRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 beforeString:(id *)a2 afterString:(id *)a3;
- (char)wouldHandleEvent:(id)a0;
- (id)writablePasteboardTypes;
- (char)writeSelectionToPasteboard:(id)a0 type:(id)a1;
- (void)_notifyFieldIfMarkedTextDidChange;
- (id)currentMetadataForUnifiedFieldPasteboardEngine:(id)a0;
- (id)currentStringForUnifiedFieldPasteboardEngine:(id)a0;
- (double)extraTrailingPaddingForSelectionRectInUnifiedFieldLayoutManager:(id)a0;
- (char)isReflectingSearchTermsForUnifiedFieldPasteboardEngine:(id)a0;
- (char)pasteReplacesTabsWithSpaces;
- (id)reflectedURLForUnifiedFieldPasteboardEngine:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })selectionRangeForUnifiedFieldPasteboardEngine:(id)a0;
- (char)unifiedFieldPasteboardEngine:(id)a0 performWriteSelectionToPasteboard:(id)a1 type:(id)a2;
- (id)writablePasteboardTypesForUnifiedFieldPasteboardEngine:(id)a0;

@end
