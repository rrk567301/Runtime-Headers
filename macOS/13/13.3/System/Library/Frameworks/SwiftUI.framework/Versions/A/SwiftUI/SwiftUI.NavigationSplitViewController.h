@class NSArray;

@interface SwiftUI.NavigationSplitViewController : NSSplitViewController {
    void /* unknown type, empty encoding */ _sidebarState;
    void /* unknown type, empty encoding */ sidebarIsTransitioning;
    void /* unknown type, empty encoding */ behavioralHostViews;
    void /* unknown type, empty encoding */ behavioralItems;
}

@property (nonatomic, copy) NSArray *splitViewItems;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)insertSplitViewItem:(id)a0 atIndex:(long long)a1;
- (void)splitViewItem:(id)a0 didChangeCollapsed:(BOOL)a1 animated:(BOOL)a2;
- (void)splitViewItem:(id)a0 willChangeCollapsed:(BOOL)a1 animated:(BOOL)a2;

@end
