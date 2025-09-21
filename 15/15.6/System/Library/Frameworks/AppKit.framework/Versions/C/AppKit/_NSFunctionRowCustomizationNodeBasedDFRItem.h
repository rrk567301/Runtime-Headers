@class NSTouchBarItemTreeItemNode;

@interface _NSFunctionRowCustomizationNodeBasedDFRItem : _NSFunctionRowCustomizationDFRItem

@property (copy) NSTouchBarItemTreeItemNode *treeNode;

- (void)dealloc;
- (id)representedItem;
- (char)isCenteredInTree:(id)a0;

@end
