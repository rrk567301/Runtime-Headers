@class SCRSelectionChangeHelper;

@interface SCRCollection : _SCRCollectionSectionBase <SCRSelectionChangeHelperElement>

@property (retain, nonatomic) SCRSelectionChangeHelper *_selectionChangeHelper;

- (void)dealloc;
- (void).cxx_destruct;
- (void)selectionDidChange;
- (unsigned long long)indexOfElement:(id)a0;
- (void)_collectionSelectionDidChange;
- (char)_moveToContentSibling:(id)a0;
- (char)allowFocusThroughSingleChild;
- (unsigned long long)directInteractionArrowCaptureMask;
- (char)focusInto:(id)a0 event:(id)a1;
- (id)moveToUIElement:(id)a0 options:(unsigned long long)a1;
- (void)setIsEventHandler:(char)a0 isKeyboardHandler:(char)a1;
- (char)setSingleSelectionWithRequest:(id)a0;
- (char)toggleMultipleSelectionWithRequest:(id)a0;
- (char)toggleSingleSelectionWithRequest:(id)a0;

@end
