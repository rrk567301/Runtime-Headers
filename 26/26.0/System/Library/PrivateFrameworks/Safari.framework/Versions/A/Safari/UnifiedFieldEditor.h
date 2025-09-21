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

- (void)mouseDown:(id)a0;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (id)init;
- (void)setMarkedText:(id)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)insertText:(id)a0;
- (void)doCommandBySelector:(SEL)a0;
- (id)menuForEvent:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)incrementalSearchClientGeometry;
- (id)acceptableDragTypes;
- (BOOL)allowsCharacterPickerTouchBarItem;
- (void)concludeDragOperation:(id)a0;
- (void)contextMenuKeyDown:(id)a0;
- (void)didChangeText;
- (unsigned long long)draggingEntered:(id)a0;
- (unsigned long long)draggingUpdated:(id)a0;
- (BOOL)performDragOperation:(id)a0;
- (BOOL)prepareForDragOperation:(id)a0;
- (id)selectedTextAttributes;
- (void)setSelectedRanges:(id)a0 affinity:(unsigned long long)a1 stillSelecting:(BOOL)a2;
- (BOOL)shouldDrawInsertionPoint;
- (void)smartInsertForString:(id)a0 replacingRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 beforeString:(id *)a2 afterString:(id *)a3;
- (BOOL)wouldHandleEvent:(id)a0;
- (id)writablePasteboardTypes;
- (BOOL)writeSelectionToPasteboard:(id)a0 types:(id)a1;
- (BOOL)_allTextSelected;
- (BOOL)_isReflectingSearchTermsWithAllTextSelected;
- (void)_notifyFieldIfMarkedTextDidChange;
- (BOOL)_usesPrivateBrowsing;
- (void)copySearchTerms:(id)a0;
- (void)copyURL:(id)a0;
- (id)currentMetadataForUnifiedFieldPasteboardEngine:(id)a0;
- (id)currentStringForUnifiedFieldPasteboardEngine:(id)a0;
- (double)extraTrailingPaddingForSelectionRectInUnifiedFieldLayoutManager:(id)a0;
- (BOOL)isReflectingSearchTermsForUnifiedFieldPasteboardEngine:(id)a0;
- (BOOL)isUsingPrivateBrowsingForUnifiedFieldPasteboardEngine:(id)a0;
- (BOOL)pasteReplacesTabsWithSpaces;
- (id)reflectedURLForUnifiedFieldPasteboardEngine:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })selectionRangeForUnifiedFieldPasteboardEngine:(id)a0;
- (void)unifiedFieldPasteboardEngine:(id)a0 performCopy:(id)a1;
- (BOOL)unifiedFieldPasteboardEngine:(id)a0 performWriteSelectionToPasteboard:(id)a1 type:(id)a2;
- (id)writablePasteboardTypesForUnifiedFieldPasteboardEngine:(id)a0;

@end
