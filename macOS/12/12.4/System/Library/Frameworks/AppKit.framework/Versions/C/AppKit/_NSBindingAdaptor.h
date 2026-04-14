@class NSMutableArray;

@interface _NSBindingAdaptor : NSObject {
    NSMutableArray *_binders;
    id _editableBinder;
    id _referenceBinder;
    id _contentBinder;
}

+ (id)returnDisconnectedBindingsOfObject:(id)a0;
+ (void)reconnectBindings:(id)a0;
+ (void)copyBindingsFromObject:(id)a0 toObject:(id)a1;

- (void)dealloc;
- (id)init;
- (void)controller:(id)a0 didChangeToFilterPredicate:(id)a1;
- (void)controller:(id)a0 didChangeToSortDescriptors:(id)a1;
- (void)controller:(id)a0 didChangeToSelectionIndexes:(id)a1;
- (id)binders;
- (void)addBinder:(id)a0;
- (void)removeBinder:(id)a0;
- (void)windowDidResize:(id)a0;
- (BOOL)browser:(id)a0 selectRow:(long long)a1 inColumn:(long long)a2;
- (void)browser:(id)a0 willDisplayCell:(id)a1 atRow:(long long)a2 column:(long long)a3;
- (void)browser:(id)a0 createRowsForColumn:(long long)a1 inMatrix:(id)a2;
- (id)contentBinder;
- (long long)numberOfRowsInTableView:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forTableColumn:(id)a2 row:(long long)a3;
- (BOOL)tableView:(id)a0 shouldEditTableColumn:(id)a1 row:(long long)a2;
- (id)updateInvalidatedObjectValue:(id)a0 forObject:(id)a1;
- (id)updateInvalidatedFont:(id)a0 forObject:(id)a1;
- (BOOL)handleValidationError:(id)a0 description:(id)a1 inEditor:(id)a2 errorUserInterfaceHandled:(BOOL *)a3;
- (void)objectDidTriggerAction:(id)a0;
- (void)controller:(id)a0 didChangeToSelectionIndexPaths:(id)a1;
- (void)window:(id)a0 didSetTitle:(id)a1;
- (void)drawer:(id)a0 didChangeToState:(BOOL)a1;
- (void)_discardEditingForAllBinders;
- (BOOL)validateAndCommitValueInEditor:(id)a0 editingIsEnding:(BOOL)a1 errorUserInterfaceHandled:(BOOL *)a2;
- (void)editorDidBeginEditing:(id)a0;
- (void)editorDidEndEditing:(id)a0;
- (BOOL)setEnabledStateForMenuItem:(id)a0 printDebuggingExplanation:(BOOL)a1;
- (void)outlineView:(id)a0 willCollapseItem:(id)a1;
- (void)outlineView:(id)a0 didExpandItem:(id)a1;
- (long long)outlineView:(id)a0 numberOfChildrenOfItem:(id)a1;
- (id)outlineView:(id)a0 child:(long long)a1 ofItem:(id)a2;
- (long long)boundOutlineView:(id)a0 isItemExpandable:(id)a1;
- (void)outlineView:(id)a0 willDisplayOutlineCell:(id)a1 forTableColumn:(id)a2 row:(long long)a3;
- (void)outlineColumn:(id)a0 willDisplayOutlineCell:(id)a1 row:(long long)a2;
- (void)outlineView:(id)a0 willDisplayCell:(id)a1 forTableColumn:(id)a2 row:(long long)a3;
- (void)outlineColumn:(id)a0 willDisplayCell:(id)a1 row:(long long)a2;
- (id)tableView:(id)a0 objectValueForRow:(long long)a1;
- (void)tableView:(id)a0 updateVisibleRowInformation:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)tableView:(id)a0 didChangeToSelectedRowIndexes:(id)a1;
- (void)tableView:(id)a0 didChangeToSortDescriptors:(id)a1;
- (void)selectionMechanismWasDismissed:(id)a0;
- (id)searchMenuTemplate;
- (void)searchFieldCellOrControlDidClearRecents:(id)a0;
- (void)tabView:(id)a0 didSelectTabViewItem:(id)a1;
- (id)referenceBinder;
- (id)editableBinder;
- (void)tableColumn:(id)a0 didChangeToWidth:(double)a1;
- (id)defaultSortDescriptorPrototypeForTableColumn:(id)a0;
- (void)tableColumn:(id)a0 willDisplayCell:(id)a1 row:(long long)a2;
- (void)objectDidTriggerDoubleClickAction:(id)a0;
- (id)updateInvalidatedTextColor:(id)a0 forObject:(id)a1;
- (BOOL)setEnabledStateForToolbarItem:(id)a0;
- (void)suspendBinderObserving;
- (void)resumeBinderObserving;
- (void)window:(id)a0 didChangeToVisibleState:(BOOL)a1;
- (void)_objectDidTriggerAction:(id)a0 bindingAdaptor:(id)a1;
- (void)_editor:(id)a0 didChangeEditingState:(BOOL)a1 bindingAdaptor:(id)a2;
- (BOOL)_handleValidationError:(id)a0 description:(id)a1 inEditor:(id)a2 errorUserInterfaceHandled:(BOOL *)a3 bindingAdaptor:(id)a4;
- (BOOL)_validateAndCommitValueInEditor:(id)a0 editingIsEnding:(BOOL)a1 errorUserInterfaceHandled:(BOOL *)a2 bindingAdaptor:(id)a3;
- (void)collectionView:(id)a0 didChangeToSelectionIndexes:(id)a1;

@end
