@interface ASKOutlineViewEventHandlerDelegate : ASKEventHandlerDelegate

- (char)outlineView:(id)a0 shouldCollapseItem:(id)a1;
- (char)outlineView:(id)a0 shouldEditTableColumn:(id)a1 item:(id)a2;
- (char)outlineView:(id)a0 shouldExpandItem:(id)a1;
- (char)outlineView:(id)a0 shouldSelectItem:(id)a1;
- (char)outlineView:(id)a0 shouldSelectTableColumn:(id)a1;
- (void)outlineView:(id)a0 willDisplayCell:(id)a1 forTableColumn:(id)a2 item:(id)a3;
- (void)outlineView:(id)a0 willDisplayOutlineCell:(id)a1 forTableColumn:(id)a2 item:(id)a3;
- (char)selectionShouldChangeInOutlineView:(id)a0;

@end
