@class SGTSearchField, NSString, SGTSearchFieldCellReserved;

@interface SGTSearchFieldCell : NSSearchFieldCell <NSTokenFieldCellDelegate> {
    SGTSearchFieldCellReserved *_sgtReserved;
}

@property (readonly) SGTSearchField *searchField;
@property BOOL useTokens;
@property (readonly) NSString *untokenizedStringValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)initWithCoder:(id)a0;
- (id)stringValue;
- (void).cxx_destruct;
- (void)setObjectValue:(id)a0;
- (void)setStringValue:(id)a0;
- (void)setControlSize:(unsigned long long)a0;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (id)accessibilityPositionOfChild:(id)a0;
- (id)accessibilitySizeOfChild:(id)a0;
- (id)accessibilityChildrenAttribute;
- (void)setFont:(id)a0;
- (id)initTextCell:(id)a0;
- (void)updateTrackingAreaWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (BOOL)allowsEditingTextAttributes;
- (id)setUpFieldEditorAttributes:(id)a0;
- (void)_validateEditing:(id)a0;
- (id)fieldEditorForView:(id)a0;
- (void)setPlaceholderString:(id)a0;
- (id)placeholderString;
- (void)setPlaceholderAttributedString:(id)a0;
- (id)placeholderAttributedString;
- (id)_searchMenuTemplate;
- (void)_searchFieldCancel:(id)a0;
- (void)_trackButton:(id)a0 forEvent:(id)a1 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 ofView:(id)a3;
- (id)tokenFieldCell:(id)a0 displayStringForRepresentedObject:(id)a1;
- (id)tokenFieldCell:(id)a0 editingStringForRepresentedObject:(id)a1;
- (id)tokenFieldCell:(id)a0 representedObjectForEditingString:(id)a1;
- (unsigned long long)tokenFieldCell:(id)a0 styleForRepresentedObject:(id)a1;
- (BOOL)tokenFieldCell:(id)a0 writeRepresentedObjects:(id)a1 toPasteboard:(id)a2;
- (id)tokenFieldCell:(id)a0 readFromPasteboard:(id)a1;
- (id)tokenFieldCell:(id)a0 shouldAddObjects:(id)a1 atIndex:(unsigned long long)a2;
- (id)tokenFieldCell:(id)a0 shouldUseWritablePasteboardTypes:(id)a1;
- (id)tokenFieldCell:(id)a0 shouldUseReadablePasteboardTypes:(id)a1;
- (id)tokenFieldCell:(id)a0 shouldUseDraggingPasteboardTypes:(id)a1;
- (void)staticSuggestionsDidChange;
- (id)tokenizeWithSuggestion:(id)a0 textView:(id)a1;
- (id)tokenizedSuggestions;
- (void)_forwardTokenFieldCellAction:(id)a0;
- (void)_sgtSearchFieldCellCommonInit;
- (void)_resetTokens;
- (void)tokenizeWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 textView:(id)a1;
- (id)_propertyListFromSuggestions:(id)a0;
- (id)_suggestionsFromPropertyList:(id)a0;

@end
