@class FI_TBrowserContainerController;

@interface FI_TSidebarSplitViewItem : NSSplitViewItem

@property (weak, nonatomic) FI_TBrowserContainerController *browserContainer;

- (void).cxx_destruct;
- (char)canCollapse;

@end
