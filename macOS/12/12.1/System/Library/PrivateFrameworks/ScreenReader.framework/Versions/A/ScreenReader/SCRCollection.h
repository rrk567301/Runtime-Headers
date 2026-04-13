@class SCRSelectionChangeHelper;

@interface SCRCollection : _SCRCollectionSectionBase <SCRSelectionChangeHelperElement>

@property (retain, nonatomic) SCRSelectionChangeHelper *_selectionChangeHelper;

- (void)dealloc;
- (void).cxx_destruct;
- (void)selectionDidChange;
- (BOOL)focusInto:(id)a0 event:(id)a1;
- (void)setIsEventHandler:(BOOL)a0 isKeyboardHandler:(BOOL)a1;
- (BOOL)allowFocusThroughSingleChild;
- (unsigned long long)directInteractionArrowCaptureMask;
- (BOOL)toggleSingleSelectionWithRequest:(id)a0;
- (BOOL)_moveToContentSibling:(id)a0;
- (void)_collectionSelectionDidChange;
- (id)moveToUIElement:(id)a0 options:(unsigned long long)a1;
- (unsigned long long)indexOfElement:(id)a0;
- (BOOL)setSingleSelectionWithRequest:(id)a0;
- (BOOL)toggleMultipleSelectionWithRequest:(id)a0;

@end
