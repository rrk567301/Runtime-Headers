@class NSWindow, NSMutableSet, SMCustomizeTreeNode_Client;

@interface SMMigrationCustomizeEditViewController : NSWindowController

@property (retain) SMCustomizeTreeNode_Client *treeNode;
@property (retain) NSMutableSet *nodesWhichWereOff;
@property NSWindow *sheetWindow;

- (id)init;
- (void).cxx_destruct;
- (void)pressedCancel:(id)a0;
- (void)dismissWindow;
- (void)showForTreeNode:(id)a0 overWindow:(id)a1;
- (void)recordNodesWhichAreOffInTree:(id)a0;
- (void)restoreNodeStates:(id)a0;
- (void)pressedOk:(id)a0;

@end
